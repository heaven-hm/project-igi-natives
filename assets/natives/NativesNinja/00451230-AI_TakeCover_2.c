#include "00451230-AI_TakeCover_2.h"
/* 0x00451230 AI_TakeCover_2 full linked: callers=1 callees=0 */
int32_t sub_451230(void* a1, void* a2)

{
    int32_t eax = 0;
    int32_t ecx = *(a1 + 0x128);

    if (ecx > 0)
    {
        int32_t* edx_1 = a1 + 0x10;

        do
        {
            if (*(a2 + 0x14) == *edx_1)
                return *(a1 + (eax << 2) + 0x90);

            eax += 1;
            edx_1 = &edx_1[1];
        } while (eax < ecx);
    }

    return 0xffffffff;
}
