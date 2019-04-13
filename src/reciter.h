#ifndef RECITER_C
#define RECITER_C

#include <stdint.h>

//fix some possible issue in original algorithm, not compatible
#define FIX_BUGS 0

//return output length
uint8_t TextToPhonemes(const char *input, char *output, uint8_t outsize);

#endif

