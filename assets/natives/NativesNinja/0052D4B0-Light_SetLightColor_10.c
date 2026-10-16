#include "0052D4B0-Light_SetLightColor_10.h"
/* 0x0052d4b0 Light_SetLightColor_10 full linked: callers=2 callees=7 */
int32_t sub_52d4b0(int32_t* a1, char* a2, int32_t a3, int32_t a4, int32_t a5, int32_t a6)

{
    char* ebx = a2;
    int32_t result = 0;
    *ebx = 0;
    int32_t esi;

    esi = a5 || a6 ? 1 : 0;

    if (a4)
    {
        int32_t var_14_1 = a3;
        int32_t ebp = sub_52d5b0(a1, ebx);

        if (esi)
        {
            void* edi_1 = &g_54f730;
            int32_t i = 0xffffffff;

            while (i)
            {
                bool cond:2_1 = 0 != *edi_1;
                edi_1 += 1;
                i -= 1;

                if (!cond:2_1)
                    break;
            }

            int32_t ecx_2 = ~i;
            char* edi_3 = ebx;
            int32_t i_1 = 0xffffffff;

            while (i_1)
            {
                bool cond:3_1 = 0 != *edi_3;
                edi_3 = &edi_3[1];
                i_1 -= 1;

                if (!cond:3_1)
                    break;
            }

            int32_t esi_2;
            int32_t edi_5;
            edi_5 = memcpy(edi_3 - 1, edi_1 - ecx_2, ecx_2 & 0xfffffffc);
            ebp += 1;
            memcpy(edi_5, esi_2, ecx_2 & 3);
        }

        char* edi_6 = ebx;
        int32_t i_2 = 0xffffffff;

        while (i_2)
        {
            bool cond:1_1 = 0 != *edi_6;
            edi_6 = &edi_6[1];
            i_2 -= 1;

            if (!cond:1_1)
                break;
        }

        int32_t var_14_2 = a3;
        char* ebx_1 = &ebx[~i_2 - 1];
        result = ebp + sub_52d5e0(a1, ebx_1);

        if (a6)
        {
            void* edi_7 = &g_54f730;
            int32_t i_3 = 0xffffffff;

            while (i_3)
            {
                bool cond:5_1 = 0 != *edi_7;
                edi_7 += 1;
                i_3 -= 1;

                if (!cond:5_1)
                    break;
            }

            int32_t ecx_10 = ~i_3;
            char* edi_9 = ebx_1;
            int32_t i_4 = 0xffffffff;

            while (i_4)
            {
                bool cond:6_1 = 0 != *edi_9;
                edi_9 = &edi_9[1];
                i_4 -= 1;

                if (!cond:6_1)
                    break;
            }

            int32_t esi_4;
            int32_t edi_11;
            edi_11 = memcpy(edi_9 - 1, edi_7 - ecx_10, ecx_10 & 0xfffffffc);
            result += 1;
            memcpy(edi_11, esi_4, ecx_10 & 3);
        }

        char* edi_12 = ebx_1;
        int32_t i_5 = 0xffffffff;

        while (i_5)
        {
            bool cond:4_1 = 0 != *edi_12;
            edi_12 = &edi_12[1];
            i_5 -= 1;

            if (!cond:4_1)
                break;
        }

        ebx = &ebx_1[~i_5 - 1];
    }

    if (!a6)
        return result;

    int32_t __saved_edi_1 = a3;
    return result + sub_52d610(a1, ebx);
}
