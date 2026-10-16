#include "004BAC30-Sys_DispatchOpcode_25.h"
/* 0x004bac30 Sys_DispatchOpcode_25 full linked: callers=1 callees=3 */
void* sub_4bac30(int32_t a1)

{
    int32_t i_1 = a1;
    int32_t* eax_2 = Mem_Alloc((i_1 * 3 + 3) << 2, 4);
    eax_2[1] = 0;
    *eax_2 = 0;
    void* result = sub_4af8f0(&g_a43ea0, eax_2);
    int32_t* esi = &eax_2[3];
    eax_2[2] = esi;

    if (i_1 > 0)
    {
        int32_t i;

        do
        {
            esi[1] = 0;
            *esi = 0;
            result = sub_4af8f0(&g_a43eb0, esi);
            esi = &esi[3];
            i = i_1;
            i_1 -= 1;
        } while (i != 1);
    }

    return result;
}
