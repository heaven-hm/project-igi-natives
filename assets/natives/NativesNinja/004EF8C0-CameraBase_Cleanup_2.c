#include "004EF8C0-CameraBase_Cleanup_2.h"
/* 0x004ef8c0 CameraBase_Cleanup_2 full linked: callers=0 callees=5 */
int32_t sub_4ef8c0(float* a1, void* a2)

{
    char* eax_1 = *(a2 + 4);
    char* var_20 = eax_1;

    if (*eax_1)
    {
        char i;

        do
        {
            i = eax_1[1];
            eax_1 = &eax_1[1];
        } while (i);
        var_20 = eax_1;
    }

    int32_t i_1 = 0;
    float* var_1c = a1;

    do
    {
        double var_38_1 = *var_1c;
        void var_18;
        Game_DataSymbolLoad(&var_18, "%f");
        void* edi_1 = &var_18;
        int32_t j = 0xffffffff;

        while (j)
        {
            bool cond:3_1 = 0 != *edi_1;
            edi_1 += 1;
            j -= 1;

            if (!cond:3_1)
                break;
        }

        int32_t ecx_2 = ~j;
        char* edi_3 = var_20;
        int32_t j_1 = 0xffffffff;

        while (j_1)
        {
            bool cond:4_1 = 0 != *edi_3;
            edi_3 = &edi_3[1];
            j_1 -= 1;

            if (!cond:4_1)
                break;
        }

        int32_t esi_2;
        int32_t edi_5;
        edi_5 = memcpy(edi_3 - 1, edi_1 - ecx_2, ecx_2 & 0xfffffffc);
        memcpy(edi_5, esi_2, ecx_2 & 3);

        if (i_1 != 0xa)
        {
            void* edi_6 = &g_547a44;
            int32_t j_2 = 0xffffffff;

            while (j_2)
            {
                bool cond:1_1 = 0 != *edi_6;
                edi_6 += 1;
                j_2 -= 1;

                if (!cond:1_1)
                    break;
            }

            int32_t ecx_7 = ~j_2;
            char* edi_8 = var_20;
            int32_t j_3 = 0xffffffff;

            while (j_3)
            {
                bool cond:2_1 = 0 != *edi_8;
                edi_8 = &edi_8[1];
                j_3 -= 1;

                if (!cond:2_1)
                    break;
            }

            int32_t esi_4;
            int32_t edi_10;
            edi_10 = memcpy(edi_8 - 1, edi_6 - ecx_7, ecx_7 & 0xfffffffc);
            memcpy(edi_10, esi_4, ecx_7 & 3);
        }

        i_1 += 1;
        var_1c = &var_1c[1];
    } while (i_1 < 0xb);

    return 0;
}
