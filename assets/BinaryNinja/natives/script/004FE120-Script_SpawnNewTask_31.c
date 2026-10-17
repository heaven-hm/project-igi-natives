// Original IGI.EXE function: Script_SpawnNewTask_31 (VA 0x004FE120; static CFG gate FAIL, CFG score 0.667).
#include "Script_SpawnNewTask_31.h"
int32_t Script_SpawnNewTask_31(void* a1, int32_t a2, int32_t* a3, int32_t a4, int32_t a5, int32_t a6, int32_t a7, int16_t a8, int32_t a9)

{
    int32_t valA = *(a1 + 0xf0);

    if (valA < *(a1 + 0xf8))
    {
        void* valA1 = *(*(a1 + 0x6c) + (valA << 2));
        memcpy(valA1, a2, 0x18);
        memcpy(valA1 + 0x40, a2, 0x18);
        *(valA1 + 0x18) = *a3;
        *(valA1 + 0x1c) = a3[1];
        *(valA1 + 0x20) = a3[2];
        *(valA1 + 0x24) = g_a7a4dc;
        int32_t tmpD5 = (*g_a7a4dc + 1) & 0x8000000f;

        if (tmpD5 < 0)
            tmpD5 = ((tmpD5 - 1) | 0xfffffff0) + 1;

        g_a7a4dc = tmpD5;
        *(valA1 + 0x26) = a8;
        *(valA1 + 0x30) = a4;
        *(valA1 + 0x38) = a6;
        *(valA1 + 0x3c) = a7;
        *(valA1 + 0x2c) = a5;
        *(valA1 + 0x28) = 0;
        *(valA1 + 0x2a) = 0;

        if (a9)
        {
            *(valA1 + 0x34) = 1f / a9;
            int32_t valA3 = *(a1 + 0xf0) + 1;
            *(a1 + 0xf0) = valA3;
            return valA3;
        }

        *(valA1 + 0x34) = 0x3f800000;
        valA = *(a1 + 0xf0) + 1;
        *(a1 + 0xf0) = valA;
    }

    return valA;
}
