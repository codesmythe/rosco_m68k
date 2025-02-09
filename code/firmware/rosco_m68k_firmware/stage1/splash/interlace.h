// Xosera copper binary "interlace"
#if !defined(INC_INTERLACE_H)
#define INC_INTERLACE_H
#include <stdint.h>

static const uint16_t interlace_start __attribute__ ((unused)) = 0xc000;    // copper program XR start addr
static const uint16_t interlace_size  __attribute__ ((unused)) =     52;    // copper program size in words
static uint16_t interlace_bin[52] __attribute__ ((unused)) =
{
    0x0000, 0x0000, 0x0015, 0x0000, 0x27ff, 0x0000, 0x8000, 0x27ff, 
    0x0000, 0x0000, 0x27ff, 0x0000, 0x8000, 0x27ff, 0x0000, 0x0000, 
    0x27ff, 0x0000, 0x8000, 0x0015, 0x000f, 0x27ff, 0x0000, 0x0000, 
    0x27ff, 0x0015, 0x0000, 0x0000, 0x8000, 0x27ff, 0x0000, 0x0000, 
    0x27ff, 0x0000, 0x8000, 0x27ff, 0x0000, 0x0000, 0x27ff, 0x0000, 
    0x8000, 0x27ff, 0x0000, 0x0000, 0x27ff, 0x0000, 0x8000, 0x0015, 
    0x0004, 0x27ff, 0xf800, 0x2bff
};
#endif // INC_INTERLACE_H
