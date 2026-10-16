#include "0051DBF0-FlatSky_Cleanup.h"
/* 0x0051dbf0 FlatSky_Cleanup full linked: callers=0 callees=8 */
int32_t sub_51dbf0(void* a1)

{
    long double x87_r7 = *(a1 + 0x260);
    long double temp0 = 0f;
    x87_r7 - temp0;
    long double x87_r7_1;

    if (!(*(&((x87_r7 < temp0 ? 1 : 0) << 8 | (FCMP_UO(x87_r7, temp0) ? 1 : 0) << 0xa
        | (x87_r7 == temp0 ? 1 : 0) << 0xe) + 1) & 1))
    {
        long double x87_r7_2 = *(a1 + 0x260);
        long double temp1_1 = 1f;
        x87_r7_2 - temp1_1;

        if (*(&((x87_r7_2 < temp1_1 ? 1 : 0) << 8 | (FCMP_UO(x87_r7_2, temp1_1) ? 1 : 0) << 0xa
                | (x87_r7_2 == temp1_1 ? 1 : 0) << 0xe) + 1) & 0x41)
            x87_r7_1 = *(a1 + 0x260);
        else
            x87_r7_1 = 1f;
    }
    else
        x87_r7_1 = 0f;

    *(a1 + 0x260) = x87_r7_1;
    long double x87_r7_3 = *(a1 + 0x264);
    long double temp2 = 0f;
    x87_r7_3 - temp2;
    long double x87_r7_4;

    if (!(*(&((x87_r7_3 < temp2 ? 1 : 0) << 8 | (FCMP_UO(x87_r7_3, temp2) ? 1 : 0) << 0xa
        | (x87_r7_3 == temp2 ? 1 : 0) << 0xe) + 1) & 1))
    {
        long double x87_r7_5 = *(a1 + 0x264);
        long double temp3_1 = 1f;
        x87_r7_5 - temp3_1;

        if (*(&((x87_r7_5 < temp3_1 ? 1 : 0) << 8 | (FCMP_UO(x87_r7_5, temp3_1) ? 1 : 0) << 0xa
                | (x87_r7_5 == temp3_1 ? 1 : 0) << 0xe) + 1) & 0x41)
            x87_r7_4 = *(a1 + 0x264);
        else
            x87_r7_4 = 1f;
    }
    else
        x87_r7_4 = 0f;

    *(a1 + 0x264) = x87_r7_4;
    long double x87_r7_6 = *(a1 + 0x268);
    long double temp4 = 0f;
    x87_r7_6 - temp4;
    long double x87_r7_7;

    if (!(*(&((x87_r7_6 < temp4 ? 1 : 0) << 8 | (FCMP_UO(x87_r7_6, temp4) ? 1 : 0) << 0xa
        | (x87_r7_6 == temp4 ? 1 : 0) << 0xe) + 1) & 1))
    {
        long double x87_r7_8 = *(a1 + 0x268);
        long double temp5_1 = 1f;
        x87_r7_8 - temp5_1;

        if (*(&((x87_r7_8 < temp5_1 ? 1 : 0) << 8 | (FCMP_UO(x87_r7_8, temp5_1) ? 1 : 0) << 0xa
                | (x87_r7_8 == temp5_1 ? 1 : 0) << 0xe) + 1) & 0x41)
            x87_r7_7 = *(a1 + 0x268);
        else
            x87_r7_7 = 1f;
    }
    else
        x87_r7_7 = 0f;

    *(a1 + 0x268) = x87_r7_7;
    char* var_210 = a1 + 0x148;
    char* var_214 = &g_567c74;
    void var_200;
    Game_DataSymbolLoad(&var_200, "LOCAL:%s%s");

    if (*(a1 + 0x148))
    {
        char* edi_1 = a1 + 0x48;
        char* eax_3 = sub_4a5bb0(edi_1, a1 + 0x148);
        int32_t i;
        int32_t i_1;

        if (eax_3)
        {
            i = 0xffffffff;

            while (i)
            {
                bool cond:0_1 = 0 != *edi_1;
                edi_1 = &edi_1[1];
                i -= 1;

                if (!cond:0_1)
                    break;
            }

            char* edi_2 = a1 + 0x148;
            i_1 = 0xffffffff;

            while (i_1)
            {
                bool cond:1_1 = 0 != *edi_2;
                edi_2 = &edi_2[1];
                i_1 -= 1;

                if (!cond:1_1)
                    break;
            }
        }

        if (!eax_3 || ~i_1 - 1 != ~i - 1)
        {
            char* eax_4 = sub_4a5bb0(a1 + 0x148, "File not found");
            int32_t eax_5;

            if (!eax_4)
                eax_5 = sub_4b5b60(&var_200);

            if (eax_4 || !eax_5)
                Game_DataSymbolLoad(a1 + 0x148, "File not found");
            else
            {
                if (*(a1 + 0x44))
                {
                    Struct_Clear36(a1 + 0x20);
                    *(a1 + 0x44) = 0;
                }

                sub_4b24c0(a1 + 0x20, 0, &var_200);
                *(a1 + 0x44) = 1;
            }
        }
    }

    return Game_DataSymbolLoad(a1 + 0x48, a1 + 0x148);
}
