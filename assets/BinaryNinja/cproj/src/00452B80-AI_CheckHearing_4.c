#include "gi_platform.h"
#include "00452B80-AI_CheckHearing_4.h"
int32_t* AI_CheckHearing_4(void* a1, int32_t a2, int32_t a3, char a4)

{
    int32_t* result;

    for (int32_t* i = &g_53caa0; i < "IENDLYDETECTION"; i = &i[3])
    {
        result = i[-2] + a2;
        int32_t objC2 = i[-1] + a3;

        if (result >= 0 && result < (*(int32_t*)(uintptr_t)(a1 + 0x14)) && objC2 >= 0 && objC2 < (*(int32_t*)(uintptr_t)(a1 + 0x18)))
        {
            result = a1 + ((objC2 + result * 0x14) << 2) + 0x20;
            int32_t objC4 = *i;

            if (!a4)
                *result -= objC4;
            else
                *result += objC4;
        }
    }

    return result;
}
