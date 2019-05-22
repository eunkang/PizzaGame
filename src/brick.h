
//{{BLOCK(brick)

//======================================================================
//
//	brick, 512x256@4, 
//	+ palette 256 entries, not compressed
//	+ 31 tiles (t|f|p reduced) not compressed
//	+ regular map (in SBBs), not compressed, 64x32 
//	Total size: 512 + 992 + 4096 = 5600
//
//	Time-stamp: 2019-04-18, 20:37:17
//	Exported by Cearn's GBA Image Transmogrifier, v0.8.3
//	( http://www.coranac.com/projects/#grit )
//
//======================================================================

#ifndef GRIT_BRICK_H
#define GRIT_BRICK_H

#define brickTilesLen 992
extern const unsigned short brickTiles[496];

#define brickMapLen 4096
extern const unsigned short brickMap[2048];

#define brickPalLen 512
extern const unsigned short brickPal[256];

#endif // GRIT_BRICK_H

//}}BLOCK(brick)
