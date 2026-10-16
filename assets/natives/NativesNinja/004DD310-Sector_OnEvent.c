#include "004DD310-Sector_OnEvent.h"
/* 0x004dd310 Sector_OnEvent full linked: callers=0 callees=6 */
float sub_4dd310(float a1) __location("eax")

{
    float result = a1;
    int32_t edx = g_bcabd4;
    int32_t var_8 = g_bcabd0;
    g_a5e354 = result;
    int32_t var_10 = g_bcabd8;
    int32_t var_4 = edx;
    float result_1 = result;
    int32_t var_c = g_bcabdc;

    if (*(result + 0x6c))
    {
        if (result != g_a538d0)
            goto label_4dd381;

        result = g_a538cc;

        if (!result)
        {
            result_1 = g_a538d4;
        label_4dd381:
            g_a5e35c = sub_4daa20(&g_a5e334);
            sub_4da180(&g_a5e330, &g_a5e310);
            int32_t ecx_3 = g_bcabd4;
            int32_t edx_2 = g_bcabd8;
            float var_18 = g_bcabd0;
            int32_t eax_2 = g_bcabdc;
            int32_t var_14_1 = ecx_3;
            int32_t var_20 = edx_2;
            int32_t var_1c_1 = eax_2;
            int32_t eax_3 = sub_4cfcb0(result_1);

            if (eax_3 != 0xffffffff)
                sub_4dd4b0(result_1, &var_18, &var_20, eax_3);

            int32_t i = g_a5e340;
            int32_t esi = 0;
            bool cond:1_1 = !i;

            if (i > 0)
            {
                do
                {
                    int32_t* eax_7 = *(g_a5e33c + (esi << 2)) * g_a5e348 + g_a5e338;
                    int32_t __saved_ebx_2 = eax_7[5];
                    sub_4dd5d0(eax_7[6], eax_7, &eax_7[2]);
                    i = g_a5e340;
                    esi += 1;
                } while (esi < i);

                cond:1_1 = !i;
            }

            if (!cond:1_1)
            {
                int32_t* esi_1 = g_a5e34c;
                int32_t* ecx_6 = g_a5e33c;
                int32_t ebx_1 = g_a5e338;
                int32_t edi_1 = g_a5e348;

                do
                {
                    i -= 1;
                    int32_t edx_7 = *(*ecx_6 * edi_1 + esi_1 + ebx_1);
                    g_a5e340 = i;

                    if (edx_7 != i)
                    {
                        int32_t edi_2 = ecx_6[edx_7];
                        int32_t eax_11 = ecx_6[i] * edi_1 + ebx_1;
                        int32_t esi_2 = *(esi_1 + eax_11);
                        ecx_6[edx_7] = ecx_6[esi_2];
                        *(g_a5e33c + (esi_2 << 2)) = edi_2;
                        *(g_a5e34c + eax_11) = edx_7;
                        esi_1 = g_a5e34c;
                        edi_1 = g_a5e348;
                        ecx_6 = g_a5e33c;
                        ebx_1 = g_a5e338;
                        i = g_a5e340;
                    }
                } while (i);
            }

            return sub_497520(0xbcaba0, &var_8, &var_10);
        }
    }

    return result;
}
