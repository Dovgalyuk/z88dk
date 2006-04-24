; void *adt_QueuePopFront(struct adt_Queue *q)
; 09.2005 aralbrec

XLIB adt_QueuePopFront
XREF _u_free

; enter: HL = struct adt_Queue *
; exit : HL = top item, item removed from queue
;           = 0 and carry reset if queue empty

.adt_QueuePopFront
   ld e,(hl)
   inc hl
   ld d,(hl)                ; de = front adt_QueueNode *

   ex de,hl                 ; hl = adt_QueueNode *, de = adt_Queue.front + 1b
   ld a,h
   or l
   ret z

   ld c,(hl)
   inc hl
   ld b,(hl)
   push bc                  ; stack = item
   inc hl                   ; hl = adt_QueueNode.next
   dec de                   ; de = adt_Queue.front

   ld a,(hl)                ; next node becomes front
   ldi                      ; so set adt_Queue.front = adt_QueueNode.next
   or (hl)
   ldi
   jp nz, notemptynow       ; if the queue is now empty
   ld (de),a
   inc de
   ld (de),a

.notemptynow                ; hl = adt_QueueNode.next + 2b
   ld bc,-4
   add hl,bc                ; hl = adt_QueueNode *
   push hl
   call _u_free             ; free empty container
   pop hl

   pop hl                   ; hl = item
   scf
   ret
