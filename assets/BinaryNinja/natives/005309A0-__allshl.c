#include "__allshl.h"

🌐  int32_t __convention("regparm") __allshl(int32_t pThis, int32_t param, char flags) __pure

{
    if (flags >= 0x40)
        return 0;

    if (flags >= 0x20)
        return 0;

    return pThis << (flags & 0x1f);
}
