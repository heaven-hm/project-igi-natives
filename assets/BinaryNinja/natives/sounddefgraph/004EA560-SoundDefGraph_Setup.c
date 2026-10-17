// Original IGI.EXE function: SoundDefGraph_Setup (VA 0x004EA560; static CFG gate PASS, CFG score 1.000).
#include "SoundDefGraph_Setup.h"
int32_t* SoundDefGraph_Setup(void* a1, int32_t* a2)

{
    if (*(a1 + 0xd4) && a2[1])
        return a2;

    if (*(a1 + 0x2c) & 2)
    {
        double* valA3 = SoundSysMicrophone_Action(*a2);
        double v_8_1 = *(a1 + 0xd0) * 4096f;
        int32_t* valA1;
        long double fp0_1;
        fp0_1 = Sys_PushStack_11(valA3, a1 + 0x88);
        long double x87_r6_2 = v_8_1 * v_8_1;
        x87_r6_2 - fp0_1;
        valA1 = (x87_r6_2 < fp0_1 ? 1 : 0) << 8 | (FCMP_UO(x87_r6_2, fp0_1) ? 1 : 0) << 0xa
            | (x87_r6_2 == fp0_1 ? 1 : 0) << 0xe;

        if (*(&valA1 + 1) & 1)
            return valA1;
    }

    int32_t valA4 = *(a1 + 0x184);

    if (valA4 != *(a1 + 0x24))
    {
        int32_t tmpD1 = *(a1 + 0x180);
        *(a1 + 0x24) = valA4;
        *(a1 + 0x20) = tmpD1;
        *(a1 + 0x28) = 0;
    }

    *(a1 + 0x2c) |= 0x10;
    return SoundSys_Update3DPosition_8(a1 + 0x20);
}
