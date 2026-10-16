#include "004C1600-DynObj_InsertHashItem_4.h"
/* 0x004c1600 DynObj_InsertHashItem_4 full linked: callers=0 callees=8 */
void* sub_4c1600(int32_t* a1, int32_t* a2)

{
    int16_t var_200;
    __builtin_memset(&var_200, 0x20202020, 0x200);
    var_200 = 0xa0d;
    int32_t eax_3 = a1[1] + 2;
    char var_1fe = 0;
    char var_1fe_1 = 0x20;
    int32_t var_228 = 0x200;

    if (eax_3 <= 0x200)
        var_228 = eax_3;

    int32_t esi = *(a1[2] + *a2 + 1);
    int32_t var_224 = esi;
    sub_4b1700(*a1, &g_547a4c, 1);
    int32_t ebp = 0;
    int32_t var_22c = 0;

    if (esi > 0)
    {
        do
        {
            int32_t var_240_1 = *(a1[2] + (ebp << 2) + *a2 + 5);
            void var_220;
            Game_DataSymbolLoad(&var_220, "@%08X");

            if (ebp >= esi - 1)
                var_22c = 0;
            else
            {
                void* edi_1 = &g_547a44;
                int32_t i = 0xffffffff;

                while (i)
                {
                    bool cond:2_1 = 0 != *edi_1;
                    edi_1 += 1;
                    i -= 1;

                    if (!cond:2_1)
                        break;
                }

                int32_t ecx_4 = ~i;
                void* edi_3 = &var_220;
                int32_t i_1 = 0xffffffff;

                while (i_1)
                {
                    bool cond:3_1 = 0 != *edi_3;
                    edi_3 += 1;
                    i_1 -= 1;

                    if (!cond:3_1)
                        break;
                }

                int32_t esi_2;
                int32_t edi_5;
                edi_5 = memcpy(edi_3 - 1, edi_1 - ecx_4, ecx_4 & 0xfffffffc);
                memcpy(edi_5, esi_2, ecx_4 & 3);
                esi = var_224;
            }

            void* edi_6 = &var_220;
            int32_t i_2 = 0xffffffff;

            while (i_2)
            {
                bool cond:5_1 = 0 != *edi_6;
                edi_6 += 1;
                i_2 -= 1;

                if (!cond:5_1)
                    break;
            }

            sub_4b1700(*a1, &var_220, ~i_2 - 1);

            if (var_22c >= 4)
            {
                var_22c = 0xffffffff;
                sub_4b1700(*a1, &var_200, var_228);
            }

            ebp += 1;
            var_22c += 1;
        } while (ebp < esi);
    }

    sub_4b1700(*a1, &g_547ee8, 3);
    a1[2] += (esi << 2) + 5;
    return (esi << 2) + 5;
}
