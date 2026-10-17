// Original IGI.EXE function: SplineObjSegment_Setup (VA 0x004E4290; static CFG gate PASS, CFG score 1.000).
#include "SplineObjSegment_Setup.h"
int32_t SplineObjSegment_Setup(void* context)

{
    void* item_54 = context;
    void item_4c;
    void* item_50 = Render_SkinBones_13(&item_4c);
    void* item_48;
    void item_44;
    Render_ComputeNormals_12(&item_48, &item_44);
    (*((DynObj_LinkDynamicCube_15() << 2) + &g_a94e84))(&item_54);
    void item_40;
    memcpy(&item_40, context + 0x20, 0x18);
    int32_t* i = *(context + 8);
    int32_t item_28 = 0x3f800000;
    int32_t item_24 = 0;
    int32_t item_20 = 0;
    int32_t item_1c = 0;
    int32_t item_18 = 0x3f800000;
    int32_t item_14 = 0;
    int32_t item_10 = 0;
    int32_t item_c = 0;
    int32_t item_8 = 0x3f800000;
    int32_t item_4 = 0;
    int32_t result = *i;

    if (result && i)
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
