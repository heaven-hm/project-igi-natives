// IGI native provenance: Camera_UpdateTransform_6 - 0x004A5980 - CFG score 100.0% (PASS; structural only); runtime behavior not verified.
// Evidence: 004A5980-Camera_UpdateTransform_6.md; REA/Ghidra static record; catalog: assets/BinaryNinja/IGINatives_VERIFIED.json.
#include "Camera_UpdateTransform_6.h"
int32_t Camera_UpdateTransform_6(int32_t context, int32_t param_2, int32_t param_3, char* param_4, char* param_5)

{
    char* source_val = param_5;
    int16_t data_val = 0x61dc;

    if (g_9361e4)
    {
        int32_t result = 0xff;
        uint32_t context_1 = 0;
        char* dest_2 = param_4;
        bool c_5;

        while (true)
        {
            result = result;

            if (!result)
                return result;

            result = *source_val;
            source_val = &source_val[1];
            context_1 = *dest_2;
            dest_2 = &dest_2[1];

            if (result != context_1)
            {
                int32_t result_1 = result;
                uint32_t item_18_1 = context_1;
                uint32_t data_1;
                int32_t entity_val;
                data_1 = Camera_SetFieldOfView_19(param_3);
                context_1 = data_1;
                result = Camera_SetFieldOfView_19(entity_val);
                c_5 = context_1 < result;

                if (context_1 != result)
                    break;
            }
        }

        return result - result + 1;
    }

    data_val = 0xff;
    char* dest_1 = param_4;

    while (true)
    {
        data_val = data_val;

        if (!data_val)
            break;

        data_val = *source_val;
        source_val = &source_val[1];
        *(&data_val + 1) = *dest_1;
        dest_1 = &dest_1[1];

        if (*(&data_val + 1) != data_val)
        {
            data_val -= 0x41;
            param_3 = param_3 - param_3;
            param_3 &= 0x20;
            data_val += param_3;
            data_val += 0x41;
            char f0_1 = data_val;
            data_val = *(&data_val + 1);
            *(&data_val + 1) = f0_1;
            data_val -= 0x41;
            param_3 = param_3 - param_3;
            param_3 &= 0x20;
            data_val += param_3;
            data_val += 0x41;
            bool c_3 = data_val < *(&data_val + 1);

            if (data_val != *(&data_val + 1))
            {
                char f3_1 = data_val;
                char f4_1 = data_val;
                data_val = f3_1 - f4_1;
                data_val = data_val + 1;
                break;
            }
        }
    }

    return data_val;
}
