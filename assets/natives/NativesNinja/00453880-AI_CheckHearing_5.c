#include "00453880-AI_CheckHearing_5.h"
/* 0x00453880 AI_CheckHearing_5 full linked: callers=1 callees=1 */
int32_t* sub_453880(int32_t* a1, int32_t a2)

{
    int32_t* eax_1 = *(*a1 + 8);
    int32_t esi = *eax_1;
    int32_t esi_1 = -(esi);
    int32_t edi = 0;
    int32_t* result = (esi_1 - esi_1) & eax_1;

    if (result)
    {
        while (edi < a2)
        {
            int32_t eax_2 = sub_453540(result);

            if (eax_2 >= 2)
            {
                if (eax_2 <= 3)
                    a1[3] = result;
                else if (eax_2 == 6)
                    a1[2] = result;
            }

            int32_t* eax_3 = *result;

            if (!eax_3)
                result = nullptr;
            else
            {
                int32_t esi_3 = *eax_3;
                int32_t esi_4 = -(esi_3);
                result = (esi_4 - esi_4) & eax_3;
            }

            edi += 1;

            if (!result)
                break;
        }
    }

    return result;
}
