#include <stdlib.h>
#include <stdio.h>
#include <time.h>
#include "myLib.h"

// player struct
typedef struct {
	int height;
	int width;
	int cdel;
	int rdel;
	int curFrame;
	int numFrame;
	int aniCounter;
	int aniState;
	int prevAniState;
	int worldRow;
	int worldCol;
	int status;
	int cDirection;
	int screenRow;
	int screenCol;
} PLAYER;

// ingredient struct
typedef struct {
	int screenRow;
	int screenCol;
	int worldRow;
	int worldCol;
	int height;
	int width;
	int rdel;
	int cdel;
	int active;
	int aniState;
	int aniCounter;
	int ingType;
	int cDirection;
	int index;
	int ingLevel;
} INGREDIENT;

// sprite states
enum {FRONT, LEFT, RIGHT, UP, IDLE};

#define MAPWIDTH 320
#define MAPHEIGHT 160

extern PLAYER player;
extern ANISPRITE ingredient;
extern int totalCatch;
extern int randomIngredient;
extern int lifeRemaining;
extern int currentLevel;

void initGame(int currLevel);
void updateGame();
void drawGame();
void initPlayer();
void updatePlayer();
void drawPlayer();
void animatePlayer();
void initIng();
void updateIng();
void drawIng();
void initLife();
void updateLife();
void drawLife();

// Custom Game Colors
#define NUMCOLORS 6
// This does an enum trick to make them the last indeces of the palette
enum {BLACKID=(256-NUMCOLORS), REDID};
extern unsigned short colors[NUMCOLORS];
