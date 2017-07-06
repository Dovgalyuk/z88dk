
// automatically generated by m4 from headers in proto subdir


#ifndef __BIFROST_L_H__
#define __BIFROST_L_H__

#include <intrinsic.h>

/* ----------------------------------------------------------------
 * Z88DK INTERFACE LIBRARY FOR THE BIFROST* ENGINE - RELEASE 1.2/L
 *
 * If you use this interface library, you must load afterwards the
 * BIFROST* ENGINE and a multicolor tile set. For a detailed sample
 * see file "bifrostdem.c".
 *
 * Original version and further information is available at
 * http://www.worldofspectrum.org/infoseekid.cgi?id=0027405
 *
 * Copyleft (k) Einar Saukas, Timmy
 * Additional improvements provided by Alcoholics Anonymous
 * ----------------------------------------------------------------
 */

// ----------------------------------------------------------------
// Constants
// ----------------------------------------------------------------

extern unsigned char BIFROSTL_tilemap[81];

#define BIFROSTL_STATIC    128
#define BIFROSTL_DISABLED  255

// ----------------------------------------------------------------
// Activate multicolor rendering with BIFROST* ENGINE
// ----------------------------------------------------------------

extern void BIFROSTL_start(void) __preserves_regs(b,c,d,e);


// ----------------------------------------------------------------
// Deactivate multicolor rendering with BIFROST* ENGINE
// ----------------------------------------------------------------

extern void BIFROSTL_stop(void) __preserves_regs(b,c,d,e);


// ----------------------------------------------------------------
// Execute HALT (wait for next frame).
//
// If an interrupt occurs while certain routines (BIFROSTL_drawTileL,
// BIFROSTL_showTilePosL, and BIFROSTL_showNextTile) are under
// execution, the program may crash.
//
// Routine BIFROSTL_halt can be used to avoid these problems.
// Immediately after calling it, your program will have some time
// (about 20K T) to execute a few other routines without any
// interruption.
// ----------------------------------------------------------------

#define BIFROSTL_halt()  intrinsic_halt()

// ----------------------------------------------------------------
// Location of BIFROST ISR hook
// ----------------------------------------------------------------

extern unsigned char BIFROSTL_ISR_HOOK[3];

// ----------------------------------------------------------------
// Place a multicolor tile index into the tile map. Add value
// BIFROSTL_STATIC for static tile, otherwise it will be animated
//
// Parameters:
//     px: tile vertical position (0-8)
//     py: tile horizontal position (0-8)
//     tile: tile index (0-255)
//
// Obs: Also available as inline macro (for constant parameters)
// ----------------------------------------------------------------

extern void BIFROSTL_setTile(unsigned char px,unsigned char py,unsigned char tile) __preserves_regs(b,d);
extern void BIFROSTL_setTile_callee(unsigned char px,unsigned char py,unsigned char tile) __preserves_regs(b) __z88dk_callee;
#define BIFROSTL_setTile(a,b,c) BIFROSTL_setTile_callee(a,b,c)



#define M_BIFROSTL_SETTILE(px, py, tile)  BIFROSTL_tilemap[(px)*9+(py)] = (tile)

// ----------------------------------------------------------------
// Obtain a multicolor tile index from the tile map
//
// Parameters:
//     px: tile vertical position (0-8)
//     py: tile horizontal position (0-8)
//
// Returns:
//     Tile index currently stored in this position
//
// Obs: Also available as inline macro (for constant parameters)
// ----------------------------------------------------------------

extern unsigned char BIFROSTL_getTile(unsigned char px,unsigned char py) __preserves_regs(b,d,e);
extern unsigned char BIFROSTL_getTile_callee(unsigned char px,unsigned char py) __preserves_regs(b,d,e) __z88dk_callee;
#define BIFROSTL_getTile(a,b) BIFROSTL_getTile_callee(a,b)



#define M_BIFROSTL_GETTILE(px, py)   BIFROSTL_tilemap[(px)*9+(py)]

// ----------------------------------------------------------------
// Convert multicolor tile index into the equivalent animation group
//
// Parameters:
//     tile: tile index (0-255)
//
// Returns:
//     Animation group for animated tile, otherwise the same tile index
// ----------------------------------------------------------------

extern unsigned char BIFROSTL_getAnimGroup(unsigned char tile) __preserves_regs(b,c,d,e);
extern unsigned char BIFROSTL_getAnimGroup_fastcall(unsigned char tile) __preserves_regs(b,c,d,e,h) __z88dk_fastcall;
#define BIFROSTL_getAnimGroup(a) BIFROSTL_getAnimGroup_fastcall(a)



// ----------------------------------------------------------------
// Locate memory address that stores the multicolor attribute of a
// certain screen position inside the multicolor area
//
// Parameters:
//     lin: pixel line (16-159)
//     col: char column (1-18)
//
// Returns:
//     Memory address of the multicolor attribute
// ----------------------------------------------------------------

