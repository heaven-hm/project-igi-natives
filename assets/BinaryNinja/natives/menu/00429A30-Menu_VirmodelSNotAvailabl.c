// IGI native provenance: Menu_VirmodelSNotAvailabl - 0x00429A30 - CFG score 94.3% (PASS; structural only); runtime behavior not verified.
// Evidence: 00429A30-Menu_VirmodelSNotAvailabl.md; REA/Ghidra static record; catalog: assets/BinaryNinja/IGINatives_VERIFIED.json.
#include "Menu_VirmodelSNotAvailabl.h"
struct status_msg* Menu_VirmodelSNotAvailabl(void* context, void* param_2, void* param_3, double* param_4, void* param_5, float param_6, double* param_7, void* param_8, char* param_9, int32_t param_10)

{
    struct status_msg* result;

    if (QHash_ValueGet())
        result = QTask_HandleInput(context, Menu_PlayMusic_20(), 0);
    else
    {
        QHash_ValueSet();
        result = QTask_HandleInput(context, Menu_PlayMusic_20(), 0);
        Sys_DispatchOpcode_2();
    }

    memcpy(&result->head[0x1c], param_5, 0x28);
    char* dest_1 = param_9;
    void* data_6 = DynObj_Missing(dest_1);

    if (data_6)
    {
        DynObj_CreateMagicObject_5(result, data_6);
        long double fpu7 = result->head[0x27];
        long double fpu6 = result->head[0x28];
        fpu6 - fpu7;
        long double fpu_val_7_1;

        if (!(*(&((fpu6 < fpu7 ? 1 : 0) << 8 | (FCMP_UO(fpu6, fpu7) ? 1 : 0) << 0xa
                | (fpu6 == fpu7 ? 1 : 0) << 0xe) + 1) & 1))
            fpu_val_7_1 = result->head[0x28];
        else
            fpu_val_7_1 = result->head[0x27];

        long double fpu_val_6_1 = result->head[0x26];
        fpu_val_6_1 - fpu_val_7_1;
        long double fpu_val_7_3;

        if (*(&((fpu_val_6_1 < fpu_val_7_1 ? 1 : 0) << 8 | (FCMP_UO(fpu_val_6_1, fpu_val_7_1) ? 1 : 0) << 0xa
            | (fpu_val_6_1 == fpu_val_7_1 ? 1 : 0) << 0xe | 0x3800) + 1) & 0x41)
        {
            long double fpu_val_7_4 = result->head[0x27];
            long double fpu_val_6_2 = result->head[0x28];
            fpu_val_6_2 - fpu_val_7_4;

            if (!(*(&((fpu_val_6_2 < fpu_val_7_4 ? 1 : 0) << 8
                    | (FCMP_UO(fpu_val_6_2, fpu_val_7_4) ? 1 : 0) << 0xa
                    | (fpu_val_6_2 == fpu_val_7_4 ? 1 : 0) << 0xe) + 1) & 1))
                fpu_val_7_3 = result->head[0x28];
            else
                fpu_val_7_3 = result->head[0x27];
        }
        else
            fpu_val_7_3 = result->head[0x26];

        float item_34_4 = Render_ComputeNormals(result->head[0x1b]) * fpu_val_7_3;
        WorldObject_CommitTransform(Level_StartMission_4(), result, param_4, item_34_4);
        char* data_11 = SoundSys_EvaluateTrigger_18(dest_1);
        Script_ParseEnumReal32_28(result, data_11);
        *(result + 0x864) = *(*(data_11 + 0x2d4) + 0x120);
        Menu_RequestScreen_21(result);
        int32_t i = 0xffffffff;

        while (i)
        {
            bool flag_1_1 = 0 != *dest_1;
            dest_1 = &dest_1[1];
            i -= 1;

            if (!flag_1_1)
                break;
        }

        int32_t entity_3 = ~i;
        int32_t source_3;
        int32_t dest_4;
        dest_4 = memcpy(&result->sprite[0xa0], dest_1 - entity_3, entity_3 & 0xfffffffc);
        memcpy(dest_4, source_3, entity_3 & 3);
        *(result + 0x730) = 0x3f800000;
        *(result + 0x720) = 0x3f800000;
        Script_ParseEnumInt32_17(result);
        CarGun_ConstructPath(result);
        Menu_HandleInput_20(result);
        Menu_DrawWidget_20(result);
        void* entity_7;
        entity_7 = result->style[0];
        *(&entity_7 + 1) = result->style[1];
        *(&entity_7 + 2) = result->style[2];
        *(&entity_7 + 3) = result->style[3];
        void* source_4 = *(entity_7 + 0x2d4);
        *(result + 0x858) = 0;

        if (param_2)
            *(result + 0x858) = QTask_LinkEventHandler_2(param_2);

        *(result + 0x85c) = 0;

        if (param_3)
            *(result + 0x85c) = QTask_LinkEventHandler_2(param_3);

        int32_t source_5 = *(source_4 + 0x11c);
        double item_18;
        void* data_17;

        if (source_5)
        {
            if (source_5 == 1)
            {
                *(result + 0x840) = *param_7 - *param_4;
                *(result + 0x848) = param_7[1] - param_4[1];
                *(result + 0x850) = param_7[2] - param_4[2];
                long double fpu_val_7_20 = *(result + 0x840);
                memcpy(&result->head[0x20a], param_4, 0x18);
                *(result + 0x828) = fpu_val_7_20 + *(result + 0x828);
                *(result + 0x830) = *(result + 0x848) + *(result + 0x830);
                *(result + 0x838) = *(result + 0x850) + *(result + 0x838);
            }
            else if (param_8)
                *(result + 0x860) = QTask_LinkEventHandler_2(param_8);
            else if (param_7)
                memcpy(&result->head[0x20a], param_7, 0x18);

            data_17 = param_5;
        }
        else
        {
            data_17 = param_5;
            item_18 = *(data_17 + 0x10) * 4096000.0;
            double item_10_2 = *(data_17 + 0x1c) * 4096000.0;
            *(result + 0x828) = *(data_17 + 4) * 4096000.0 + *param_4;
            *(result + 0x830) = item_18 + param_4[1];
            *(result + 0x838) = item_10_2 + param_4[2];
        }

        item_18 = *(data_17 + 0x1c);
        long double fpu_val_7_30 = *(data_17 + 0x10) * param_6;
        result->sprite[0x54] = *(data_17 + 4) * param_6 * 136.53334f;
        result->sprite[0x58] = fpu_val_7_30 * 136.53334f;
        item_18 = item_18 * param_6 * 136.53334f;
        result->sprite[0x5c] = item_18;
        SoundSys_InitSoundSys_17(&result->sprite[0x3c]);
        *(result + 0x894) = param_10;
        return result;
    }

    char* item_34_1 = dest_1;
    Error_Show("VirModel "%s" not available");

    while (true)
        /* nop */
}
