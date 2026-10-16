#include "Script_SpawnNewTask_25.h"
int32_t Script_SpawnNewTask_25(void* a1, void* a2)

{
    int32_t v_258;
    Script_FormatString_26(a2, &v_258);
    Script_FormatString_26(a2, a1 + 0x58);
    int32_t v_254;
    Script_FormatString_26(a2, &v_254);
    void* valA = *(a1 + 0x6c);

    if (valA)
    {
        Sys_ExecuteBytecode_2(valA);
        *(a1 + 0x6c) = 0;
    }

    void* valA3 = Mem_Alloc(Script_UndefinedGraphnodeda(a1) * *(a1 + 0x58), 4);
    int32_t tmpD = *(a1 + 0x58);
    *(a1 + 0x6c) = valA3;
    Script_ParseEnumString_23(a1, tmpD);
    uint32_t valA5 = Script_EvaluateCondition_22();
    int32_t objC = 0;
    objC = *(a1 + 0x1c);
    int32_t valA9 = *(((valA5 * 0x180 + objC) << 2) + &g_a96ae0);

    if (valA9)
        valA9(a1, 0);

    int32_t ctxB1 = 0;
    int32_t v_25c;
    int32_t v_250;
    int32_t* v_24c;

    if (v_258 > 0)
    {
        do
        {
            v_25c = 0xffffffff;
            int32_t v_240;
            Script_FormatString_26(a2, &v_240);
            void v_238;
            Script_ParseEnumReal32_27(a2, &v_238);
            float v_220;
            Script_SpawnNewTask_27(a2, &v_220);
            float v_21c[0x4];
            Script_SpawnNewTask_27(a2, &v_21c);

            if (Script_CallNativeHandler_27(a2) == 6)
                Script_SpawnNewTask_27(a2, &v_250);

            if (Script_CallNativeHandler_27(a2) == 5)
                Script_FormatString_26(a2, &v_25c);

            int32_t valA13 = v_25c;
            int32_t v_108;

            if (valA13 != 0xffffffff)
                v_108 = DynObj_RemoveSymbol_11(g_a44344, valA13);

            int32_t v_26c_7 = 0x100;
            void v_20c;
            Script_ParseEnumString_27(a2, &v_20c);
            int32_t v_278_3 = 0;
            int32_t* valA17 =
                Script_GraphnodeIdAlreadyUs(a1, v_240, &v_238, v_220, v_21c[0], v_108, &v_20c);

            if (valA17)
            {
                void* v_248_1 = a2;
                v_24c = valA17;
                uint32_t valA19 = Script_ParseEnumReal32_22();
                int32_t tmpD3 = 0;
                tmpD3 = *(a1 + 0x1c);
                int32_t valA20 = *(((valA19 * 0x180 + tmpD3) << 2) + &g_a96ae0);

                if (valA20)
                    valA20(a1, &v_24c);
            }

            ctxB1 += 1;
        } while (ctxB1 < v_258);
    }

    int32_t valA23 = v_254;
    int32_t ctxB2 = 0;

    if (valA23 > 0)
    {
        do
        {
            Script_FormatString_26(a2, &v_250);
            Script_FormatString_26(a2, &v_24c);
            Script_FormatString_26(a2, &v_25c);
            Script_SpawnNewTask_24(a1, v_250, v_24c, v_25c);
            valA23 = v_254;
            ctxB2 += 1;
        } while (ctxB2 < valA23);
    }

    int32_t tmpD5 = v_258;
    *(a1 + 0x60) = valA23;
    *(a1 + 0x5c) = tmpD5;
    void* v_244 = a2;
    uint32_t valA25 = Script_SpawnNewTask_22();
    int32_t objC6 = 0;
    objC6 = *(a1 + 0x1c);
    int32_t result = *(((valA25 * 0x180 + objC6) << 2) + &g_a96ae0);

    if (!result)
        return result;

    return result(a1, &v_244);
}
