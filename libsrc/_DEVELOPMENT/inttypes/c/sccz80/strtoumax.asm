
; uintmax_t strtoumax(const char *nptr, char **endptr, int base)

SECTION code_clib
SECTION code_inttypes

PUBLIC strtoumax

EXTERN strtoul

defc strtoumax = strtoul
