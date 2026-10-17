// Original IGI.EXE function: Car_Update (VA 0x0042F530; static CFG gate PASS, CFG score 0.957).
#include "Car_Update.h"
int32_t Car_Update(void* a1)

{
    char* valA = DynObj_Missing(a1 + 0x154);
    *(a1 + 0x91c) = 0;
    *(a1 + 0x2ed5) = 0;

    if (valA)
    {
        DynObj_CreateMagicObject_5(a1, valA);
        valA = SoundSys_EvaluateTrigger_18(a1 + 0x154);

        if (valA)
        {
            Script_ParseEnumReal32_28(a1, valA);
            Script_CallNativeHandler_16(a1);
            Menu_DrawWidget_22(a1);
            Menu_HandleInput_22(a1);
            *(a1 + 0xa58) = *(a1 + 0x2ec0) * 0.0174532924f;
            *(a1 + 0xa60) = *(a1 + 0x2ec4) * 0.0174532924f;
            *(a1 + 0xa68) = *(a1 + 0x2ec8) * 4096f;
            FX_DebrisSpawn_13(a1 + 0xa90, 1, 4, AI_CombatTarget_22(), 4, 8);
        }
    }
    else if (*(a1 + 0x154) && *(a1 + 0x155) != 0x2a)
    {
        char* v_118_3 = a1 + 0x154;
        void v_80;
        Game_DataSymbolLoad(&v_80, "Model "%s" not available");
        char* dstD1 = a1 + 0x154;
        int32_t i = 0xffffffff;

        while (i)
        {
            bool cond_1_1 = 0 != *dstD1;
            dstD1 = &dstD1[1];
            i -= 1;

            if (!cond_1_1)
                break;
        }

        int32_t objC1 = ~i;
        void v_100;
        int32_t srcS2;
        int32_t dstD3;
        dstD3 = memcpy(&v_100, dstD1 - objC1, objC1 & 0xfffffffc);
        memcpy(dstD3, srcS2, objC1 & 3);
        void* v_124_2 = &v_100;
        Game_DataSymbolLoad(a1 + 0x154, "** %s **");
    }

    *(a1 + 0x730) = *(a1 + 0x740);
    *(a1 + 0x720) = *(a1 + 0x740);
    long double x87_r7_9 = *(a1 + 0x9c);
    long double fpu6 = *(a1 + 0xa0);
    fpu6 - x87_r7_9;
    *(a1 + 0x91d) = 0;
    long double x87_r7_10;

    if (!(*(&((fpu6 < x87_r7_9 ? 1 : 0) << 8 | (FCMP_UO(fpu6, x87_r7_9) ? 1 : 0) << 0xa
            | (fpu6 == x87_r7_9 ? 1 : 0) << 0xe) + 1) & 1))
        x87_r7_10 = *(a1 + 0xa0);
    else
        x87_r7_10 = *(a1 + 0x9c);

    long double x87_r6_1 = *(a1 + 0x98);
    x87_r6_1 - x87_r7_10;
    long double x87_r7_12;

    if (*(&((x87_r6_1 < x87_r7_10 ? 1 : 0) << 8 | (FCMP_UO(x87_r6_1, x87_r7_10) ? 1 : 0) << 0xa
        | (x87_r6_1 == x87_r7_10 ? 1 : 0) << 0xe | 0x3800) + 1) & 0x41)
    {
        long double x87_r7_13 = *(a1 + 0x9c);
        long double x87_r6_2 = *(a1 + 0xa0);
        x87_r6_2 - x87_r7_13;

        if (!(*(&((x87_r6_2 < x87_r7_13 ? 1 : 0) << 8
                | (FCMP_UO(x87_r6_2, x87_r7_13) ? 1 : 0) << 0xa
                | (x87_r6_2 == x87_r7_13 ? 1 : 0) << 0xe) + 1) & 1))
            x87_r7_12 = *(a1 + 0xa0);
        else
            x87_r7_12 = *(a1 + 0x9c);
    }
    else
        x87_r7_12 = *(a1 + 0x98);

    float v_118_5 = Render_ComputeNormals(*(a1 + 0x6c)) * x87_r7_12;
    WorldObject_CommitTransform(Level_StartMission_4(), a1, a1 + 0x168, v_118_5);
    memcpy(a1 + 0x70, a1 + 0x18c, 0x28);
    Script_ParseEnumInt32_17(a1);
    CarGun_ConstructPath(a1);
    int32_t* i_1 = *(*(a1 + 0xe8) + 8);

    if (*i_1 && i_1)
    {
        int32_t objC6 = g_afa7e0;

        do
        {
            int32_t* tmpD1 = *i_1;
            void* valA10;

            if (!tmpD1)
                valA10 = nullptr;
            else
            {
                int32_t valA7 = *tmpD1;
                int32_t valA8 = -(valA7);
                valA10 = (valA8 - valA8) & tmpD1;
            }

            *((objC6 << 2) + &g_afa6e0) = valA10;
            g_afa7e0 = objC6 + 1;
            uint32_t valA12 = Script_ParseEnumReal32_8();
            int32_t valA13 = 0;
            valA13 = i_1[7];
            int32_t valA14 = *(((valA12 * 0x180 + valA13) << 2) + &g_a96ae0);

            if (valA14)
                valA14(i_1, 0);

            objC6 = g_afa7e0 - 1;
            g_afa7e0 = objC6;
            i_1 = *((objC6 << 2) + &g_afa6e0);
        } while (i_1);
    }

    Script_Isexists(a1 + 0x928, a1);
    Script_Isexists(a1 + 0x978, a1);
    Script_Isexists(a1 + 0x9c8, a1);
    return 0;
}
