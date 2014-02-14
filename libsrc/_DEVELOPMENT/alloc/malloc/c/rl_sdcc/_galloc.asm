
; ===============================================================
; Dec 2013
; ===============================================================
; 
; void *_galloc(void *p, int resize)
;
; Block p assumed to belong to the thread's default heap.
;
; Attempts to grow or shrink block p by signed resize bytes.
; This is a thin layer on top of realloc.
;
; Non-standard function used internally by the C library.
; See heap_realloc for exit conditions.
;
; ===============================================================

XDEF _galloc

_galloc:

   pop de
   pop hl
   pop bc
   
   push bc
   push hl
   push de
   
   INCLUDE "../../z80/asm_galloc.asm"
