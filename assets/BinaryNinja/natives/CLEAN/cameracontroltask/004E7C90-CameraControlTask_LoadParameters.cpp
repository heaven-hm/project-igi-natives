// IGI native provenance: CameraControlTask_LoadParameters - 0x004E7C90 - CFG score 100.0% (PASS; structural only); runtime behavior not verified.
// Evidence: 004E7C90-CameraControlTask_LoadParameters.md; REA/Ghidra static record; catalog: assets/BinaryNinja/IGINatives_VERIFIED.json.
#include "CameraControlTask_LoadParameters.h"
void CameraControlTask_LoadParameters(void* context)

{
    g_a5ebdc = context;
    int32_t* i = *(context + 8);

    if (*i && i)
    {
        int32_t temp_1 = g_afa7e0;

        do
        {
            int32_t* source_1 = *i;
            void* data_4;

            if (!source_1)
                data_4 = nullptr;
            else
            {
                int32_t data_1 = *source_1;
                int32_t data_2 = -(data_1);
                data_4 = (data_2 - data_2) & source_1;
            }

            *((temp_1 << 2) + &g_afa6e0) = data_4;
            int32_t temp_2 = temp_1 + 1;
            int32_t data_5 = 0;
            g_afa7e0 = temp_2;
            data_5 = i[7];
            int32_t data_val = *((data_5 << 2) + &g_a970e0);

            if (data_val)
            {
                data_val(i);
                temp_2 = g_afa7e0;
            }

            i = *((temp_2 << 2) + &g_afa6dc);
            temp_1 = temp_2 - 1;
            g_afa7e0 = temp_1;
        } while (i);
    }

    g_a5ebdc = 0;
    int32_t entity_val = *(context + 0x28);

    if (entity_val)
    {
        int32_t data_6 = *(context + 0x20);
        SoundSys_Update3DPosition_15(entity_val, data_6, data_6 + 0x28);
    }
}
