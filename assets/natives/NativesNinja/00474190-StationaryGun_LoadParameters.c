#include "00474190-StationaryGun_LoadParameters.h"
/* 0x00474190 StationaryGun_LoadParameters full linked: callers=0 callees=6 */
uint32_t sub_474190(float a1)

{
    uint32_t result = Frames_GetUpdateCounter();

    if (*(a1 + 0x218) != result)
    {
        uint32_t eax = Frames_GetUpdateCounter();
        void* edi_1 = *(a1 + 0x208);
        *(a1 + 0x218) = eax;

        if (!edi_1)
        {
            long double x87_r7_18 = *(a1 + 0x1e4) * 0.0174532924f;
            long double temp0_1 = *(a1 + 0x1f8);
            x87_r7_18 - temp0_1;

            if (*(&((x87_r7_18 < temp0_1 ? 1 : 0) << 8
                | (FCMP_UO(x87_r7_18, temp0_1) ? 1 : 0) << 0xa
                | (x87_r7_18 == temp0_1 ? 1 : 0) << 0xe | 0x3800) + 1) & 0x41)
            {
                long double temp2_1 = *(a1 + 0x1f8);
                x87_r7_18 - temp2_1;

                if (*(&((x87_r7_18 < temp2_1 ? 1 : 0) << 8
                    | (FCMP_UO(x87_r7_18, temp2_1) ? 1 : 0) << 0xa
                    | (x87_r7_18 == temp2_1 ? 1 : 0) << 0xe | 0x3800) + 1) & 1)
                {
                    long double x87_r6_4 = *(a1 + 0x1f8) - 0.0872664675f;
                    *(a1 + 0x1f8) = x87_r6_4;
                    x87_r6_4 - x87_r7_18;

                    if (*(&((x87_r6_4 < x87_r7_18 ? 1 : 0) << 8
                            | (FCMP_UO(x87_r6_4, x87_r7_18) ? 1 : 0) << 0xa
                            | (x87_r6_4 == x87_r7_18 ? 1 : 0) << 0xe | 0x3800) + 1) & 1)
                        *(a1 + 0x1f8) = x87_r7_18;
                }
            }
            else
            {
                long double x87_r6_2 = *(a1 + 0x1f8) + 0.0872664675f;
                *(a1 + 0x1f8) = x87_r6_2;
                x87_r6_2 - x87_r7_18;

                if (!(*(&((x87_r6_2 < x87_r7_18 ? 1 : 0) << 8
                        | (FCMP_UO(x87_r6_2, x87_r7_18) ? 1 : 0) << 0xa
                        | (x87_r6_2 == x87_r7_18 ? 1 : 0) << 0xe | 0x3800) + 1) & 0x41))
                    *(a1 + 0x1f8) = x87_r7_18;
            }

            sub_474360(a1, 0);
        }
        else
        {
            char ebx_1 = 0;
            *(a1 + 0x1f8) = *(edi_1 + 0x1b4) * 3.14159274f + *(a1 + 0x1f8);
            *(a1 + 0x1fc) = -((*(edi_1 + 0x1b0) * 3.14159274f)) + *(a1 + 0x1fc);
            sub_4748b0(a1);
            long double x87_r7_8 = *(edi_1 + 0x1c8);
            long double temp1_1 = 0f;
            x87_r7_8 - temp1_1;

            if (!(*(&((x87_r7_8 < temp1_1 ? 1 : 0) << 8
                    | (FCMP_UO(x87_r7_8, temp1_1) ? 1 : 0) << 0xa
                    | (x87_r7_8 == temp1_1 ? 1 : 0) << 0xe) + 1) & 0x40))
                ebx_1 = 1;

            *(a1 + 0x200) = *(a1 + 0x1f8) + *(a1 + 0x1f0);
            *(a1 + 0x204) = *(a1 + 0x1fc) + *(a1 + 0x1f4);
            *(a1 + 0x1f0) = *(a1 + 0x1f0) * 0.899999976f;
            *(a1 + 0x1f4) = *(a1 + 0x1f4) * 0.899999976f;
            sub_474360(a1, ebx_1);
        }

        int32_t __saved_ebx_1 = a1 + 0x70;
        sub_474420(a1);
        uint32_t* i = *(a1 + 8);
        result = *i;

        if (result && i)
        {
            int32_t edx_1 = g_afa7e0;

            do
            {
                uint32_t esi_1 = *i;
                int32_t eax_8;

                if (!esi_1)
                    eax_8 = 0;
                else
                {
                    int32_t eax_5 = *esi_1;
                    int32_t eax_6 = -(eax_5);
                    eax_8 = (eax_6 - eax_6) & esi_1;
                }

                *((edx_1 << 2) + &g_afa6e0) = eax_8;
                int32_t edx_2 = edx_1 + 1;
                int32_t eax_9 = 0;
                g_afa7e0 = edx_2;
                eax_9 = i[7];
                result = *((eax_9 << 2) + &g_a970e0);

                if (result)
                {
                    result = result(i);
                    edx_2 = g_afa7e0;
                }

                i = *((edx_2 << 2) + &g_afa6dc);
                edx_1 = edx_2 - 1;
                g_afa7e0 = edx_1;
            } while (i);
        }
    }

    return result;
}
