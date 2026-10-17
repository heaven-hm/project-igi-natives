// Original IGI.EXE function: Wheel_LoadParameters (VA 0x00430000; static CFG gate PASS, CFG score 0.900).
#include "Wheel_LoadParameters.h"
int32_t Wheel_LoadParameters(int32_t* context, float param_2)

{
    int32_t* context_val = param_2;
    void* data_1 = DynObj_Missing(*context_val);

    if (data_1)
    {
        memcpy(&context[0x3c], &context_val[8], 0x18);
        memcpy(&context[0x42], &context_val[0x18], 0x28);
        DynObj_LookupHashItem_6(context_val[1], context, data_1);
        long double fpu7 = context[0x27];
        long double fpu6 = context[0x28];
        fpu6 - fpu7;
        long double fpu_val_7_1;

        if (!(*(&((fpu6 < fpu7 ? 1 : 0) << 8 | (FCMP_UO(fpu6, fpu7) ? 1 : 0) << 0xa
                | (fpu6 == fpu7 ? 1 : 0) << 0xe) + 1) & 1))
            fpu_val_7_1 = context[0x28];
        else
            fpu_val_7_1 = context[0x27];

        long double fpu_val_6_1 = context[0x26];
        fpu_val_6_1 - fpu_val_7_1;
        long double fpu_val_7_3;

        if (*(&((fpu_val_6_1 < fpu_val_7_1 ? 1 : 0) << 8 | (FCMP_UO(fpu_val_6_1, fpu_val_7_1) ? 1 : 0) << 0xa
            | (fpu_val_6_1 == fpu_val_7_1 ? 1 : 0) << 0xe | 0x3800) + 1) & 0x41)
        {
            long double fpu_val_7_4 = context[0x27];
            long double fpu_val_6_2 = context[0x28];
            fpu_val_6_2 - fpu_val_7_4;

            if (!(*(&((fpu_val_6_2 < fpu_val_7_4 ? 1 : 0) << 8
                    | (FCMP_UO(fpu_val_6_2, fpu_val_7_4) ? 1 : 0) << 0xa
                    | (fpu_val_6_2 == fpu_val_7_4 ? 1 : 0) << 0xe) + 1) & 1))
                fpu_val_7_3 = context[0x28];
            else
                fpu_val_7_3 = context[0x27];
        }
        else
            fpu_val_7_3 = context[0x26];

        long double fpu_val_7_6 = Render_ComputeNormals(context[0x1b]) * fpu_val_7_3;
        DynObj_LinkDynamicCube_8(context_val[1], context, &context_val[2], fpu_val_7_6, 2);
        memcpy(&context[0x1c], &context_val[0xe], 0x28);
        context[0x53] = SoundSys_EvaluateTrigger_18(*context_val);
        context[0x4f] = 0;
        context[0x50] = 0;
        context[0x51] = 0;
        context[0x4e] = 0;
        void* entity_2 = context_val[0x22];
        context[0x4c] = entity_2;
        int32_t result = Menu_LeaveMenus_23();

        if (*(entity_2 + 0x1c) == result)
        {
            context[0x52] = *(entity_2 + 0x750);
            *(entity_2 + 0x750) += 1;
            result = context[0x52];
            *(entity_2 + result * 0x1c + 0x75c) = 1;
        }

        context[0x54] = 0;
        return result;
    }

    int32_t item_14_1 = *context_val;
    Error_Show("VirModel "%s" not available");

    while (true)
        /* nop */
}
