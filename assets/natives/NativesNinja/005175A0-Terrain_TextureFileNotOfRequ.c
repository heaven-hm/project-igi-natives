#include "005175A0-Terrain_TextureFileNotOfRequ.h"
/* 0x005175a0 Terrain_TextureFileNotOfRequ full linked: callers=1 callees=16 */
int32_t* sub_5175a0(int32_t* a1)

{
    sub_4b26a0();
    int32_t* var_20 = a1;
    int32_t eax;
    void* ecx;
    int32_t edx;
    int32_t* eax_1 = Resource_Load(eax, edx, ecx, nullptr);
    int32_t* ebp = nullptr;

    if (!eax_1)
    {
        int32_t* var_1c_6 = a1;
        Error_Show("Couldn't load texture file '%s'.");

        while (true)
            /* nop */

        return;
    }

    char eax_2 = *eax_1;

    if (eax_2 == 0x4c)
    {
        if (*(eax_1 + 1) == 0x4f && *(eax_1 + 2) == 0x4f && *(eax_1 + 3) == 0x50 && eax_1[1] == 7)
        {
            int32_t ebx = eax_1[6];
            int32_t var_8;
            int32_t edi_1;

            if (!ebx)
            {
                var_8 = 2;
                edi_1 = 2;
            }
            else
            {
                int32_t* eax_3 = Mem_Alloc(0xc, 4);
                edi_1 = *(ebx + eax_1 + 0xc);
                ebp = eax_3;
                var_8 = edi_1;
                sub_4b7cf0(ebp, ebx + eax_1 + 0x10, edi_1);
            }

            int32_t* eax_6 = Mem_Alloc(eax_1[8] * 0x24 + 0x30, 4);
            *eax_6 = edi_1;
            eax_6[2] = ebp;
            int32_t i = 0;
            eax_6[1] = eax_1[8];

            if (eax_1[8] > 0)
            {
                int32_t* var_4_1 = &eax_6[3];
                int32_t* edi_2 = &eax_1[0xf];

                do
                {
                    sub_4b23b0(var_4_1, eax_6[2], edi_2[-1], *edi_2, edi_2[1], var_8,
                        *(eax_1 + 0x12), 0, edi_2[-2] + eax_1);
                    i += 1;
                    edi_2 = &edi_2[0xa];
                    var_4_1 = &var_4_1[9];
                } while (i < eax_1[8]);
            }

            sub_4b26b0();
            Resource_Unload(a1);
            return eax_6;
        }

        if (eax_2 == 0x4c && *(eax_1 + 1) == 0x4f && *(eax_1 + 2) == 0x4f && *(eax_1 + 3) == 0x50
            && eax_1[1] == 9)
        {
            int32_t ebx_2 = eax_1[6];
            int32_t edi_3;

            if (!ebx_2)
                edi_3 = 2;
            else
            {
                int32_t* eax_14 = Mem_Alloc(0xc, 4);
                edi_3 = *(ebx_2 + eax_1 + 0xc);
                ebp = eax_14;
                sub_4b7cf0(ebp, ebx_2 + eax_1 + 0x10, edi_3);
            }

            int32_t* eax_17 = Mem_Alloc(eax_1[8] * 0x24 + 0x30, 4);
            *eax_17 = edi_3;
            eax_17[2] = ebp;
            int32_t i_1 = 0;
            eax_17[1] = eax_1[8];

            if (eax_1[8] > 0)
            {
                int32_t* var_4_2 = &eax_17[3];
                int16_t* edi_4 = &eax_1[0x10];

                do
                {
                    int32_t edx_10 = 0;
                    edx_10 = *edi_4;
                    int32_t eax_20 = 0;
                    int32_t ecx_15 = 0;
                    eax_20 = edi_4[-1];
                    ecx_15 = edi_4[-2];
                    sub_4b23b0(var_4_2, eax_17[2], ecx_15, eax_20, edx_10, *(edi_4 - 8),
                        *(eax_1 + 0x12), 0, *(edi_4 - 0xc) + eax_1);
                    i_1 += 1;
                    edi_4 = &edi_4[0x10];
                    var_4_2 = &var_4_2[9];
                } while (i_1 < eax_1[8]);
            }

            sub_4b26b0();
            Resource_Unload(a1);
            return eax_17;
        }
    }

    int32_t* var_1c_5 = a1;
    Error_Show("Texture file not of required type: '%s'.");

    while (true)
        /* nop */
}
