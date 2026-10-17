// IGI native provenance: IntroScreen_LoadParameters - 0x00415380 - CFG score 100.0% (PASS; structural only); runtime behavior not verified.
// Evidence: 00415380-IntroScreen_LoadParameters.md; REA/Ghidra static record; catalog: assets/BinaryNinja/IGINatives_VERIFIED.json.
#include "IntroScreen_LoadParameters.h"
int32_t IntroScreen_LoadParameters(int32_t* context)

{
    int32_t entity_val = 0;
    float data_val = context[0xb];
    entity_val = !data_val;
    int32_t dest_val = entity_val;

    if (data_val && !Display_SwapBuffers_2(context, dest_val, data_val))
        dest_val = 1;

    if (g_c28c63 & 0x80)
    {
        void* data_2 = context[0xb];

        if (data_2)
        {
            Display_CreateSurface(data_2);
            context[0xb] = 0;
        }
    }
    else if (dest_val)
    {
        void* data_3 = context[0xb];

        if (data_3)
        {
            Display_CreateSurface(data_3);
            context[0xb] = 0;
        }

        int32_t data_4 = context[9];

        if (data_4 < context[8])
        {
            int32_t item_c_4 = 0;
            int32_t (* item_10_1)(int32_t context, void* param_2) = IntroScreen_Update;
            void* entity_2 = *(context[0xa] + ((data_4 + 1) << 2) - 4);
            context[9] = data_4 + 1;
            context[0xb] = Display_OpenDevice_2(entity_2, IntroScreen_Update, 0);
        }
        else if (context[0xd])
        {
            void** data_7 = context[0xa];
            context[9] = 0;
            int32_t item_c_5 = 0;
            int32_t (* item_10_2)(int32_t context, void* param_2) = IntroScreen_Update;
            void* data_8 = *data_7;
            context[9] = 1;
            context[0xb] = Display_OpenDevice_2(data_8, IntroScreen_Update, 0);
        }
    }

    int32_t result = context[0xb];

    if (result)
        return result;

    Flow_SetState(3);
    return QTask_FindType(context);
}
