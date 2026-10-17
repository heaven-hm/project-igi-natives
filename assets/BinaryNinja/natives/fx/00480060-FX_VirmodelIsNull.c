// Original IGI.EXE function: FX_VirmodelIsNull (VA 0x00480060; static CFG gate PASS, CFG score 1.000).
#include "FX_VirmodelIsNull.h"
struct status_msg* FX_VirmodelIsNull(double* context, char* param_2, float param_3, int32_t param_4, int32_t param_5, int32_t param_6 , int32_t param_7, int32_t param_8, int32_t param_9)

{
    int32_t kind;
    kind = g_5c1168;
    struct status_msg* result = QTask_HandleInput(Script_FormatString(), kind, 0);
    void* data_1 = DynObj_Missing(param_2);

    if (data_1)
    {
        DynObj_CreateMagicObject_5(result, data_1);
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

        float item_c_2 = Render_ComputeNormals(result->head[0x1b]) * fpu_val_7_3;
        WorldObject_CommitTransform(Level_StartMission_4(), result, context, item_c_2);
        result->sprite[0x54] = param_7;
        result->sprite[0x55] = *(&param_7 + 1);
        result->sprite[0x56] = *(&param_7 + 2);
        result->sprite[0x57] = *(&param_7 + 3);
        result->head[0x26] = 0x3a83126f;
        result->head[0x27] = 0x3a83126f;
        result->head[0x28] = 0x3a83126f;
        result->sprite[0x40] = param_4;
        result->sprite[0x41] = *(&param_4 + 1);
        result->sprite[0x42] = *(&param_4 + 2);
        result->sprite[0x43] = *(&param_4 + 3);
        result->sprite[0x44] = param_4;
        result->sprite[0x45] = *(&param_4 + 1);
        result->sprite[0x46] = *(&param_4 + 2);
        result->sprite[0x47] = *(&param_4 + 3);
        result->sprite[0x48] = param_6;
        result->sprite[0x49] = *(&param_6 + 1);
        result->sprite[0x4a] = *(&param_6 + 2);
        result->sprite[0x4b] = *(&param_6 + 3);
        result->sprite[0x4c] = param_5;
        result->sprite[0x4d] = *(&param_5 + 1);
        result->sprite[0x4e] = *(&param_5 + 2);
        result->sprite[0x4f] = *(&param_5 + 3);
        result->sprite[0x50] = param_5;
        result->sprite[0x51] = *(&param_5 + 1);
        result->sprite[0x52] = *(&param_5 + 2);
        result->sprite[0x53] = *(&param_5 + 3);
        void* item_1c = data_1;
        result->sprite[0x58] = param_3 * 0.00048828125;
        char* item_20 = &result->sprite[0xc];
        result->sprite[0x5c] = param_8;
        result->sprite[0x5d] = *(&param_8 + 1);
        result->sprite[0x5e] = *(&param_8 + 2);
        result->sprite[0x5f] = *(&param_8 + 3);
        result->sprite[0x60] = param_9;
        result->sprite[0x61] = *(&param_9 + 1);
        result->sprite[0x62] = *(&param_9 + 2);
        result->sprite[0x63] = *(&param_9 + 3);
        return result;
    }

    Error_Show("VirModel is null");

    while (true)
        /* nop */
}
