// Original IGI.EXE function: BoneDynCubeObj_Update (VA 0x004D94F0; static CFG gate PASS, CFG score 1.000).
#include "BoneDynCubeObj_Update.h"
void BoneDynCubeObj_Update(int32_t* context, int32_t* param_2)

{
    if (!*param_2)
        DynObj_LinkDynamicCube_8(param_2[1], context, &context[8], context[0x28], param_2[2]);

    int32_t* i = context[2];

    if (!*i || !i)
        return;

    int32_t entity_2 = g_afa7e0;

    do
    {
        int32_t* temp_2 = *i;
        void* data_6;

        if (!temp_2)
            data_6 = nullptr;
        else
        {
            int32_t data_3 = *temp_2;
            int32_t data_4 = -(data_3);
            data_6 = (data_4 - data_4) & temp_2;
        }

        *((entity_2 << 2) + &g_afa6e0) = data_6;
        g_afa7e0 = entity_2 + 1;
        uint32_t data_8 = DynObj_UpdateDynTree_12();
        int32_t temp_3 = 0;
        temp_3 = i[7];
        int32_t data_val = *(((data_8 * 0x180 + temp_3) << 2) + &g_a96ae0);

        if (data_val)
            data_val(i, param_2);

        entity_2 = g_afa7e0 - 1;
        g_afa7e0 = entity_2;
        i = *((entity_2 << 2) + &g_afa6e0);
    } while (i);
}
