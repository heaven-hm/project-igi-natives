// Original IGI.EXE function: Terrain_TextureFileNotOfRequ (VA 0x005175A0; static CFG gate PASS, CFG score 1.000).
#include "Terrain_TextureFileNotOfRequ.h"
int32_t* Terrain_TextureFileNotOfRequ(int32_t* a1)

{
    Sys_PopStack_8();
    int32_t* v_20 = a1;
    int32_t valA;
    void* objC;
    int32_t tmpD;
    int32_t* valA1 = Resource_Load(valA, tmpD, objC, nullptr);
    int32_t* flagP = nullptr;

    if (!valA1)
    {
        int32_t* v_1c_6 = a1;
        Error_Show("Couldn't load texture file '%s'.");

        while (true)
            /* nop */

        return;
    }

    char valA2 = *valA1;

    if (valA2 == 0x4c)
    {
        if (*(valA1 + 1) == 0x4f && *(valA1 + 2) == 0x4f && *(valA1 + 3) == 0x50 && valA1[1] == 7)
        {
            int32_t ctxB = valA1[6];
            int32_t v_8;
            int32_t dstD1;

            if (!ctxB)
            {
                v_8 = 2;
                dstD1 = 2;
            }
            else
            {
                int32_t* valA3 = Mem_Alloc(0xc, 4);
                dstD1 = *(ctxB + valA1 + 0xc);
                flagP = valA3;
                v_8 = dstD1;
                Sys_PushStack_21(flagP, ctxB + valA1 + 0x10, dstD1);
            }

            int32_t* valA6 = Mem_Alloc(valA1[8] * 0x24 + 0x30, 4);
            *valA6 = dstD1;
            valA6[2] = flagP;
            int32_t i = 0;
            valA6[1] = valA1[8];

            if (valA1[8] > 0)
            {
                int32_t* v_4_1 = &valA6[3];
                int32_t* dstD2 = &valA1[0xf];

                do
                {
                    Sys_FreeMemory_8(v_4_1, valA6[2], dstD2[-1], *dstD2, dstD2[1], v_8,
                        *(valA1 + 0x12), 0, dstD2[-2] + valA1);
                    i += 1;
                    dstD2 = &dstD2[0xa];
                    v_4_1 = &v_4_1[9];
                } while (i < valA1[8]);
            }

            Sys_ResolveSymbol_8();
            Resource_Unload(a1);
            return valA6;
        }

        if (valA2 == 0x4c && *(valA1 + 1) == 0x4f && *(valA1 + 2) == 0x4f && *(valA1 + 3) == 0x50
            && valA1[1] == 9)
        {
            int32_t ctxB2 = valA1[6];
            int32_t dstD3;

            if (!ctxB2)
                dstD3 = 2;
            else
            {
                int32_t* valA14 = Mem_Alloc(0xc, 4);
                dstD3 = *(ctxB2 + valA1 + 0xc);
                flagP = valA14;
                Sys_PushStack_21(flagP, ctxB2 + valA1 + 0x10, dstD3);
            }

            int32_t* valA17 = Mem_Alloc(valA1[8] * 0x24 + 0x30, 4);
            *valA17 = dstD3;
            valA17[2] = flagP;
            int32_t i_1 = 0;
            valA17[1] = valA1[8];

            if (valA1[8] > 0)
            {
                int32_t* v_4_2 = &valA17[3];
                int16_t* dstD4 = &valA1[0x10];

                do
                {
                    int32_t tmpD10 = 0;
                    tmpD10 = *dstD4;
                    int32_t valA20 = 0;
                    int32_t objC15 = 0;
                    valA20 = dstD4[-1];
                    objC15 = dstD4[-2];
                    Sys_FreeMemory_8(v_4_2, valA17[2], objC15, valA20, tmpD10, *(dstD4 - 8),
                        *(valA1 + 0x12), 0, *(dstD4 - 0xc) + valA1);
                    i_1 += 1;
                    dstD4 = &dstD4[0x10];
                    v_4_2 = &v_4_2[9];
                } while (i_1 < valA1[8]);
            }

            Sys_ResolveSymbol_8();
            Resource_Unload(a1);
            return valA17;
        }
    }

    int32_t* v_1c_5 = a1;
    Error_Show("Texture file not of required type: '%s'.");

    while (true)
        /* nop */
}
