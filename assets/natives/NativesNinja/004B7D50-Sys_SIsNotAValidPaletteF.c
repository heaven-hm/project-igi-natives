#include "004B7D50-Sys_SIsNotAValidPaletteF.h"
/* 0x004b7d50 Sys_SIsNotAValidPaletteF full linked: callers=1 callees=4 */
int32_t sub_4b7d50(int32_t* a1, int32_t* a2)

{
    int32_t* var_c = a2;
    int32_t eax;
    void* ecx;
    int32_t edx;
    int32_t* eax_1 = Resource_Load(eax, edx, ecx, nullptr);

    if (*eax_1 == 0x4c && *(eax_1 + 1) == 0x4f && *(eax_1 + 2) == 0x4f && *(eax_1 + 3) == 0x50
        && eax_1[1] == 3)
    {
        sub_4b7cf0(a1, &eax_1[4], eax_1[3]);
        return Resource_Unload(a2);
    }

    int32_t* var_8_1 = a2;
    Error_Show("'%s' is not a valid palette file.");

    while (true)
        /* nop */
}
