// IGI native provenance: HumanAI_EventDispatch - 0x0044FC90 - CFG score 100.0% (PASS; structural only); runtime behavior not verified.
// Evidence: 0044FC90-HumanAI_EventDispatch.md; REA/Ghidra static record; catalog: assets/BinaryNinja/IGINatives_VERIFIED.json.
#include "HumanAI_EventDispatch.h"
int32_t HumanAI_EventDispatch(void* context, int32_t param_2, int32_t param_3)

{
    int32_t item_8;
    int32_t* i_2 = &item_8;
    int32_t** item_4 = &i_2;
    g_5bda5c = &i_2;
    g_5bda60 = context + ((param_2 * 3 + 0x1bc) << 2);
    g_5bda64 = param_3;
    g_5bda58 = context;
    void* temp_1 = *(context + 0x3c70);
    char context_val = 0;
    item_8 = 0;
    Qvm_Execute(temp_1);
    int32_t data_2 = Camera_ApplyPostProcess_33(&i_2);

    if (data_2 > 1)
    {
        int32_t data_3 = AI_UpdatePatrol_2(g_5bda58, &i_2);
        data_3 = 1;
        return data_3;
    }

    if (data_2 == 1)
    {
        int32_t* i_1 = i_2;
        int32_t* i = *i_1;

        if (i)
        {
            context_val = 1;

            do
            {
                Camera_ApplyHandiCam_33(i_1);
                data_2 = AI_UpdateSensors(g_5bda58, i_1);
                i_1 = i;
                i = *i;
            } while (i);
        }
    }

    data_2 = context_val;
    return data_2;
}
