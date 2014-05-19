
IF !_CLIB_CFG_ASM_
defc _CLIB_CFG_ASM_ = 1

; *********************************
; IF YOU MAKE CHANGES TO THIS FILE
; YOU MUST RECOMPILE THE ZX LIBRARY
; *********************************

;;;;;;;;;;;;;;;;;;;;
; CLIB CONFIGURATION
;;;;;;;;;;;;;;;;;;;;

; Set these flags prior to making libraries

;;;;;;;;;;;;;;;;;
; multi-threading
;;;;;;;;;;;;;;;;;

; Enables multi-threading features of the library.

defc __CLIB_OPT_MULTITHREAD = $00

; bit 0 = $01 = enable locking on heaps
; bit 1 = $02 = enable recursive locks on FILEs
; bit 2 = $04 = enable stdio lock on lists of FILEs

; Setting to zero will reduce code size and slightly speed
; up execution.
;
; When multi-threading is enabled, the program can still
; bypass locking by calling the _unlocked versions of functions
; but if there are synchronization issues, you do so at
; your own risk.
;
; When multi-threading is disabled, there is no difference
; between the _unlocked and regular function entry points.
; However, the locks are still present in the data structures
; and, for example, FILEs can still be locked via flockfile()
; and family.  Note that when multi-threading is disabled,
; the stdio functions will not be blocked by a lock but the
; user program can perform its own synchronization by using
; flockfile() appropriately.


;;;;;;;;;;;;;;;;;;;;;;
; integer math options
;;;;;;;;;;;;;;;;;;;;;;

; This option affects how multiplications and divisions
; of integers and longs are performed by the compiler
; and the library.

; Setting the value of this flag appropriately allows
; selection of an integer math lib that ranges from
; very fast and very large to very slow and very small.

defc __CLIB_OPT_IMATH = 0

; < 50 = select small integer math library
; > 50 = select fast integer math library

; The specific integer math library selected above
; can be further tailored by choosing options below.

; FAST INTEGER MATH LIBRARY OPTIONS

defc __CLIB_OPT_IMATH_FAST = $00

; bit 0 = $01 = enable loop unrolling in division
; bit 1 = $02 = enable leading zero elimination in division
; bit 2 = $04 = enable loop unrolling in multiplication
; bit 3 = $08 = enable leading zero elimination in multiplication
; bit 7 = $80 = enable LIA-1 overflow saturation for multiplication

; Notes:
;
; The C standard specifies that unsigned multiplication
; is performed modulo the bit width of the type size
; (ie multiplies "wrap").  In contrast, LIA-1 specifies
; that overflowing multiplies should saturate.  The LIA-1
; option causes multiplications to adopt this behaviour :-
; overflowing multiplies saturate to maximum value and
; errno is set to indicate an overflow condition.  Adopting
; this option not only leads to more correct results but
; also leads to faster multiplication code.
;
; sdcc cannot generate code for LIA-1 mode.

; The following flag allows selection between small+slow
; and large+fast implementations of some integer math
; operations:

defc __CLIB_OPT_IMATH_SELECT = $00

; bit 0 = $01 = choose fast arithmetic shift right operator
; bit 1 = $02 = choose fast logical shift right operator
; bit 2 = $04 = choose fast shift left operator

;;;;;;;;;;;;;;;;;;;;;;;;;;;
; text to number conversion
;;;;;;;;;;;;;;;;;;;;;;;;;;;

; Specialized functions are available for fast conversion
; of binary, octal, decimal and hex numbers.
;
; Setting the appropriate bits in this flag will enable
; use of those specialized functions by the library.
;
; Library functions affected:
;
;    _strtoi, _strtou, strtol, strtoul, scanf
;

defc __CLIB_OPT_TXT2NUM = $00

; bit 0 = $01 = enable specialized binary conversion for integers
; bit 1 = $02 = enable specialized octal conversion for integers
; bit 2 = $04 = enable specialized decimal conversion for integers
; bit 3 = $08 = enable specialized hex conversion for integers
;
; bit 4 = $10 = enable specialized binary conversion for longs
; bit 5 = $20 = enable specialized octal conversion for longs
; bit 6 = $40 = enable specialized decimal conversion for longs
; bit 7 = $80 = enable specialized hex conversion for longs

; Note: Normally, enabling specialized long functions will also
; cause their integer counterparts to be pulled into the user code.
; This is because the specialized long functions will try to
; perform the conversion using faster 16-bit code when it can.
; If you use a specialized long function, you may want to try
; enabling the specialized integer function to see if code
; size remains unchanged.
;
; Note: Some library functions such as printf and scanf may
; use the specialized integer text to decimal conversion
; function directly, in which case enabling that bit will
; result in no additional code size.

; There are two implementations of each specialized function.
; One uses smaller but slower code and the other uses larger
; but faster code.  Choose the faster code by setting the
; appropriate bit in the following flag:

defc __CLIB_OPT_TXT2NUM_SELECT = $00

; bit 0 = $01 = choose fast binary conversion
; bit 1 = $02 = choose fast octal conversion
; bit 2 = $04 = choose fast decimal conversion
; bit 3 = $08 = choose fast hex conversion

;;;;;;;;;;;;;;;;;;;;;;;;;;;
; number to text conversion
;;;;;;;;;;;;;;;;;;;;;;;;;;;

