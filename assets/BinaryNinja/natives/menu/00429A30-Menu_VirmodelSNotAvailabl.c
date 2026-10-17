// Original IGI.EXE function: Menu_VirmodelSNotAvailabl (VA 0x00429A30; static CFG gate PASS, CFG score 0.943).
#include "Menu_VirmodelSNotAvailabl.h"
struct status_msg* Menu_VirmodelSNotAvailabl(void* a1, void* a2, void* a3, double* a4, void* a5, float a6, double* a7, void* a8, char* a9, int32_t a10)

{
    struct status_msg* result;

    if (QHash_ValueGet())
        result = QTask_HandleInput(a1, Menu_PlayMusic_20(), 0);
    else
    {
        QHash_ValueSet();
        result = QTask_HandleInput(a1, Menu_PlayMusic_20(), 0);
        Sys_DispatchOpcode_2();
    }

    memcpy(&result->head[0x1c], a5, 0x28);
    char* dstD1 = a9;
    void* valA6 = DynObj_Missing(dstD1);

    if (valA6)
    {
        DynObj_CreateMagicObject_5(result, valA6);
        long double fpu7 = result->head[0x27];
        long double fpu6 = result->head[0x28];
        fpu6 - fpu7;
        long double x87_r7_1;

        if (!(*(&((fpu6 < fpu7 ? 1 : 0) << 8 | (FCMP_UO(fpu6, fpu7) ? 1 : 0) << 0xa
                | (fpu6 == fpu7 ? 1 : 0) << 0xe) + 1) & 1))
            x87_r7_1 = result->head[0x28];
        else
            x87_r7_1 = result->head[0x27];

        long double x87_r6_1 = result->head[0x26];
        x87_r6_1 - x87_r7_1;
        long double x87_r7_3;

        if (*(&((x87_r6_1 < x87_r7_1 ? 1 : 0) << 8 | (FCMP_UO(x87_r6_1, x87_r7_1) ? 1 : 0) << 0xa
            | (x87_r6_1 == x87_r7_1 ? 1 : 0) << 0xe | 0x3800) + 1) & 0x41)
        {
            long double x87_r7_4 = result->head[0x27];
            long double x87_r6_2 = result->head[0x28];
            x87_r6_2 - x87_r7_4;

            if (!(*(&((x87_r6_2 < x87_r7_4 ? 1 : 0) << 8
                    | (FCMP_UO(x87_r6_2, x87_r7_4) ? 1 : 0) << 0xa
                    | (x87_r6_2 == x87_r7_4 ? 1 : 0) << 0xe) + 1) & 1))
                x87_r7_3 = result->head[0x28];
            else
                x87_r7_3 = result->head[0x27];
        }
        else
            x87_r7_3 = result->head[0x26];

        float v_34_4 = Render_ComputeNormals(result->head[0x1b]) * x87_r7_3;
        WorldObject_CommitTransform(Level_StartMission_4(), result, a4, v_34_4);
        char* valA11 = SoundSys_EvaluateTrigger_18(dstD1);
        Script_ParseEnumReal32_28(result, valA11);
        *(result + 0x864) = *(*(valA11 + 0x2d4) + 0x120);
        Menu_RequestScreen_21(result);
        int32_t i = 0xffffffff;

        while (i)
        {
            bool cond_1_1 = 0 != *dstD1;
            dstD1 = &dstD1[1];
            i -= 1;

            if (!cond_1_1)
                break;
        }

        int32_t objC3 = ~i;
        int32_t srcS3;
        int32_t dstD4;
        dstD4 = memcpy(&result->sprite[0xa0], dstD1 - objC3, objC3 & 0xfffffffc);
        memcpy(dstD4, srcS3, objC3 & 3);
        *(result + 0x730) = 0x3f800000;
        *(result + 0x720) = 0x3f800000;
        Script_ParseEnumInt32_17(result);
        CarGun_ConstructPath(result);
        Menu_HandleInput_20(result);
        Menu_DrawWidget_20(result);
        void* objC7;
        objC7 = result->style[0];
        *(&objC7 + 1) = result->style[1];
        *(&objC7 + 2) = result->style[2];
        *(&objC7 + 3) = result->style[3];
        void* srcS4 = *(objC7 + 0x2d4);
        *(result + 0x858) = 0;

        if (a2)
            *(result + 0x858) = QTask_LinkEventHandler_2(a2);

        *(result + 0x85c) = 0;

        if (a3)
            *(result + 0x85c) = QTask_LinkEventHandler_2(a3);

        int32_t srcS5 = *(srcS4 + 0x11c);
        double v_18;
        void* valA17;

        if (srcS5)
        {
            if (srcS5 == 1)
            {
                *(result + 0x840) = *a7 - *a4;
                *(result + 0x848) = a7[1] - a4[1];
                *(result + 0x850) = a7[2] - a4[2];
                long double x87_r7_20 = *(result + 0x840);
                memcpy(&result->head[0x20a], a4, 0x18);
                *(result + 0x828) = x87_r7_20 + *(result + 0x828);
                *(result + 0x830) = *(result + 0x848) + *(result + 0x830);
                *(result + 0x838) = *(result + 0x850) + *(result + 0x838);
            }
            else if (a8)
                *(result + 0x860) = QTask_LinkEventHandler_2(a8);
            else if (a7)
                memcpy(&result->head[0x20a], a7, 0x18);

            valA17 = a5;
        }
        else
        {
            valA17 = a5;
            v_18 = *(valA17 + 0x10) * 4096000.0;
            double v_10_2 = *(valA17 + 0x1c) * 4096000.0;
            *(result + 0x828) = *(valA17 + 4) * 4096000.0 + *a4;
            *(result + 0x830) = v_18 + a4[1];
            *(result + 0x838) = v_10_2 + a4[2];
        }

        v_18 = *(valA17 + 0x1c);
        long double x87_r7_30 = *(valA17 + 0x10) * a6;
        result->sprite[0x54] = *(valA17 + 4) * a6 * 136.53334f;
        result->sprite[0x58] = x87_r7_30 * 136.53334f;
        v_18 = v_18 * a6 * 136.53334f;
        result->sprite[0x5c] = v_18;
        SoundSys_InitSoundSys_17(&result->sprite[0x3c]);
        *(result + 0x894) = a10;
        return result;
    }

    char* v_34_1 = dstD1;
    Error_Show("VirModel "%s" not available");

    while (true)
        /* nop */
}
