// Original IGI.EXE function: HumanAI_EventDispatch (VA 0x0044FC90; static CFG gate PASS, CFG score 1.000).
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
