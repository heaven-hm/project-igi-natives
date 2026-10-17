// Original IGI.EXE function: BoneDynCubeObj_LoadParameters (VA 0x005124C0; static CFG gate PASS, CFG score 0.944).
#include "BoneDynCubeObj_LoadParameters.h"
int32_t BoneDynCubeObj_LoadParameters(void* context)

{
    void* item_54 = context;
    void item_4c;
    void* item_50 = Render_SkinBones_13(&item_4c);
    void* item_48;
    void item_44;
    Render_ComputeNormals_12(&item_48, &item_44);
    int32_t result = (*((DynObj_UpdateDynTree_15() << 2) + &g_a94e84))(&item_54);
    void item_40;
    memcpy(&item_40, context + 0x20, 0x18);
    void item_28;
    memcpy(&item_28, context + 0x78, 0x28);
    int32_t* i = *(context + 8);

    if (*i && i)
    {
        int32_t entity_1 = g_afa7e0;

        do
        {
            int32_t* temp_1 = *i;
            void* data_5;

            if (!temp_1)
                data_5 = nullptr;
            else
            {
                int32_t data_2 = *temp_1;
                int32_t data_3 = -(data_2);
                data_5 = (data_3 - data_3) & temp_1;
            }

            *((entity_1 << 2) + &g_afa6e0) = data_5;
            g_afa7e0 = entity_1 + 1;
            uint32_t data_7 = DynObj_FindSymbol_6();
            int32_t data_8 = 0;
            data_8 = i[7];
            result = *(((data_7 * 0x180 + data_8) << 2) + &g_a96ae0);

            if (result)
                result = result(i, &item_40);

            entity_1 = g_afa7e0 - 1;
            g_afa7e0 = entity_1;
            i = *((entity_1 << 2) + &g_afa6e0);
        } while (i);
    }

    return result;
}
