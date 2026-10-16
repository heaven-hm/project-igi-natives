#include "004512A0-AI_AlertAllies_2.h"
/* 0x004512a0 AI_AlertAllies_2 full linked: callers=2 callees=1 */
int32_t* sub_4512a0(int32_t* a1, void* a2, char a3)

{
    int32_t edx = a1[0x4a];

    if (edx == 1)
    {
        a1[0x4a] = 0;
        return sub_4511d0(a1);
    }

    int32_t ecx = 0;

    if (edx > 0)
    {
        int32_t* esi_1 = &a1[4];

        while (*esi_1 != *(a2 + 0x14))
        {
            ecx += 1;
            esi_1 = &esi_1[1];

            if (ecx >= edx)
                return a1;
        }

        a1[0x4a] = edx - 1;
        a1[ecx + 4] = a1[edx + 3];
        a1[ecx + 0x24] = a1[a1[0x4a] + 0x24];

        if (a3)
            a1[0x4b] += 1;
    }

    return a1;
}
