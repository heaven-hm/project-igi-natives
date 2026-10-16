#include "DynObj_CreateMagicObject_7.h"
int32_t DynObj_CreateMagicObject_7(int32_t* a1)

{
    int32_t objC;
    int32_t v_4_1 = objC;
    int32_t* srcS = a1;
    void* valA = srcS[0x370];

    if (valA)
    {
        Sys_ExecuteBytecode_2(valA);
        srcS[0x370] = 0;
    }

    void* valA1 = srcS[0x371];

    if (valA1)
    {
        Sys_ExecuteBytecode_2(valA1);
        srcS[0x371] = 0;
    }

    void* valA2 = srcS[0x36f];

    if (valA2)
    {
        Terrain_SampleHeightmap_5(valA2);
        srcS[0x36f] = 0;
    }

    int32_t* valA3 = srcS[0x37d];

    if (valA3)
    {
        Sys_PopStack_21(valA3);
        Sys_ExecuteBytecode_2(srcS[0x37d]);
        srcS[0x37d] = 0;
    }

    if (srcS[0x373])
    {
        void* flagP1 = nullptr;

        for (int32_t* i = nullptr; i < 0xc00; )
        {
            void* valA5 = *(i + srcS[0x373]);

            if (valA5 && !*(flagP1 + 0xb81a20))
            {
                Sys_ExecuteBytecode_2(valA5);
                *(i + srcS[0x373]) = 0;
            }

            i = &i[3];
            flagP1 += 1;
        }
    }

    if (srcS[0x374])
    {
        void* flagP2 = nullptr;

        for (int32_t* i_1 = nullptr; i_1 < 0xc00; )
        {
            void* valA7 = *(i_1 + srcS[0x374]);

            if (valA7 && !*(flagP2 + 0xb81920))
            {
                Sys_ExecuteBytecode_2(valA7);
                *(i_1 + srcS[0x374]) = 0;
            }

            i_1 = &i_1[3];
            flagP2 += 1;
        }
    }

    int32_t valA8 = srcS[2];

    if (valA8)
        Resource_Flush(valA8);

    int32_t valA9 = srcS[3];

    if (valA9)
    {
        Resource_Flush(valA9);
        Render_SetupLighting_3();
    }

    int32_t valA10 = srcS[1];

    if (valA10)
        Resource_Flush(valA10);

    int32_t valA11 = srcS[0x373];

    if (valA11)
        Resource_Flush(valA11);

    int32_t valA12 = srcS[0x374];

    if (valA12)
        Resource_Flush(valA12);

    for (int32_t* i_2 = &g_b81b28; i_2 < 0xb97b28; i_2 = &i_2[0xb])
    {
        if (i_2[-1])
            Struct_Clear36(i_2);
    }

    int32_t* flagP3 = &srcS[4];
    int32_t v_4 = 6;
    a1 = flagP3;
    bool cond_1_1;

    do
    {
        int32_t* valA13 = *(*flagP3 + 0x3c);

        if (valA13)
            DynCubeObj_Action(valA13);

        int32_t* dstD1 = srcS[0x345];
        int32_t tmpD3 = *(dstD1 + *flagP3);
        int32_t valA16 = srcS[0x342] - 1;
        srcS[0x342] = valA16;

        if (tmpD3 != valA16)
        {
            int32_t objC3 = srcS[0x341];
            int32_t flagP4 = *(objC3 + (tmpD3 << 2));
            int32_t valA19 = *(objC3 + (valA16 << 2)) * srcS[0x344] + srcS[0x340];
            int32_t dstD2 = *(dstD1 + valA19);
            *(objC3 + (tmpD3 << 2)) = *(objC3 + (dstD2 << 2));
            *(srcS[0x341] + (dstD2 << 2)) = flagP4;
            flagP3 = a1;
            *(srcS[0x345] + valA19) = tmpD3;
        }

        flagP3 = &flagP3[1];
        cond_1_1 = v_4 != 1;
        a1 = flagP3;
        v_4 -= 1;
    } while (cond_1_1);
    Sys_OpenFileStream_2(&srcS[0x340]);
    return Sys_ExecuteBytecode_2(srcS);
}
