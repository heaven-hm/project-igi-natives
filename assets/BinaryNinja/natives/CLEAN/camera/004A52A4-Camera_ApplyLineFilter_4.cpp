// IGI native provenance: Camera_ApplyLineFilter_4 - 0x004A52A4 - CFG score 100.0% (PASS; structural only); runtime behavior not verified.
// Evidence: 004A52A4-Camera_ApplyLineFilter_4.md; REA/Ghidra static record; catalog: assets/BinaryNinja/IGINatives_VERIFIED.json.
#include "Camera_ApplyLineFilter_4.h"
int32_t Camera_ApplyLineFilter_4(int32_t* context, void* param_2, enum SET_FILE_POINTER_MOVE_METHOD param_3)

{
    int32_t data_val = context[3];

    if (data_val & 0x83)
    {
        enum SET_FILE_POINTER_MOVE_METHOD dest_1 = param_3;

        if (!dest_1 || dest_1 == FILE_CURRENT || dest_1 == FILE_END)
        {
            data_val &= 0xef;
            context[3] = data_val;

            if (dest_1 == FILE_CURRENT)
            {
                param_2 += Camera_UpdateTransform_10(context);
                dest_1 = FILE_BEGIN;
            }

            Camera_ApplyHandiCam_9(context);
            int32_t data_2 = context[3];

            if (data_2 & 0x80)
            {
                data_2 &= 0xfc;
                context[3] = data_2;
            }
            else if (data_2 & 1 && data_2 & 8 && !(*(&data_2 + 1) & 4))
                context[6] = 0x200;

            int32_t entity_3 = 0;
            entity_3 = Camera_ResetMatrix_9(context[4], param_2, dest_1) != 0xffffffff;
            return entity_3 - 1;
        }
    }

    g_936064 = 0x16;
    return 0xffffffff;
}
