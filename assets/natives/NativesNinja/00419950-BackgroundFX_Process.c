#include "00419950-BackgroundFX_Process.h"
/* 0x00419950 BackgroundFX_Process full linked: callers=3 callees=3 */
int32_t BackgroundFX_Process(int32_t* a1, float* a2)

{
    int32_t* eax = *a1;

    if (eax)
        Menu_HandleInput_5(eax, a2);

    int32_t result = a1[1];
    int32_t edi = 0;

    if (result > 0)
    {
        void* ebx_1 = nullptr;

        do
        {
            Menu_RequestScreen_6(ebx_1 + a1[2], a2);
            result = a1[1];
            edi += 1;
            ebx_1 += 0xc;
        } while (edi < result);
    }

    int32_t* esi_1 = a1[3];

    if (!esi_1)
        return result;

    return Menu_DrawWidget_5(esi_1, a2);
}
