// IGI native provenance: Light_SetLightColor_10 - 0x0052D4B0 - CFG score 80.9% (FAIL; structural only); runtime behavior not verified.
// Evidence: 0052D4B0-Light_SetLightColor_10.md; REA/Ghidra static record; catalog: assets/BinaryNinja/IGINatives_VERIFIED.json.
#include "Light_SetLightColor_10.h"
int32_t Light_SetLightColor_10(int32_t* context, char* param_2, int32_t param_3, int32_t param_4, int32_t param_5, int32_t param_6)

{
    char* context_val = param_2;
    int32_t result = 0;
    *context_val = 0;
    int32_t source_val;

    source_val = param_5 || param_6 ? 1 : 0;

    if (param_4)
    {
        int32_t item_14_1 = param_3;
        int32_t flagP = Light_SampleLightmap_10(context, context_val);

        if (source_val)
        {
            void* dest_1 = &g_54f730;
            int32_t i = 0xffffffff;

            while (i)
            {
                bool flag_2_1 = 0 != *dest_1;
                dest_1 += 1;
                i -= 1;

                if (!flag_2_1)
                    break;
            }

            int32_t entity_2 = ~i;
            char* dest_3 = context_val;
            int32_t i_1 = 0xffffffff;

            while (i_1)
            {
                bool flag_3_1 = 0 != *dest_3;
                dest_3 = &dest_3[1];
                i_1 -= 1;

                if (!flag_3_1)
                    break;
            }

            int32_t source_2;
            int32_t dest_5;
            dest_5 = memcpy(dest_3 - 1, dest_1 - entity_2, entity_2 & 0xfffffffc);
            flagP += 1;
            memcpy(dest_5, source_2, entity_2 & 3);
        }

        char* dest_6 = context_val;
        int32_t i_2 = 0xffffffff;

        while (i_2)
        {
            bool flag_1_1 = 0 != *dest_6;
            dest_6 = &dest_6[1];
            i_2 -= 1;

            if (!flag_1_1)
                break;
        }

        int32_t item_14_2 = param_3;
        char* context_1 = &context_val[~i_2 - 1];
        result = flagP + Light_ComputeDirectionalLight_11(context, context_1);

        if (param_6)
        {
            void* dest_7 = &g_54f730;
            int32_t i_3 = 0xffffffff;

            while (i_3)
            {
                bool flag_5_1 = 0 != *dest_7;
                dest_7 += 1;
                i_3 -= 1;

                if (!flag_5_1)
                    break;
            }

            int32_t entity_10 = ~i_3;
            char* dest_9 = context_1;
            int32_t i_4 = 0xffffffff;

            while (i_4)
            {
                bool flag_6_1 = 0 != *dest_9;
                dest_9 = &dest_9[1];
                i_4 -= 1;

                if (!flag_6_1)
                    break;
            }

            int32_t source_4;
            int32_t dest_11;
            dest_11 = memcpy(dest_9 - 1, dest_7 - entity_10, entity_10 & 0xfffffffc);
            result += 1;
            memcpy(dest_11, source_4, entity_10 & 3);
        }

        char* dest_12 = context_1;
        int32_t i_5 = 0xffffffff;

        while (i_5)
        {
            bool flag_4_1 = 0 != *dest_12;
            dest_12 = &dest_12[1];
            i_5 -= 1;

            if (!flag_4_1)
                break;
        }

        context_val = &context_1[~i_5 - 1];
    }

    if (!param_6)
        return result;

    int32_t saved_edi_1 = param_3;
    return result + Light_RenderLensflare_11(context, context_val);
}
