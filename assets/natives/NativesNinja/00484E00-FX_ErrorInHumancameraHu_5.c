#include "00484E00-FX_ErrorInHumancameraHu_5.h"
/* 0x00484e00 FX_ErrorInHumancameraHu_5 full linked: callers=1 callees=2 */
int32_t* sub_484e00(int32_t a1)

{
    int32_t esi = 0;
    int32_t* i;

    for (i = &g_5c1188; i < 0x5c1588; )
    {
        if (*(i + 5))
        {
            int32_t ecx_3 = **i;

            if (!ecx_3)
            {
                Error_Show("ERROR IN HUMANCAMERA HUMANLIST");

                while (true)
                    /* nop */
            }
            else if (ecx_3 == a1)
            {
                int32_t eax = Qtask_UpdateList(*((esi << 3) + &g_5c1188));
                *((esi << 3) + &g_5c1188) = 0;
                *((esi << 3) + &g_5c118d) = 0;
                return eax;
            }
        }

        i = &i[2];
        esi += 1;
    }

    return i;
}
