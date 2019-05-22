/*
This is a Pizza Game where player need to catch/collect all five ingredients in correct order within 5 trials.
Face sprite that is located at top left corner will be changed everytime if the player misses the order.
The ingredients will be dropping down from the top randomly and player need to avoid missing the order or getting
the cockroach in their pot. If they use their all excuses, they lose. Otherwise, they win.
Press start for instruction, pause, return to game, start new game
*/

#include "myLib.h"
#include "game.h"
#include "spriteSheet.h"
#include "start.h"
#include "pause.h"
#include "myGame.h"
#include "win.h"
#include "lose.h"
#include "instruction.h"
#include "brick.h"
#include "levelOne.h"
#include "levelTwo.h"
#include "sound.h"
#include "bgm.h"
#include "cube.h"
#include "sadTrombone.h"
#include "Applause.h"

// prototypes
void initialize();

// state prototypes
void goToStart();
void start();
void goToInstruction();
void instruction();
void goToLevelOne();
void LevelOne();
void goToLevelTwo();
void LevelTwo();
void goToGame();
void game();
void goToPause();
void pause();
void goToWin();
void win();
void goToLose();
void lose();

//game states
enum {START, INSTRUCTION, ONE, TWO, GAME, PAUSE, WIN, LOSE};
int state;

//buttons
unsigned short buttons;
unsigned short oldButtons;

int hOff = 0;
int vOff = 0;

OBJ_ATTR shadowOAM[128];

int main() {

	initialize();
	setupSounds();
	setupInterrupts();

	while(1) {

		//update buttons
		oldButtons = buttons;
		buttons = BUTTONS;

		//state machine
		switch(state) {

			case START:
				start();
				break;
			case INSTRUCTION:
				instruction();
				break;
			case ONE:
				levelOne();
				break;
			case TWO:
				levelTwo();
				break;
			case GAME:
				game();
				break;
			case PAUSE:
				pause();
				break;
			case WIN:
				win();
				break;
			case LOSE:
				lose();
				break;
		}

	}
	return 0;
}

//GBA setting
void initialize() {

	//load palettes
	DMANow(3, startPal, PALETTE, 256);
	DMANow(3, spriteSheetPal, SPRITEPALETTE, 256);

	hideSprites();

	REG_BG0CNT = BG_SIZE_LARGE | BG_CHARBLOCK(0) | BG_SCREENBLOCK(28);

	goToStart();
}

void goToStart() {

	DMANow(3, startTiles, &CHARBLOCK[0], startTilesLen/2);
	DMANow(3, startMap, &SCREENBLOCK[28], startMapLen/2);

	REG_DISPCTL = MODE0 | BG0_ENABLE;

	state = START;

	stopSound();
	playSoundA(bgm, BGMLEN, BGMFREQ, 1);
}

void start() {

	if (BUTTON_PRESSED(BUTTON_START)) {

		goToInstruction();
	}
}

void goToInstruction() {

	DMANow(3, instructionTiles, &CHARBLOCK[0], instructionTilesLen/2);
	DMANow(3, instructionMap, &SCREENBLOCK[28], instructionMapLen/2);

	REG_DISPCTL = MODE0 | BG0_ENABLE;

	state = INSTRUCTION;
}

void instruction() {

	if(BUTTON_PRESSED(BUTTON_START)) {

		goToLevelOne();
	}
}

void goToLevelOne() {
	
	DMANow(3, levelOneTiles, &CHARBLOCK[0], levelOneTilesLen/2);
	DMANow(3, levelOneMap, &SCREENBLOCK[28], levelOneMapLen/2);

	REG_DISPCTL = MODE0 | BG0_ENABLE;

	state = ONE;
}

void levelOne() {

	if (BUTTON_PRESSED(BUTTON_START)) {
		initGame(1);
		goToGame();
	}
	
}

void goToLevelTwo() {

	stopSound();
	playSoundA(bgm, BGMLEN, BGMFREQ, 1);

	DMANow(3, levelTwoTiles, &CHARBLOCK[0], levelTwoTilesLen/2);
	DMANow(3, levelTwoMap, &SCREENBLOCK[28], levelTwoMapLen/2);

	REG_DISPCTL = MODE0 | BG0_ENABLE;

	state = TWO;
}

