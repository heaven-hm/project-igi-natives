#include "004F3B40-Script_ParseEnumInt32_14.h"
/* 0x004f3b40 Script_ParseEnumInt32_14 full linked: callers=0 callees=3 */
char sub_4f3b40(int80_t a1 @ st0, int32_t a2)

{
    if (sub_4f16c0(a2 + 0x200f8))
    {
        sub_4f16e0(a2 + 0x200f8, a2);
        *(a2 + 0x200f4) = a1;
    }

    char result = *(a2 + 0x200f4);

    if (!result)
        return result;

    return sub_4f3ef0(a2, *(a2 + 0x20154) + 1);
}
