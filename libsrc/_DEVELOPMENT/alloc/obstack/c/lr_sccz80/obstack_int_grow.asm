
; void *obstack_int_grow(struct obstack *ob, int data)

XLIB obstack_int_grow

LIB asm_obstack_int_grow

obstack_int_grow:

   pop af
   pop bc
   pop hl
   
   push hl
   push bc
   push af
   
   jp asm_obstack_int_grow
