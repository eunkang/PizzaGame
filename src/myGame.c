#include <stdlib.h>
#include <string.h>
#include <stdio.h>
#include "myGame.h"
#include "myLib.h"
#include "sound.h"
#include "cube.h"
#include "bgm.h"
#include "sadTrombone.h"
#include "Applause.h"

PLAYER player;
ANISPRITE life;
ANISPRITE ingredient;
int totalCatch;
int currentLevel;
int lifeRemaining;
int faceIndex;
int hOff;
int vOff;
int currentLevel;


OBJ_ATTR shadowOAM[128];

void initGame(int currLevel) {

	currentLevel = currLevel;

	initPlayer();
	initIng();
	initLife();

	vOff = 0;
	hOff = 0;

	totalCatch = 0;
	lifeRemaining = 5;
	faceIndex = 0;
}

void updateGame() {

	updatePlayer();
	updateIng();

}

void drawGame() {

	drawPlayer();
	drawIng();
	drawLife();

	waitForVBlank();

	DMANow(3, shadowOAM, OAM, 512);

	REG_BG0HOFF = hOff;
	REG_BG0VOFF = vOff;

	if (lifeRemaining == 3) {
		shadowOAM[60].attr0 = 140 | ATTR0_WIDE;
		shadowOAM[60].attr1 = 50 | ATTR1_LARGE;
		shadowOAM[60].attr2 = ATTR2_TILEID(0, 2);

		shadowOAM[61].attr0 = 140| ATTR0_WIDE;
		shadowOAM[61].attr1 = 114 | ATTR1_LARGE;
		shadowOAM[61].attr2 = ATTR2_TILEID(0, 10);

		shadowOAM[62].attr0 = 140 | ATTR0_WIDE;
		shadowOAM[62].attr1 = 178 | ATTR1_LARGE;
		shadowOAM[62].attr2 = ATTR2_TILEID(0, 18);
	}
}

void initPlayer() {

	// player location
	player.screenRow = 91;
	player.screenCol = 0;
	player.worldRow = 91;
	player.worldCol = 0;

	// player dimension
	player.width = 16;
	player.height = 16;

	// player speed
	player.cdel = 3;
	player.rdel = 3;

	// player animation factors
	player.aniCounter = 0;
	player.numFrame = 4;
	player.aniState = FRONT;
	player.status = 0;
}

void updatePlayer() {

	if (BUTTON_HELD(BUTTON_LEFT) && player.worldCol - player.cdel >= 0) {
		player.worldCol -= player.cdel;
		if (player.worldCol == SCREENWIDTH / 2) {
			hOff -= player.cdel;
		}
	}

	if (BUTTON_HELD(BUTTON_RIGHT) && player.worldCol + player.width <= SCREENWIDTH) {
		player.worldCol += player.cdel;
		if (player.worldCol == SCREENWIDTH / 2) {
			hOff += player.cdel;
		}
	}

	player.screenRow = player.worldRow - vOff;
	player.screenCol = player.worldCol - hOff;

	animatePlayer();
}

void animatePlayer() {
	
	player.prevAniState = player.aniState;
	player.aniState = IDLE;

	if (player.aniCounter % 20 == 0) {
		player.curFrame = (player.curFrame + 1) % player.numFrame;
	}

	if (BUTTON_HELD(BUTTON_UP)) {
		player.aniState = UP;
	}
	if (BUTTON_HELD(BUTTON_LEFT)) {
		player.aniState = LEFT;
	}
	if (BUTTON_HELD(BUTTON_RIGHT)) {
		player.aniState = RIGHT;
	}
	if (BUTTON_HELD(BUTTON_DOWN)) {
		player.aniState = FRONT;
	}

	if (player.aniState == IDLE) {
		player.curFrame = 0;
		player.aniCounter = 0;
		player.aniState = player.prevAniState;
	} else {
		player.aniCounter++;
	}
}


void drawPlayer() {

	shadowOAM[0].attr0 = player.screenRow | ATTR0_SQUARE;
	shadowOAM[0].attr1 = player.screenCol | ATTR1_SMALL;
	shadowOAM[0].attr2 = ATTR2_TILEID(12, player.aniState * 2);
}

void initIng() {

	ingredient.ingLevel = 1;

	// location
	ingredient.worldRow = 0;
	ingredient.worldCol = rand() % 180 + 10;
	ingredient.screenRow = 0;
	ingredient.screenCol = 0;

	//size
	ingredient.height = 16;
	ingredient.width = 16;

	ingredient.rdel = currentLevel + 1;
	// //level one ingredient speed
	// if (ingredient.ingLevel == 1) { 
	// 	//speed
	// 	ingredient.rdel = 2;
	// } 

	// //level two ingredient speed
	// if (ingredient.ingLevel == 2) {
	// 	ingredient.rdel = 3;
	// }

	//type
	ingredient.aniState = (rand() % 6) * 2;
}

