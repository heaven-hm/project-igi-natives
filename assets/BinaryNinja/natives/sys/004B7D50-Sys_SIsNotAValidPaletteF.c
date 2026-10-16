#include "Sys_SIsNotAValidPaletteF.h"
int32_t Sys_SIsNotAValidPaletteF(int32_t* a1, int32_t* a2)

{
    int32_t* v_c = a2;
    int32_t valA;
    void* objC;
    int32_t tmpD;
    int32_t* valA1 = Resource_Load(valA, tmpD, objC, nullptr);

    if (*valA1 == 0x4c && *(valA1 + 1) == 0x4f && *(valA1 + 2) == 0x4f && *(valA1 + 3) == 0x50
        && valA1[1] == 3)
    {
        Sys_PushStack_21(a1, &valA1[4], valA1[3]);
        return Resource_Unload(a2);
    }

    int32_t* v_8_1 = a2;
    Error_Show("'%s' is not a valid palette file.");

    while (true)
        /* nop */
}
