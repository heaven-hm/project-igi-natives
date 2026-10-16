#include "00523670-Light_SetLightColor_2.h"
/* 0x00523670 Light_SetLightColor_2 full linked: callers=3 callees=3 */
int32_t sub_523670(int32_t* a1)

{
    int32_t i = 0;

    if (*a1 > 0)
    {
        int32_t* esi_1 = &a1[1];

        do
        {
            void* eax_1 = *esi_1;

            if (eax_1)
            {
                sub_4b0d10(eax_1);
                *esi_1 = 0;
                sub_4b0d10(esi_1[1]);
                esi_1[1] = 0;
            }

            i += 1;
            esi_1 = &esi_1[3];
        } while (i < *a1);
    }

    return sub_4b0d10(a1);
}
