#include "gi_platform.h"
#include "0043EC80-GenericPhysicsObj_Process.h"
int32_t GenericPhysicsObj_Process(void* a1)

{
    memcpy(a1 + 0x70, a1 + 0x18c, 0x28);
    void* valA = DynObj_Missing(a1 + 0x154);

    if (valA)
    {
        DynObj_CreateMagicObject_5(a1, valA);
        Script_ParseEnumReal32_28(a1, SoundSys_EvaluateTrigger_18(a1 + 0x154));
    }
    else if ((*(int32_t*)(uintptr_t)(a1 + 0x154)) && (*(int32_t*)(uintptr_t)(a1 + 0x155)) != 0x2a)
    {
        char* v_118_2 = a1 + 0x154;
        char v_80;
        Game_DataSymbolLoad(&v_80, "Model "%s" not available");
        char* dstD1 = a1 + 0x154;
        int32_t i = 0xffffffff;

        while (i)
        {
            bool cond_0_1 = 0 != *dstD1;
            dstD1 = &dstD1[1];
            i -= 1;

            if (!cond_0_1)
                break;
        }

        int32_t objC1 = ~i;
        char v_100;
        int32_t srcS2;
        int32_t dstD3;
        dstD3 = memcpy(&v_100, dstD1 - objC1, objC1 & 0xfffffffc);
        memcpy(dstD3, srcS2, objC1 & 3);
        void* v_124_2 = &v_100;
        Game_DataSymbolLoad(a1 + 0x154, "** %s **");
    }

    (*(int32_t*)(uintptr_t)(a1 + 0x108)) = (*(int32_t*)(uintptr_t)(a1 + 0x180));
    (*(int32_t*)(uintptr_t)(a1 + 0x10c)) = (*(int32_t*)(uintptr_t)(a1 + 0x184));
    (*(int32_t*)(uintptr_t)(a1 + 0x110)) = (*(int32_t*)(uintptr_t)(a1 + 0x188));
    SoundSys_InitSoundSys_17(a1 + 0xf0);
    long double fpu7 = (*(int32_t*)(uintptr_t)(a1 + 0x9c));
    long double fpu6 = (*(int32_t*)(uintptr_t)(a1 + 0xa0));
    fpu6 - fpu7;
    long double x87_r7_1;

    if (!(*(&((fpu6 < fpu7 ? 1 : 0) << 8 | (FCMP_UO(fpu6, fpu7) ? 1 : 0) << 0xa
            | (fpu6 == fpu7 ? 1 : 0) << 0xe) + 1) & 1))
        x87_r7_1 = (*(int32_t*)(uintptr_t)(a1 + 0xa0));
    else
        x87_r7_1 = (*(int32_t*)(uintptr_t)(a1 + 0x9c));

    long double x87_r6_1 = (*(int32_t*)(uintptr_t)(a1 + 0x98));
    x87_r6_1 - x87_r7_1;
    long double x87_r7_3;

    if (*(&((x87_r6_1 < x87_r7_1 ? 1 : 0) << 8 | (FCMP_UO(x87_r6_1, x87_r7_1) ? 1 : 0) << 0xa
        | (x87_r6_1 == x87_r7_1 ? 1 : 0) << 0xe | 0x3800) + 1) & 0x41)
    {
        long double x87_r7_4 = (*(int32_t*)(uintptr_t)(a1 + 0x9c));
        long double x87_r6_2 = (*(int32_t*)(uintptr_t)(a1 + 0xa0));
        x87_r6_2 - x87_r7_4;

        if (!(*(&((x87_r6_2 < x87_r7_4 ? 1 : 0) << 8 | (FCMP_UO(x87_r6_2, x87_r7_4) ? 1 : 0) << 0xa
                | (x87_r6_2 == x87_r7_4 ? 1 : 0) << 0xe) + 1) & 1))
            x87_r7_3 = (*(int32_t*)(uintptr_t)(a1 + 0xa0));
        else
            x87_r7_3 = (*(int32_t*)(uintptr_t)(a1 + 0x9c));
    }
    else
        x87_r7_3 = (*(int32_t*)(uintptr_t)(a1 + 0x98));

    float v_118_5 = Render_ComputeNormals((*(int32_t*)(uintptr_t)(a1 + 0x6c))) * x87_r7_3;
    return WorldObject_CommitTransform(Level_StartMission_4(), a1, a1 + 0x168, v_118_5);
}