; Specialized functions are available for fast conversion
; of binary, octal, decimal and hex numbers.
;
; Setting the appropriate bits in this flag will enable
; use of those specialized functions by the library.
;
; Library functions affected:
;
;    itoa, utoa, ltoa, ultoa, printf
;

defc __CLIB_OPT_NUM2TXT = $00

; bit 0 = $01 = enable specialized binary conversion for integers
; bit 1 = $02 = enable specialized octal conversion for integers
; bit 2 = $04 = enable specialized decimal conversion for integers
; bit 3 = $08 = enable specialized hex conversion for integers
;
; bit 4 = $10 = enable specialized binary conversion for longs
; bit 5 = $20 = enable specialized octal conversion for longs
; bit 6 = $40 = enable specialized decimal conversion for longs
; bit 7 = $80 = enable specialized hex conversion for longs

; Note: Normally, enabling specialized long functions will also
; cause their integer counterparts to be pulled into the user code.
; This is because the specialized long functions will try to
; perform the conversion using faster 16-bit code when it can.
; If you use a specialized long function, you may want to try
; enabling the specialized integer function to see if code
; size remains unchanged.

; There are two implementations of each specialized function.
; One uses smaller but slower code and the other uses larger
; but faster code.  Choose the faster code by setting the
; appropriate bit in the following flag:

defc __CLIB_OPT_NUM2TXT_SELECT = $00

; bit 0 = $01 = choose fast binary conversion
; bit 1 = $02 = choose fast octal conversion
; bit 2 = $04 = choose fast decimal conversion
; bit 3 = $08 = choose fast hex conversion

;;;;;;;;;;;;;;;
; stdio options
;;;;;;;;;;;;;;;

defc __CLIB_OPT_STDIO = $00

; bit 0 = $01 = stdio checks the validity of the FILE
;               prior to every operation.

defc __CLIB_OPT_STDIO_FILE_EXTRA = 3

; Number of additional bytes to append to FILE structures.
; Until posix file descriptors are added, this is a
; temporary measure to allow drivers to associate additional
; state with an open file.  Keep in mind *all* FILE
; structures come with this additional memory so if your
; driver requires a lot of extra memory to store file
; state, consider storing a pointer to the state in the
; FILE struct.  The first byte added is always reserved
; for driver flags so if you want N bytes reserved, set
; the request to N+1 bytes.

;;;;;;;;;;;;;;;;;;;;;;;;;;;;
; printf converter selection
;;;;;;;;;;;;;;;;;;;;;;;;;;;;

; You can select which printf converters are included in
; the library.  Omitting unused ones can reduce code size.
; Note the bit assignments are the same as for scanf.

defc __CLIB_OPT_PRINTF = $ffffffff

; bit 0 =  $    01 = enable %d
; bit 1 =  $    02 = enable %u
; bit 2 =  $    04 = enable %x
; bit 3 =  $    08 = enable %X
; bit 4 =  $    10 = enable %o
; bit 5 =  $    20 = enable %n
; bit 6 =  $    40 = enable %i
; bit 7 =  $    80 = enable %p
; bit 8 =  $   100 = enable %B
; bit 9 =  $   200 = enable %s
; bit 10 = $   400 = enable %c
; bit 11 = $   800 = enable %I
; bit 12 = $  1000 = enable %ld
; bit 13 = $  2000 = enable %lu
; bit 14 = $  4000 = enable %lx
; bit 15 = $  8000 = enable %lX
; bit 16 = $ 10000 = enable %lo
; bit 17 = $ 20000 = enable %ln
; bit 18 = $ 40000 = enable %li
; bit 19 = $ 80000 = enable %lp
; bit 20 = $100000 = enable %lB
; bit 21 = $200000 = ignored
;
; Setting to zero will remove the % logic from printf
; entirely, meaning printf can only be used to output
; format text to the stream.


;;;;;;;;;;;;;;;;;;;;;;;;;;;
; scanf converter selection
;;;;;;;;;;;;;;;;;;;;;;;;;;;

; You can select which scanf converters are included in
; the library.  Omitting unused ones can reduce code size.
; Note the bit assignments are the same as for printf.

defc __CLIB_OPT_SCANF = $ffffffff

; bit 0 =  $    01 = enable %d
; bit 1 =  $    02 = enable %u
; bit 2 =  $    04 = enable %x
; bit 3 =  $    08 = enable %x (duplicate)
; bit 4 =  $    10 = enable %o
; bit 5 =  $    20 = enable %n
; bit 6 =  $    40 = enable %i
; bit 7 =  $    80 = enable %p
; bit 8 =  $   100 = enable %B
; bit 9 =  $   200 = enable %s
; bit 10 = $   400 = enable %c
; bit 11 = $   800 = enable %I
; bit 12 = $  1000 = enable %ld
; bit 13 = $  2000 = enable %lu
; bit 14 = $  4000 = enable %lx
; bit 15 = $  8000 = enable %lx (duplicate)
; bit 16 = $ 10000 = enable %lo
; bit 17 = $ 20000 = enable %ln
; bit 18 = $ 40000 = enable %li
; bit 19 = $ 80000 = enable %lp
; bit 20 = $100000 = enable %lB
; bit 21 = $200000 = enable %[
;
; Setting to zero will remove the % logic from scanf
; entirely, meaning scanf can only be used to match
; format text against the stream.

ENDIF
