;
;       Z88DK Graphics Functions - Small C+ stubs
;
;	$Id: xorplot.asm,v 1.5 2016-04-22 20:17:17 dom Exp $
;

;Usage: xorplot(int x, int y)

		SECTION	  code_clib
                PUBLIC    c_xorplot
                PUBLIC    _c_xorplot
                EXTERN     swapgfxbk
                EXTERN     __graphics_end

                EXTERN     c_xorpixel

.c_xorplot
._c_xorplot
		push	ix
		ld	ix,2
		add	ix,sp
		ld	l,(ix+2)
		ld	h,(ix+4)
                call    swapgfxbk
                call    c_xorpixel
                jp      __graphics_end