void updateIng() {

	ingredient.worldRow += ingredient.rdel;

	if (ingredient.worldRow + ingredient.height - 1 >= SCREENHEIGHT) {

		ingredient.worldRow = 0;
		ingredient.worldCol = rand() % 180 + 10;

		ingredient.aniState = (rand() % 6) * 2;
	}

	//if ingredient gets to pot
	if (collision(ingredient.worldRow, ingredient.worldCol, ingredient.height, ingredient.width,
		player.worldRow, player.worldCol, player.height, player.width)) {

		//play collision sound
		playSoundB(cube, CUBELEN, CUBEFREQ, 0);

		//new position for ingredient
		ingredient.worldRow = 0;
		ingredient.worldCol = rand() % 180 + 10;

		if (currentLevel == 1) {
			//filter correct order
			switch (totalCatch) {

				case 0:
					if (ingredient.aniState == 0) {
						totalCatch++;
					} else {
						lifeRemaining--;
						faceIndex++;
					}
					break;

				case 1:
					if (ingredient.aniState == 2) {
						totalCatch++;
					} else {
						lifeRemaining--;
						faceIndex++;
					}
					break;

				case 2:
					if (ingredient.aniState == 4) {
						totalCatch++;
					} else {
						lifeRemaining--;
						faceIndex++;
					}
					break;

				case 3:
					if (ingredient.aniState == 6) {
						totalCatch++;
					} else {
						lifeRemaining--;
						faceIndex++;
					}
					break;

				case 4:
					if (ingredient.aniState == 8) {
						totalCatch++;
					} else {
						lifeRemaining--;
						faceIndex++;
					}
					break;

				default:
					break;
			}
		}

		if (currentLevel == 2) {

			//filter correct order
			switch (totalCatch) {

				case 0:
					if (ingredient.aniState == 8) {
						totalCatch++;
					} else {
						lifeRemaining--;
						faceIndex++;
					}
					break;

				case 1:
					if (ingredient.aniState == 6) {
						totalCatch++;
					} else {
						lifeRemaining--;
						faceIndex++;
					}
					break;

				case 2:
					if (ingredient.aniState == 4) {
						totalCatch++;
					} else {
						lifeRemaining--;
						faceIndex++;
					}
					break;

				case 3:
					if (ingredient.aniState == 2) {
						totalCatch++;
					} else {
						lifeRemaining--;
						faceIndex++;
					}
					break;

				case 4:
					if (ingredient.aniState == 0) {
						totalCatch++;
					} else {
						lifeRemaining--;
						faceIndex++;
					}
					break;

				default:
					break;
			}
		}

		//update ingredient type (sprite)
		ingredient.aniState = (rand() % 6) * 2;
	}

	// update ingredient screen location
	ingredient.screenRow = ingredient.worldRow - vOff;
	ingredient.screenCol = ingredient.worldCol - hOff;


	if (BUTTON_PRESSED(BUTTON_B)) {
		ingredient.rdel = 1;
	}
}

// draw ingredients
void drawIng() {

	shadowOAM[100].attr0 = ingredient.screenRow | ATTR0_SQUARE;
	shadowOAM[100].attr1 = ingredient.screenCol | ATTR1_SMALL;
	shadowOAM[100].attr2 = ATTR2_TILEID(ingredient.aniState, 0);
}

//initialize life remaining
void initLife() {
	life.height = 16;
	life.width = 16;
	life.worldRow = SCREENHEIGHT - life.height;
	life.worldCol = 2;
}

//draw life remaining
void drawLife() {

	shadowOAM[70].attr0 = 2 | ATTR0_WIDE;
	shadowOAM[70].attr1 = 2 | ATTR1_MEDIUM;
	shadowOAM[70].attr2 = ATTR2_TILEID(14 + (faceIndex * 2), 0);

	shadowOAM[71].attr0 = 2 | ATTR0_WIDE;
	shadowOAM[71].attr1 = (2 + 1 * 16) | ATTR1_MEDIUM;
	shadowOAM[71].attr2 = ATTR2_TILEID(14 + (faceIndex * 2), 0 + 1 * 2);

	shadowOAM[72].attr0 = 2 | ATTR0_WIDE;
	shadowOAM[72].attr1 = (2 + 2 * 16) | ATTR1_MEDIUM;
	shadowOAM[72].attr2 = ATTR2_TILEID(14 + (faceIndex * 2), 0 + 2 * 2);
	
	shadowOAM[73].attr0 = 2 |  ATTR0_WIDE;
	shadowOAM[73].attr1 = (2 + 3 * 16) | ATTR1_MEDIUM;
	shadowOAM[73].attr2 = ATTR2_TILEID(14 + (faceIndex * 2), 0 + 3 * 2);

	shadowOAM[74].attr0 = 2 | ATTR0_WIDE;
	shadowOAM[74].attr1 = (2 + 4 * 16) | ATTR1_MEDIUM;
	shadowOAM[74].attr2 = ATTR2_TILEID(14 + (faceIndex * 2), 0 + 4 * 2);

}