extern unsigned char *BIFROSTL_findAttrH(unsigned char lin,unsigned char col) __preserves_regs(a);
extern unsigned char *BIFROSTL_findAttrH_callee(unsigned char lin,unsigned char col) __preserves_regs(a) __z88dk_callee;
#define BIFROSTL_findAttrH(a,b) BIFROSTL_findAttrH_callee(a,b)



// ----------------------------------------------------------------
// Reconfigure BIFROST* ENGINE to read tile images from another address
//
// Parameters:
//     addr: New tile images address
// ----------------------------------------------------------------

extern unsigned char BIFROSTL_TILE_IMAGES[];
#define BIFROSTL_resetTileImages(addr)   intrinsic_store16(_BIFROSTL_TILE_IMAGES,addr)

// ----------------------------------------------------------------
// Reconfigure BIFROST* ENGINE to animate at 2 frames per second
// ----------------------------------------------------------------

#define BIFROSTL_resetAnimSlow()  (*((unsigned char*)59035)=254)

// ----------------------------------------------------------------
// Reconfigure BIFROST* ENGINE to animate at 4 frames per second
// ----------------------------------------------------------------

#define BIFROSTL_resetAnimFast()  (*((unsigned char*)59035)=198)

// ----------------------------------------------------------------
// Reconfigure BIFROST* ENGINE to use 2 frames per animation group
// ----------------------------------------------------------------

extern void BIFROSTL_resetAnim2Frames(void) __preserves_regs(b,c,d,e);


// ----------------------------------------------------------------
// Reconfigure BIFROST* ENGINE to use 4 frames per animation group
// ----------------------------------------------------------------

extern void BIFROSTL_resetAnim4Frames(void) __preserves_regs(b,c,d,e);


// ----------------------------------------------------------------
// Advanced conversions
// ----------------------------------------------------------------

#define PX2LIN(px)              (((px)+1)<<4)
#define PX2ROW(px)              (((px)<<1)+1)

#define ROW2LIN(row)            (((row)+1)<<3)
#define ROW2PX_UP(row)          ((row)>>1)
#define ROW2PX_DOWN(row)        (((row)-1)>>1)

#define LIN2ROW_UP(lin)         (((lin)>>3)-1)
#define LIN2ROW_DOWN(lin)       (((lin)-1)>>3)
#define LIN2PX_UP(lin)          (((lin)>>4)-1)
#define LIN2PX_DOWN(lin)        (((lin)-1)>>4)

#define PY2COL(py)              (((py)<<1)+1)
#define COL2PY_LEFT(col)        (((col)-1)>>1)
#define COL2PY_RIGHT(col)       ((col)>>1)

// ----------------------------------------------------------------
// Instantly draw a multicolor tile at the specified screen position
//
// Parameters:
//     row: char row (1-17)
//     col: char column (1,3,5..17)
//     tile: tile index (0-255)
//
// WARNING: If this routine is under execution when interrupt
//          occurs, program may crash!!! (see BIFROSTL_halt)
// ----------------------------------------------------------------

extern void BIFROSTL_drawTileL(unsigned char row,unsigned char col,unsigned char tile);
extern void BIFROSTL_drawTileL_callee(unsigned char row,unsigned char col,unsigned char tile) __z88dk_callee;
#define BIFROSTL_drawTileL(a,b,c) BIFROSTL_drawTileL_callee(a,b,c)



// ----------------------------------------------------------------
// Instantly show/animate the multicolor tile currently stored in
// the specified tile map position
//
// Parameters:
//     row: char row (1,3,5..17)
//     col: char column (1,3,5..17)
//
// WARNING: If this routine is under execution when interrupt
//          occurs, program may crash!!! (see BIFROSTL_halt)
// ----------------------------------------------------------------

extern void BIFROSTL_showTilePosL(unsigned char row,unsigned char col);
extern void BIFROSTL_showTilePosL_callee(unsigned char row,unsigned char col) __z88dk_callee;
#define BIFROSTL_showTilePosL(a,b) BIFROSTL_showTilePosL_callee(a,b)



// ----------------------------------------------------------------
// Instantly show/animate the next multicolor tile currently stored
// in the tile map position, according to a pre-established drawing
// order
//
// WARNING: If this routine is under execution when interrupt
//          occurs, program may crash!!! (see BIFROSTL_halt)
// ----------------------------------------------------------------

extern void BIFROSTL_showNextTile(void);


// ----------------------------------------------------------------
// Instantly change the attributes in a tile area (16x16 pixels) to
// the specified value (use the same INK and PAPER values to "erase"
// a tile)
//
// Parameters:
//     row: char row (1-17)
//     col: char column (1,3,5..17)
//     attr: attribute value (0-255), INK+8*PAPER+64*BRIGHT+128*FLASH
// ----------------------------------------------------------------

extern void BIFROSTL_fillTileAttrL(unsigned char row,unsigned char col,unsigned char attr);
extern void BIFROSTL_fillTileAttrL_callee(unsigned char row,unsigned char col,unsigned char attr) __z88dk_callee;
#define BIFROSTL_fillTileAttrL(a,b,c) BIFROSTL_fillTileAttrL_callee(a,b,c)



#endif
