// Original IGI.EXE function: SoundDefTriggerOnce_Process (VA 0x004E9760; static CFG gate PASS, CFG score 1.000).
#include "SoundDefTriggerOnce_Process.h"
int32_t* SoundDefTriggerOnce_Process(void* a1, int32_t* a2)

{
    int32_t* result = a2;

    if ((!*(a1 + 0xe2) || !result[1]) && *(a1 + 0x123))
    {
        if (!(*(a1 + 0x2c) & 2))
        {
        label_4e97ce:
            int32_t valA3 = *(a1 + 0x134);

            if (valA3 != *(a1 + 0x24))
            {
                int32_t tmpD1 = *(a1 + 0x130);
                *(a1 + 0x24) = valA3;
                *(a1 + 0x20) = tmpD1;
                *(a1 + 0x28) = 0;
                *(a1 + 0x128) = 0;
            }

            valA3 = *(a1 + 0xe0);
            char f0_1 = valA3;
            valA3 = -(valA3);
            *(a1 + 0x2c) = ((valA3 - valA3) & 0x10) | (*(a1 + 0x2c) & 0xffffffef);
            return SoundSys_Update3DPosition_8(a1 + 0x20);
        }

        double* valA2 = SoundSysMicrophone_Action(*result);
        double v_8_1 = *(a1 + 0xcc) * 4096f;
        long double fp0_1;
        fp0_1 = Sys_PushStack_11(valA2, a1 + 0x88);
        long double x87_r6_2 = v_8_1 * v_8_1;
        x87_r6_2 - fp0_1;
        result = (x87_r6_2 < fp0_1 ? 1 : 0) << 8 | (FCMP_UO(x87_r6_2, fp0_1) ? 1 : 0) << 0xa
            | (x87_r6_2 == fp0_1 ? 1 : 0) << 0xe;

        if (!(*(&result + 1) & 1))
            goto label_4e97ce;
    }

    return result;
}
