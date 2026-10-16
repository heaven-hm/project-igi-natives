#include "004B77F0-Sys_AllocateMemory_21.h"
/* 0x004b77f0 Sys_AllocateMemory_21 full linked: callers=2 callees=1 */
void* sub_4b77f0(int32_t* a1, char* a2, int32_t a3, void* a4)

{
    char* esi = a2;
    char i = *esi;
    int32_t edx_2 = *(a1[2] + 0xc) + 0x10;

    if (i)
    {
        void* eax_3 = a1 + a1[1] * a4 + a3 + 0x10;

        do
        {
            eax_3 += 1;
            esi = &esi[1];
            *(eax_3 - 1) = *(i + edx_2);
            i = *esi;
        } while (i);
    }

    return sub_4b7730(a1, a4);
}
