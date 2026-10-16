#include "0042F7C0-Menu_HandleInput_22.h"
/* 0x0042f7c0 Menu_HandleInput_22 full linked: callers=1 callees=0 */
void* Menu_HandleInput_22(void* a1)

{
    void* result = *(*(a1 + 0x1b4) + 0x2d4);
    *(a1 + 0x758) = 0;
    *(a1 + 0x754) = 0;

    if (!*(result + 0x260))
        *(a1 + 0x750) = *(result + 0x118);

    int32_t i = 0;

    if (*(result + 0x118) > 0)
    {
        int32_t ebx;
        int32_t var_c_1 = ebx;
        bool* ecx_3 = a1 + 0x75c;
        char* esi_1 = result + 0x11c;

        do
        {
            if (esi_1[1])
                *(a1 + 0x758) += 1;

            if (*esi_1)
                *(a1 + 0x754) += 1;

            *ecx_3 = !*(result + 0x260);
            i += 1;
            esi_1 = &esi_1[0x14];
            ecx_3 = &ecx_3[0x1c];
        } while (i < *(result + 0x118));
    }

    return result;
}
