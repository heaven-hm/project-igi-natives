#include "00453300-AI_UpdatePatrol_5.h"
/* 0x00453300 AI_UpdatePatrol_5 full linked: callers=3 callees=4 */
int32_t* sub_453300(int32_t a1, char a2)

{
    if (!a2)
    {
        int32_t* esi_1 = g_5bda28;
        int32_t* eax_2 = *esi_1;

        if (eax_2)
        {
            while (esi_1[2] != a1)
            {
                esi_1 = eax_2;
                eax_2 = *eax_2;

                if (!eax_2)
                    return eax_2;
            }

            sub_4af960(esi_1);
            esi_1[1] = 0;
            *esi_1 = 0;
            sub_4af8f0(&g_57d758, esi_1);
        }
    }
    else
    {
        int32_t* esi = g_57d758;

        if (*esi)
        {
            sub_4af960(esi);
            esi[1] = 0;
            *esi = 0;
            sub_4af8f0(&g_5bda28, esi);
            esi[2] = a1;
            return esi;
        }
    }

    return 0;
}
