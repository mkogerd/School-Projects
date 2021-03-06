#ifndef BITMAPS_H
#define BITMAPS_H

// ******************** Image Access Structure ******************
struct Bitmap_struct{
	int width;									// bitmap dimensions for display
	int height;
	const unsigned short* array;// bitmap pixel array
};
typedef const struct Bitmap_struct Bitmap;

// Access definitions
// NOTE: access definitions start lower-case, actual arrays start upper-case
typedef enum{
	smallEnemy10pointA,
	smallEnemy10pointB,
	smallEnemy20pointA,
	smallEnemy20pointB,
	smallEnemy30pointA,
	smallEnemy30pointB,
	playerShip0,
	bunker0,
	smallPotato,
	blueBall,
	greenBall,
	cursor,
	spriteCount							// Not associated with any sprite, just tracks amount of sprites
} sprite;
// Array cointaining all available sprites
extern Bitmap Sprite[spriteCount];

typedef enum{
	speedUpTile,
	slowDownTile,
	shieldTile,
	hpUpTile,
	powerupTileCount							// Not associated with any sprite, just tracks amount of powerup tiles
} powerupTile;
// Array containing all available Powerup Tiles
extern Bitmap PowerupTile[powerupTileCount];

typedef enum{
	map1,
	map2,
	map3,
	mapCount							// Not associated with any sprite, just tracks amount of powerup tiles
} map;
// Array containing all available maps
extern Bitmap Map[mapCount];

// *************************** MAP LAYOUTS ***************************
// 16*20 map
extern const unsigned short Map2[];
// 32*40 map
extern const unsigned short Map3[];
// 32*20 map
extern const unsigned short Map4[];
// *************************** POWERUPTILES ***************************
// winged sandal
// width=16 x height=16
extern const unsigned short SpeedUpTile[];
// Snail
// width=16 x height=16
extern const unsigned short SlowDownTile[];
 // Windows defender shield
 // width=16 x height=16
extern const unsigned short ShieldTile[];
 // Heart
 // width=16 x height=16
extern const unsigned short HPUpTile[];
// *************************** SPRITES ***************************
// enemy ship that starts at the top of the screen (arms/mouth closed)
// width=16 x height=10
extern const unsigned short SmallEnemy10pointA[];

// enemy ship that starts at the top of the screen (arms/mouth open)
// width=16 x height=10
extern const unsigned short SmallEnemy10pointB[];

// enemy ship that starts in the middle of the screen (arms together)
// width=16 x height=10
extern const unsigned short SmallEnemy20pointA[];

// enemy ship that starts in the middle of the screen (arms apart)
// width=16 x height=10
extern const unsigned short SmallEnemy20pointB[];

// enemy ship that starts at the bottom of the screen (arms down)
// width=16 x height=10
extern const unsigned short SmallEnemy30pointA[];

// enemy ship that starts at the bottom of the screen (arms up)
// width=16 x height=10
extern const unsigned short SmallEnemy30pointB[]; 

// image of the player's ship
// includes two blacked out columns on the left and right sides of the image to prevent smearing when moved 2 pixels to the left or right
// width=18 x height=8
extern const unsigned short PlayerShip0[];

// small shield floating in space to cover the player's ship from enemy fire (undamaged)
// width=18 x height=5
extern const unsigned short Bunker0[];

// small potato icon to indicate when player is "it"
// width=8 x height=8
extern const unsigned short SmallPotato[];

// Blue ball with black background
// width=16 x height=16
extern const unsigned short BlueBall[];

// Green ball with black background
// width=16 x height=16
extern const unsigned short GreenBall[];

// Cyan star cursor with black background
// width=7 x height=7
extern const unsigned short Cursor[];

// *************************** POWERUPTILES ***************************
#endif
