
//{{BLOCK(game)

//======================================================================
//
//	game, 512x256@4, 
//	+ palette 256 entries, not compressed
//	+ 79 tiles (t|f|p reduced) not compressed
//	+ regular map (in SBBs), not compressed, 64x32 
//	Total size: 512 + 2528 + 4096 = 7136
//
//	Time-stamp: 2019-04-18, 19:55:57
//	Exported by Cearn's GBA Image Transmogrifier, v0.8.3
//	( http://www.coranac.com/projects/#grit )
//
//======================================================================

#ifndef GRIT_GAME_H
#define GRIT_GAME_H

#define gameTilesLen 2528
extern const unsigned short gameTiles[1264];

#define gameMapLen 4096
extern const unsigned short gameMap[2048];

#define gamePalLen 512
extern const unsigned short gamePal[256];

#endif // GRIT_GAME_H

//}}BLOCK(game)
