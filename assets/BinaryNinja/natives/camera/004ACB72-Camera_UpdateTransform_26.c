// Original IGI.EXE function: Camera_UpdateTransform_26 (VA 0x004ACB72; static CFG gate PASS, CFG score 1.000).
#include "Camera_UpdateTransform_26.h"
char* Camera_UpdateTransform_26(char* context, char* param_2, int32_t param_3)

{
    int32_t temp_val = param_3;
    char* context_val = param_2;
    char* source_val = context;
    char* entity_val = *(temp_val + 0xc);
    *source_val = 0x30;
    char* result = &source_val[1];

    if (context_val > 0)
    {
        context = context_val;
        context_val = nullptr;
        char* i;

        do
        {
            char temp_1 = *entity_val;

            if (!temp_1)
                temp_val = 0x30;
            else
            {
                temp_val = temp_1;
                entity_val = &entity_val[1];
            }

            *result = temp_val;
            result = &result[1];
            i = context;
            context -= 1;
        } while (i != 1);
        temp_val = param_3;
    }

    *result = 0;

    if (context_val >= 0 && *entity_val >= 0x35)
    {
        while (true)
        {
            result -= 1;

            if (*result != 0x39)
                break;

            *result = 0x30;
        }

        *result += 1;
    }

    if (*source_val != 0x31)
        return Camera_ApplyHandiCam_26(source_val, &source_val[1], Camera_UpdateViewCone_20(&source_val[1]) + 1);

    *(temp_val + 4) += 1;
    return result;
}
