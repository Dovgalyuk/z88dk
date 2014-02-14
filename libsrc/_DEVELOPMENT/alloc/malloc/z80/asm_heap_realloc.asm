
XLIB asm_heap_realloc

LIB asm_heap_realloc_unlocked
LIB __heap_lock_acquire, __heap_lock_release_0, error_enolck_zc

asm_heap_realloc:

   ; Attempt to resize the memory block p.  If this cannot be done
   ; in-place, a new memory block is allocated and the data at p
   ; is copied to the new block.
   ;
   ; If p == 0, an effective malloc is performed, except a successful
   ; allocation returns the largest block available in the heap to allow
   ; further quick growth via realloc().
   ;
   ; If p != 0 and size == 0, the block is reduced to zero size but
   ; is not freed.  You must call free() to free blocks.
   ;
   ; If successful, returns a pointer to the reallocated block, which
   ; may be p is the block was resized in place.

   ; enter : de = void *heap
   ;         hl = void *p (existing pointer to memory)
   ;         bc = uint size (realloc size)
   ;
   ; exit  : success
   ;
   ;            hl = void *p_new
   ;            carry reset
   ;
   ;         fail on insufficient memory
   ;
   ;            hl = 0
   ;            carry set, errno = ENOMEM
   ;
   ;         fail on lock acquisition
   ;
   ;            hl = 0
   ;            carry set, errno = ENOLCK
   ;
   ; uses  : af, bc, de, hl

   call __heap_lock_acquire
   jp c, error_enolck_zc
   
   push de                       ; save void *heap
   call asm_heap_realloc_unlocked

   jp __heap_lock_release_0
