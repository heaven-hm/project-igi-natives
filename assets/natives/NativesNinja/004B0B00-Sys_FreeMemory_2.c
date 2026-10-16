#include "004B0B00-Sys_FreeMemory_2.h"
/* 0x004b0b00 Sys_FreeMemory_2 full linked: callers=32 callees=1 */
int32_t sub_4b0b00(int32_t* a1, int32_t a2, int32_t a3, int32_t a4)

{
    int32_t eax = a4;

    if (eax < 4)
        eax = 4;

    a1[5] = a2;
    int32_t edi_1 = (a2 + eax + 3) & ~(eax - 1);
    void* eax_1 = Mem_Alloc((edi_1 + 4) * a3, eax);
    *a1 = eax_1;
    int32_t result = 0;
    a1[1] = edi_1 * a3 + eax_1;
    a1[3] = a3;
    a1[4] = edi_1;
    a1[2] = 0;

    if (a3 > 0)
    {
        do
        {
            *(a1[1] + (result << 2)) = result;
            result += 1;
        } while (result < a3);
    }

    return result;
}
