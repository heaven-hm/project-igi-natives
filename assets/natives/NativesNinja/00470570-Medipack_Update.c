#include "00470570-Medipack_Update.h"
/* 0x00470570 Medipack_Update full linked: callers=0 callees=4 */
void* sub_470570(int32_t* a1 @ 0x8)

{
    void* eax_1 = *(a1[1] + 0x6e4);

    if (eax_1)
    {
        sub_4b0d10(eax_1);
        *(a1[1] + 0x6e4) = 0;
    }

    int32_t* eax_2 = sub_4fe730(*a1, "Factor of human max damage to add for each round");

    if (!eax_2)
        eax_2 = sub_4fe650(*a1, "Factor of human max damage to add for each round", 0x3c23d70a);

    int32_t* ecx_2 = eax_2[0x49];
    *(a1[1] + 0x6e4) = Mem_Alloc(4, 4);
    void* result = a1[1];
    **(result + 0x6e4) = ecx_2;
    return result;
}
