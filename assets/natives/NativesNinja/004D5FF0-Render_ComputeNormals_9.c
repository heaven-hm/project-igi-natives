#include "004D5FF0-Render_ComputeNormals_9.h"
/* 0x004d5ff0 Render_ComputeNormals_9 full linked: callers=1 callees=8 */
int32_t sub_4d5ff0(int32_t* a1, int32_t a2, float a3, int32_t a4)

{
    void** esi = a1[0x20];

    if (esi || a1[0x1d])
    {
        long double x87_r7_1 = a3;
        long double temp0_1 = 1f;
        x87_r7_1 - temp0_1;

        if (!(*(&((x87_r7_1 < temp0_1 ? 1 : 0) << 8 | (FCMP_UO(x87_r7_1, temp0_1) ? 1 : 0) << 0xa
            | (x87_r7_1 == temp0_1 ? 1 : 0) << 0xe) + 1) & 1))
        {
            int32_t* ebx = sub_4d5f90();
            sub_4d5fd0(ebx, a3, a4);

            if (!esi)
            {
                esi = sub_4d35b0();
                esi[7] = 1;
                esi[9] = 0;
                esi[0xa] = a2;
                int32_t* eax_10 = sub_4d4710();
                sub_4d4750(eax_10, 0, sub_4d4780, 0, 0, a1);
                esi[8] = eax_10;
            }
            else
            {
                void** var_14_1 = esi;

                if (esi[9] != 0xffffffff)
                {
                    int32_t* eax_7 = sub_4d35b0();
                    *esi = eax_7;
                    eax_7[8] = esi;
                    eax_7[7] = 0;
                    esi = eax_7;
                }

                esi[9] = 0;
                esi[0xa] = a2;
            }

            esi[1] = 0;
            esi[2] = 0;
            esi[3] = sub_4d63a0;
            esi[4] = sub_4d63f0;
            esi[5] = sub_4d63b0;
            esi[6] = ebx;
            int32_t eax_11 = a1[1];
            a1[0x20] = esi;
            int32_t eax_12 = eax_11 | 0x10000;
            a1[1] = eax_12;
            return eax_12;
        }

        if (esi)
            sub_4d34a0(esi);
    }

    int32_t ecx_1 = a1[1] & 0xfffafeff;
    a1[0x20] = a2;
    a1[1] = ecx_1;
    int32_t eax_4 = ecx_1 | 0x10000;
    a1[1] = eax_4;
    return eax_4;
}
