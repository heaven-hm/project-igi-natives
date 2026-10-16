#include "004E51C0-SoundSys_LoadSoundDef_2.h"
/* 0x004e51c0 SoundSys_LoadSoundDef_2 full linked: callers=3 callees=2 */
int32_t sub_4e51c0()

{
    int32_t result = g_a5e400;
    void* ebx = (&g_a5e374)[result];
    void* var_10 = ebx;
    *(ebx + 0xc) = 0;
    int32_t esi_1 = g_a5e400 + 1;
    g_a5e400 = esi_1;
    result = *(ebx + 0x14);

    if (result)
    {
        void* edi_1 = **&g_a5e3f0 + (result & 0xffff) * 0x18;
        (&g_a5e374)[esi_1] = edi_1;
        result = sub_4e51c0();
        result = *(edi_1 + 0x16);

        while (result)
        {
            void* esi_2 = **&g_a5e3f0 + (result & 0xffff) * 0x18;
            (&g_a5e374)[g_a5e400] = esi_2;
            result = sub_4e51c0();
            result = *(esi_2 + 0x16);
        }

        esi_1 = g_a5e400;
    }

    result = *(ebx + 0x12);

    if (result)
    {
        int32_t i = 0;
        i = *(ebx + 0x10);
        result = (result & 0xffff) + i;

        if (i < result)
        {
            int32_t edx_3 = g_a5e3ec;
            int32_t ecx_8;

            do
            {
                int32_t edi_2 = 0;
                int32_t ecx_4 = *(g_a5e3f8 + 0x10);
                int32_t eax_6 = 0;
                eax_6 = *(ecx_4 + (i << 3));
                void* ecx_5 = ecx_4 + (i << 3);
                int32_t var_c = edx_3 + eax_6 * 0xc;
                int32_t eax_9 = 0;
                eax_9 = *(ecx_5 + 2);
                int32_t var_8_1 = edx_3 + eax_9 * 0xc;
                int32_t eax_12 = 0;
                eax_12 = *(ecx_5 + 4);
                int32_t var_4_1 = edx_3 + eax_12 * 0xc;

                if (esi_1 > 0)
                {
                    int32_t* ebx_1 = &g_a5e374;

                    do
                    {
                        float* ecx_7 = *ebx_1;
                        int32_t* edx_4 = &var_c;
                        int32_t j_1 = 3;
                        int32_t j;

                        do
                        {
                            float* eax_14 = *edx_4;
                            long double x87_r7_2 = eax_14[2] - ecx_7[2];
                            long double x87_r6_2 = eax_14[1] - ecx_7[1];
                            long double x87_r5_2 = *eax_14 - *ecx_7;
                            long double x87_r7_3 = sqrtl(x87_r5_2 * x87_r5_2 + x87_r6_2 * x87_r6_2
                                + x87_r7_2 * x87_r7_2);
                            long double x87_r6_4 = ecx_7[3];
                            x87_r6_4 - x87_r7_3;

                            if (!(*(&((x87_r6_4 < x87_r7_3 ? 1 : 0) << 8
                                    | (FCMP_UO(x87_r6_4, x87_r7_3) ? 1 : 0) << 0xa
                                    | (x87_r6_4 == x87_r7_3 ? 1 : 0) << 0xe | 0x3800) + 1) & 0x41))
                                x87_r7_3 = ecx_7[3];

                            ecx_7[3] = x87_r7_3;
                            edx_4 = &edx_4[1];
                            j = j_1;
                            j_1 -= 1;
                        } while (j != 1);
                        esi_1 = g_a5e400;
                        edi_2 += 1;
                        ebx_1 = &ebx_1[1];
                    } while (edi_2 < esi_1);

                    edx_3 = g_a5e3ec;
                    ebx = var_10;
                }

                ecx_8 = 0;
                result = 0;
                ecx_8 = *(ebx + 0x12);
                result = *(ebx + 0x10);
                i += 1;
            } while (i < ecx_8 + result);
        }
    }

    g_a5e400 = esi_1 - 1;
    return result;
}
