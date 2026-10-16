#include "gi_platform.h"
#include "004F1400-Script_Isexists.h"
int32_t Script_Isexists(int32_t* a1, void* a2)

{
    int32_t i = 0;
    char* valA = *a1;
    bool cond_0 = a1[0x13] <= 0;
    char* v_584 = valA;
    char v_400;
    char* ctxB = &v_400;
    v_400 = 0;

    if (!cond_0)
    {
        int32_t* srcS1 = &a1[3];

        do
        {
            Qtask_UpdateList(*srcS1);
            *srcS1 = 0;
            i += 1;
            srcS1 = &srcS1[1];
        } while (i < a1[0x13]);

        valA = v_584;
    }

    char* objC1 = a1[2];

    if (objC1)
    {
        Sys_PushStack_24(objC1);
        valA = v_584;
    }

    a1[0x13] = 0;

    if (valA)
    {
        while (*valA)
        {
            char v_580;

            if (!Terrain_SelectTerrainLOD_5(valA, &v_584, &v_580, 0x7f))
            {
                char objC19 = *v_584;
                ctxB[1] = 0;
                *ctxB = objC19;
                valA = v_584;

                if (*valA)
                {
                    ctxB = &ctxB[1];
                    valA = &valA[1];
                    v_584 = valA;
                }
            }
            else
            {
                int32_t valA4 = Script_ParseEnumString_7(&v_580);

                if (valA4 >= 0)
                {
                    char objC4 = v_580;

                    if (objC4 < 0x30 || objC4 > 0x39)
                    {
                        void* valA5 = Script_ExecuteLevelScript_4(valA4);

                        if (!valA5)
                            v_580 = g_54e0e0;
                        else
                        {
                            void* v_598_5 = a2;
                            Script_EvaluateCondition_6(a1, valA5);
                        }
                    }
                }

                char v_57f;
                char v_57e;
                char v_57d;
                char v_57c;

                if (v_580 == 0x74 && v_57f == 0x68 && v_57e == 0x69 && v_57d == 0x73
                    && v_57c == 0x2e)
                {
                    char v_57b;
                    void* dstD = &v_57b;
                    int32_t i_1 = 0xffffffff;

                    while (i_1)
                    {
                        bool cond_7_1 = 0 != *dstD;
                        dstD += 1;
                        i_1 -= 1;

                        if (!cond_7_1)
                            break;
                    }

                    int32_t objC6 = ~i_1;
                    char v_500;
                    int32_t srcS3;
                    int32_t dstD2;
                    dstD2 = memcpy(&v_500, dstD - objC6, objC6 & 0xfffffffc);
                    memcpy(dstD2, srcS3, objC6 & 3);
                    char v_480;
                    Script_ParseEnumString_6(&v_480, a2);
                    void* v_5a0_3 = &v_500;
                    void* v_5a4_2 = &v_480;
                    Game_DataSymbolLoad(&v_580, "%s.%s");
                }

                if (Camera_UpdateViewCone_6(&v_580, ".isExists"))
                    v_580 = g_54e0c8;

                char* dstD3 = &v_580;
                int32_t i_2 = 0xffffffff;

                while (i_2)
                {
                    bool cond_5_1 = 0 != *dstD3;
                    dstD3 = &dstD3[1];
                    i_2 -= 1;

                    if (!cond_5_1)
                        break;
                }

                int32_t objC13 = ~i_2;
                int32_t srcS5;
                int32_t dstD6;
                dstD6 = memcpy(ctxB, dstD3 - objC13, objC13 & 0xfffffffc);
                memcpy(dstD6, srcS5, objC13 & 3);
                char* dstD7 = ctxB;
                int32_t i_3 = 0xffffffff;

                while (i_3)
                {
                    bool cond_6_1 = 0 != *dstD7;
                    dstD7 = &dstD7[1];
                    i_3 -= 1;

                    if (!cond_6_1)
                        break;
                }

                valA = v_584;
                ctxB = &ctxB[~i_3 - 1];
            }

            if (!valA)
                break;
        }
    }

    *ctxB = 0x3b;
    ctxB[1] = 0;
    void* valA9 = a1[1];

    if (valA9)
    {
        Sys_ExecuteBytecode_2(valA9);
        a1[1] = 0;
    }

    if (!QHash_ValueGet())
    {
        QHash_ValueSet();
        Sys_ScriptStackUnderflow(0);
        char* dstD9 = &v_400;
        int32_t i_4 = 0xffffffff;

        while (i_4)
        {
            bool cond_2_1 = 0 != *dstD9;
            dstD9 = &dstD9[1];
            i_4 -= 1;

            if (!cond_2_1)
                break;
        }

        a1[1] = Mem_Alloc(~i_4, 4);
        a1[2] = Sys_ResolveSymbol_22(&v_400);
        Sys_ScriptStackOverflow();
        Sys_DispatchOpcode_2();
    }
    else
    {
        Sys_ScriptStackUnderflow(0);
        char* dstD8 = &v_400;
        int32_t i_5 = 0xffffffff;

        while (i_5)
        {
            bool cond_3_1 = 0 != *dstD8;
            dstD8 = &dstD8[1];
            i_5 -= 1;

            if (!cond_3_1)
                break;
        }

        a1[1] = Mem_Alloc(~i_5, 4);
        a1[2] = Sys_ResolveSymbol_22(&v_400);
        Sys_ScriptStackOverflow();
    }

    char* dstD10 = &v_400;
    int32_t i_6 = 0xffffffff;

    while (i_6)
    {
        bool cond_4_1 = 0 != *dstD10;
        dstD10 = &dstD10[1];
        i_6 -= 1;

        if (!cond_4_1)
            break;
    }

    int32_t objC22 = ~i_6;
    int32_t srcS7;
    int32_t dstD13;
    dstD13 = memcpy(a1[1], dstD10 - objC22, objC22 & 0xfffffffc);
    memcpy(dstD13, srcS7, objC22 & 3);
    return 0;
}
