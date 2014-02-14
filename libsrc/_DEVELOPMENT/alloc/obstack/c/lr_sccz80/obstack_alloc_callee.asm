
; ===============================================================
; Dec 2013
; ===============================================================
; 
; void *obstack_alloc(struct obstack *ob, size_t size)
;
; Allocate an uninitialized block of size bytes from the obstack.
; Implicitly closes and growing object.
;
; ===============================================================

XDEF obstack_alloc_callee

obstack_alloc_callee:

   pop hl
   pop bc
   ex (sp),hl
   
   INCLUDE "../../z80/asm_obstack_alloc.asm"
