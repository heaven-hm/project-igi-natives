// Original IGI.EXE function: Task_New (VA 0x004F0780; static CFG gate PASS, CFG score 0.986).
#include "Task_New.h"
int32_t Task_New(int32_t a1, void* a2, float a3)

// Sig: void Task_New(...)
// Note: Instantiates a new game task from a declared type (731-byte factory;
// OpenIGI registers Task_New reading the type name then declared params). Call
// inside task blocks after Task_DeclareParameters; argc unknown (parser
// context).
{
    if (g_54dd16)
    {
        float srcS = a3;
        g_a70c74 = Sys_CheckHeap_23(srcS, 0);
        int32_t flagP = Script_GetArg(srcS, 0);
        int32_t v_c8 = flagP;
        void v_64;
        Sys_ResolveSymbol_23(srcS, 1, &v_64, 0x64);
        int32_t ctxB = 3;
        int32_t v_cc = 3;
        void v_a4;
        Sys_ResolveSymbol_23(srcS, 2, &v_a4, 0x40);
        int32_t* dstD;

        if (!g_a758bc)
            dstD = QTask_HandleInput(a2, QTask_QtaskTypeSNotDefined(&v_64), 0);
        else
        {
            dstD = QTask_RegisterEventCallback(a2, QTask_QtaskTypeSNotDefined(&v_64), 0);
            g_a758bc = 0;
        }

        if (!g_a758a8)
            g_a758a8 = dstD;

        void* v_e0 = &v_a4;
        int32_t* v_e4_5 = dstD;

        if (flagP >= 0)
        {
            if (!Script_ExecuteLevelScript_4(flagP))
                Script_LevelqtaskidDAlready(flagP, dstD);
            else
            {
                v_c8 = 0xffffffff;
                flagP = 0xffffffff;
            }
        }

        uint32_t valA12 = Script_ParseEnumInt32_8();
        int32_t objC3 = 0;
        objC3 = dstD[7];
        int32_t v_bc;
        int32_t v_b4;

        if (*(((valA12 * 0x180 + objC3) << 2) + &g_a96ae0))
        {
            uint32_t valA17 = Script_ParseEnumInt32_8();
            int32_t valA18 = 0;
            valA18 = dstD[7];
            int32_t* v_c0;
            (*(((valA17 * 0x180 + valA18) << 2) + &g_a96ae0))(dstD, &v_c0);
            int32_t* valA20 = v_c0;

            if (valA20)
            {
                int32_t tmpD5 = g_a70c98;
                int32_t v_b0_1 = g_a70c74;
                g_54dd16 = 0;
                v_b4 = tmpD5;
                bool cond_3_1 = *valA20 <= 0;
                v_bc = 3;
                float v_b8_1 = srcS;
                int32_t i_2 = 0;

                if (!cond_3_1)
                {
                    int32_t flagP1 = 0;
                    int32_t i;

                    do
                    {
                        void* tmpD6 = valA20[2];

                        if (*(tmpD6 + flagP1 + 0xc) & 1)
                        {
                            void* srcS2 = dstD + *(tmpD6 + flagP1);
                            char valA22 = Script_CallNativeHandler_8();
                            Script_ParseEnumString_8(srcS2, *(valA20[2] + flagP1 + 4), valA22, &v_bc);
                            srcS = a3;
                        }

                        i = i_2 + 1;
                        flagP1 += 0x10;
                        i_2 = i;
                    } while (i < *valA20);
                    flagP = v_c8;
                }

                ctxB = v_bc;
                v_cc = ctxB;
            }
        }

        g_54dd16 = 1;

        if (flagP >= 0)
        {
            int32_t valA24 = Script_FormatString_5();
            int32_t valA25 = 0;
            valA25 = dstD[7];
            int32_t valA26 = *(((valA24 * 0x180 + valA25) << 2) + &g_a96ae0);

            if (valA26)
                valA26(dstD);
        }

        int32_t valA27 = Script_ParseEnumInt32_6();
        int32_t tmpD12 = 0;
        tmpD12 = dstD[7];
        int32_t valA28 = *(((valA27 * 0x180 + tmpD12) << 2) + &g_a96ae0);

        if (valA28)
            valA28(dstD);

        Script_SetSymbolContext("Task_New", dstD);

        if (Sys_AllocateMemory_24(srcS, ctxB))
        {
            int32_t i_1;

            do
            {
                int32_t valA30 = ctxB;
                ctxB += 1;
                Script_GetArg(srcS, valA30);
                i_1 = Sys_AllocateMemory_24(srcS, ctxB);
            } while (i_1);
            v_cc = ctxB;
        }

        Script_SetSymbolContext("Task_New", a2);
        v_b4 = v_cc;
        v_bc = ctxB;
        char* v_ac = &g_567c74;
        memcpy(a1, &v_bc, 0x18);
        return a1;
    }

    int32_t saved_obj = g_a70c98;
    int32_t __saved_ebp_1 = g_a70c74;
    Error_Show("Too few parameters in line %d of file '%s'");

    while (true)
        /* nop */
}