void levelTwo() {

	if (BUTTON_PRESSED(BUTTON_START)) {
		initGame(2);
		goToGame();
	}
}

void goToGame() {

	//loading brick background 
	DMANow(3, brickTiles, &CHARBLOCK[0], brickTilesLen/2);
	DMANow(3, brickMap, &SCREENBLOCK[28], brickMapLen/2);

	//loading kitchen background
	DMANow(3, gameTiles, &CHARBLOCK[2], gameTilesLen/2);
	DMANow(3, gameMap, &SCREENBLOCK[24], gameMapLen/2);

	//loading sprites
	DMANow(3, spriteSheetTiles, &CHARBLOCK[4], spriteSheetTilesLen/2);

	//enabling backgrounds
	REG_DISPCTL = MODE0 | BG0_ENABLE | BG1_ENABLE | SPRITE_ENABLE;

	hideSprites();
 
	REG_BG1CNT = BG_4BPP | BG_SIZE_WIDE | BG_CHARBLOCK(0) | BG_SCREENBLOCK(28);
	REG_BG0CNT = BG_4BPP | BG_SIZE_WIDE | BG_CHARBLOCK(2) | BG_SCREENBLOCK(24);

	state = GAME;
}

void game() {

	updateGame();
	drawGame();

	if (BUTTON_PRESSED(BUTTON_START)) {
		pauseSound();
		goToPause();
	}

	if (totalCatch == 5) {
		goToWin();
	}

	if (lifeRemaining == 0) {
		goToLose();
	}

}

void goToPause() {

	DMANow(3, pauseTiles, &CHARBLOCK[0], pauseTilesLen/2);
	DMANow(3, pauseMap, &SCREENBLOCK[28], pauseMapLen/2);

	REG_DISPCTL = MODE0 | BG0_ENABLE;
	REG_BG0CNT = BG_4BPP | BG_SIZE_LARGE | BG_CHARBLOCK(0) | BG_SCREENBLOCK(28);

	waitForVBlank();
	flipPage();

	state = PAUSE;
}

void pause() {

	waitForVBlank();

	if(BUTTON_PRESSED(BUTTON_START)) {
		unpauseSound();
		goToGame();
	}
}

void goToWin() {

	DMANow(3, winTiles, &CHARBLOCK[0], winTilesLen/2);
	DMANow(3, winMap, &SCREENBLOCK[28], winMapLen/2);

	REG_DISPCTL = MODE0 | BG0_ENABLE;
	REG_BG0CNT = BG_4BPP | BG_SIZE_LARGE | BG_CHARBLOCK(0) | BG_SCREENBLOCK(28);

	waitForVBlank();
	flipPage();
	stopSound();
	playSoundB(Applause, APPLAUSELEN, APPLAUSEFREQ, 1);
	hideSprites();


	state = WIN;
}

void win() {

	waitForVBlank();

	if (BUTTON_PRESSED(BUTTON_START)) {

		if (currentLevel == 1) {
			goToLevelTwo();
		}

		if (currentLevel == 2) {
			goToStart();
		}
	}
}

void goToLose() {
	DMANow(3, loseTiles, &CHARBLOCK[0], loseTilesLen/2);
	DMANow(3, loseMap, &SCREENBLOCK[28], loseMapLen/2);

	REG_DISPCTL = MODE0 | BG0_ENABLE;
	REG_BG0CNT = BG_4BPP | BG_SIZE_LARGE | BG_CHARBLOCK(0) | BG_SCREENBLOCK(28);

	waitForVBlank();
	flipPage();
	stopSound();
	playSoundA(sadTrombone, SADTROMBONELEN, SADTROMBONEFREQ, 0);
	hideSprites();

	state = LOSE;
}

void lose() {

	waitForVBlank();

	if(BUTTON_PRESSED(BUTTON_START)) {
		goToStart();
	}
}



