// IGI native provenance: WeatherLightmap_ProcessMISSIONgraphsgra - 0x004FADB0 - CFG score 100.0% (PASS; structural only); runtime behavior not verified.
// Evidence: 004FADB0-WeatherLightmap_ProcessMISSIONgraphsgra.md; Binary Ninja/Radare2 CFG record; catalog: assets/BinaryNinja/IGINatives_VERIFIED.json.
#include "WeatherLightmap_ProcessMISSIONgraphsgra.h"

int32_t WeatherLightmap_ProcessMISSIONgraphsgra(void* arg1)

{
    int32_t* a77248_1 = g_a77248;

    for (int32_t* i = *a77248_1; i; i = *i)
    {
        int32_t* ecx_1 = a77248_1[2];

        if (ecx_1 && *ecx_1 == arg1)
        {
            Qtask_UpdateList(a77248_1[2]);
            Camera_ApplyHandiCam_33(a77248_1);
            Sys_ExecuteBytecode_2(a77248_1);
            break;
        }

        a77248_1 = i;
    }

    int32_t result = *(arg1 + 0x58);
    int32_t base_val = 0;

    if (result > 0)
    {
        do
        {
            void* eax_1 = Script_ExecuteLevelScript_23(arg1, base_val);

            if (eax_1)
            {
                int32_t* source_ptr = eax_1 + 0x13c;
                int32_t i_2 = 0x40;
                int32_t i_1;

                do
                {
                    int32_t* eax_2 = *source_ptr;

                    if (eax_2)
                        Script_ParseEnumInt32_24(eax_2);

                    source_ptr = &source_ptr[1];
                    i_1 = i_2;
                    i_2 -= 1;
                } while (i_1 != 1);
            }

            result = *(arg1 + 0x58);
            base_val += 1;
        } while (base_val < result);
    }

    return result;
}
