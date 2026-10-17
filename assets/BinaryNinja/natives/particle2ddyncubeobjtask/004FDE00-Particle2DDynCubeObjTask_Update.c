// Original IGI.EXE function: Particle2DDynCubeObjTask_Update (VA 0x004FDE00; static CFG gate PASS, CFG score 1.000).
#include "Particle2DDynCubeObjTask_Update.h"
int32_t Particle2DDynCubeObjTask_Update(float context, void* param_2)

{
    int32_t* source_val = context;
    context = Script_ParseEnumReal32_30(source_val);
    double item_18[0x3];
    Script_ParseEnumString_30(&item_18, source_val);
    int32_t result = DynObj_LinkDynamicCube_8(*(param_2 + 4), source_val, &item_18, context, 2);
    int32_t* i = source_val[2];

    if (*i && i)
    {
        int32_t entity_1 = g_afa7e0;

        do
        {
            int32_t* temp_1 = *i;
            void* data_4;

            if (!temp_1)
                data_4 = nullptr;
            else
            {
                int32_t data_1 = *temp_1;
                int32_t data_2 = -(data_1);
                data_4 = (data_2 - data_2) & temp_1;
            }

            *((entity_1 << 2) + &g_afa6e0) = data_4;
            g_afa7e0 = entity_1 + 1;
            uint32_t data_6 = DynObj_UpdateDynTree_12();
            int32_t temp_2 = 0;
            temp_2 = i[7];
            result = *(((data_6 * 0x180 + temp_2) << 2) + &g_a96ae0);

            if (result)
                result = result(i, param_2);

            entity_1 = g_afa7e0 - 1;
            g_afa7e0 = entity_1;
            i = *((entity_1 << 2) + &g_afa6e0);
        } while (i);
    }

    return result;
}
