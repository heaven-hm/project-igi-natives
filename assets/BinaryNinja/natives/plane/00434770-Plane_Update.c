// Original IGI.EXE function: Plane_Update (VA 0x00434770; static CFG gate PASS, CFG score 0.944).
#include "Plane_Update.h"
int32_t Plane_Update(float a1)

{
    void* valA = DynObj_Missing(a1 + 0x154);
    Script_ParseEnumInt32_17(a1);

    if (valA)
    {
        DynObj_CreateMagicObject_5(a1, valA);
        Script_ParseEnumReal32_28(a1, SoundSys_EvaluateTrigger_18(a1 + 0x154));
        Vehicle_UpdateRudder_3(a1);
    }
    else if (*(a1 + 0x154) && *(a1 + 0x155) != 0x2a)
    {
        char* v_124_2 = a1 + 0x154;
        void v_80;
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
        void v_100;
        int32_t srcS2;
        int32_t dstD3;
        dstD3 = memcpy(&v_100, dstD1 - objC1, objC1 & 0xfffffffc);
        memcpy(dstD3, srcS2, objC1 & 3);
        void* v_130_2 = &v_100;
        Game_DataSymbolLoad(a1 + 0x154, "** %s **");
    }

    *(a1 + 0x730) = *(a1 + 0x740);
    float v_110 = *(a1 + 0x740);
    long double x87_r7_2 = *(a1 + 0x180);
    long double f0 = 0f;
    x87_r7_2 - f0;
    *(a1 + 0x720) = v_110;
    void* valA7;
    float* objC5;

    if (!(*(&((x87_r7_2 < f0 ? 1 : 0) << 8 | (FCMP_UO(x87_r7_2, f0) ? 1 : 0) << 0xa
        | (x87_r7_2 == f0 ? 1 : 0) << 0xe) + 1) & 0x40))
    {
    label_4348c6:
        valA7 = a1 + 0xf0;
        objC5 = valA7 + 0x18;
        *(valA7 + 0x18) = *(a1 + 0x180);
        objC5[1] = *(a1 + 0x184);
        objC5[2] = *(a1 + 0x188);
        SoundSys_InitSoundSys_17(valA7);
    }
    else
    {
        long double x87_r7_3 = *(a1 + 0x184);
        long double f1_1 = 0f;
        x87_r7_3 - f1_1;

        if (!(*(&((x87_r7_3 < f1_1 ? 1 : 0) << 8 | (FCMP_UO(x87_r7_3, f1_1) ? 1 : 0) << 0xa
                | (x87_r7_3 == f1_1 ? 1 : 0) << 0xe) + 1) & 0x40))
            goto label_4348c6;

        long double x87_r7_4 = *(a1 + 0x188);
        long double f2_1 = 0f;
        x87_r7_4 - f2_1;

        if (!(*(&((x87_r7_4 < f2_1 ? 1 : 0) << 8 | (FCMP_UO(x87_r7_4, f2_1) ? 1 : 0) << 0xa
                | (x87_r7_4 == f2_1 ? 1 : 0) << 0xe) + 1) & 0x40))
            goto label_4348c6;

        float valA5 = *(a1 + 0x1b4);

        if (valA5)
        {
            valA7 = a1 + 0xf0;
            long double x87_r7_7 = v_110 * **(valA5 + 0x2d4) * 30.3407402f;
            objC5 = valA7 + 0x18;
            float v_108_1 = x87_r7_7 * *(a1 + 0x80);
            long double x87_r7_8 = x87_r7_7 * *(a1 + 0x8c);
            *objC5 = x87_r7_7 * *(a1 + 0x74);
            objC5[1] = v_108_1;
            objC5[2] = x87_r7_8;
            SoundSys_InitSoundSys_17(valA7);
        }
    }
    long double x87_r7_9 = *(a1 + 0x9c);
    long double x87_r6_5 = *(a1 + 0xa0);
    x87_r6_5 - x87_r7_9;
    long double x87_r7_10;

    if (!(*(&((x87_r6_5 < x87_r7_9 ? 1 : 0) << 8 | (FCMP_UO(x87_r6_5, x87_r7_9) ? 1 : 0) << 0xa
            | (x87_r6_5 == x87_r7_9 ? 1 : 0) << 0xe) + 1) & 1))
        x87_r7_10 = *(a1 + 0xa0);
    else
        x87_r7_10 = *(a1 + 0x9c);

    long double x87_r6_6 = *(a1 + 0x98);
    x87_r6_6 - x87_r7_10;
    long double x87_r7_12;

    if (*(&((x87_r6_6 < x87_r7_10 ? 1 : 0) << 8 | (FCMP_UO(x87_r6_6, x87_r7_10) ? 1 : 0) << 0xa
        | (x87_r6_6 == x87_r7_10 ? 1 : 0) << 0xe | 0x3800) + 1) & 0x41)
    {
        long double x87_r7_13 = *(a1 + 0x9c);
        long double x87_r6_7 = *(a1 + 0xa0);
        x87_r6_7 - x87_r7_13;

        if (!(*(&((x87_r6_7 < x87_r7_13 ? 1 : 0) << 8
                | (FCMP_UO(x87_r6_7, x87_r7_13) ? 1 : 0) << 0xa
                | (x87_r6_7 == x87_r7_13 ? 1 : 0) << 0xe) + 1) & 1))
            x87_r7_12 = *(a1 + 0xa0);
        else
            x87_r7_12 = *(a1 + 0x9c);
    }
    else
        x87_r7_12 = *(a1 + 0x98);

    float v_124_5 = Render_ComputeNormals(*(a1 + 0x6c)) * x87_r7_12;
    WorldObject_CommitTransform(Level_StartMission_4(), a1, a1 + 0x168, v_124_5);
    memcpy(a1 + 0x70, a1 + 0x18c, 0x28);
    CarGun_ConstructPath(a1);
    int32_t* i_1 = *(*(a1 + 0xe8) + 8);

    if (*i_1 && i_1)
    {
        int32_t objC7 = g_afa7e0;

        do
        {
            int32_t* tmpD7 = *i_1;
            void* valA14;

            if (!tmpD7)
                valA14 = nullptr;
            else
            {
                int32_t valA11 = *tmpD7;
                int32_t valA12 = -(valA11);
                valA14 = (valA12 - valA12) & tmpD7;
            }

            *((objC7 << 2) + &g_afa6e0) = valA14;
            g_afa7e0 = objC7 + 1;
            uint32_t valA16 = Script_ParseEnumReal32_8();
            int32_t objC9 = 0;
            objC9 = i_1[7];
            int32_t valA20 = *(((valA16 * 0x180 + objC9) << 2) + &g_a96ae0);

            if (valA20)
                valA20(i_1, 0);

            objC7 = g_afa7e0 - 1;
            g_afa7e0 = objC7;
            i_1 = *((objC7 << 2) + &g_afa6e0);
        } while (i_1);
    }

    Script_Isexists(a1 + 0x838, a1);
    return 0;
}
