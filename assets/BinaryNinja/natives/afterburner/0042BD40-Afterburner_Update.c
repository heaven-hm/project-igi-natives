// IGI native provenance: Afterburner_Update - 0x0042BD40 - CFG score 92.6% (PASS; structural only); runtime behavior not verified.
// Evidence: 0042BD40-Afterburner_Update.md; REA/Ghidra static record; catalog: assets/BinaryNinja/IGINatives_VERIFIED.json.
#include "Afterburner_Update.h"
int32_t** Afterburner_Update(void* context)

{
    int32_t* data_val = Display_CloseDevice_14(0x30);
    data_val[1] = g_bc2364;
    data_val[3] = context;
    data_val[9] = *(context + 0x138) * 255.0f;
    data_val[0xa] = *(context + 0x138) * 255.0f;
    data_val[0xb] = *(context + 0x138) * 255.0f;
    data_val[5] = Render_SkinBones_13(&data_val[6]);
    Render_ComputeNormals_12(&data_val[8], &data_val[7]);
    long double fpu_val_4_3 = g_bcab00 * (*(context + 0x30) - g_bcab18)
        + g_bcaafc * (*(context + 0x28) - g_bcab10)
        + g_bcaaf8 * (*(context + 0x20) - g_bcab08);
    float item_44 = fpu_val_4_3;
    uint32_t data_5;

    if (Display_OpenDevice_18(item_44) >= 1)
        data_5 = Display_OpenDevice_18(item_44);
    else
        data_5 = 1;

    int32_t** result = Display_ClearSurfaces_14(data_5, data_val);
    void item_40;
    memcpy(&item_40, context + 0x20, 0x18);
    void item_28;
    memcpy(&item_28, context + 0x70, 0x28);
    int32_t* i = *(context + 8);

    if (*i && i)
    {
        int32_t entity_1 = g_afa7e0;

        do
        {
            int32_t* temp_1 = *i;
            void* data_9;

            if (!temp_1)
                data_9 = nullptr;
            else
            {
                int32_t data_6 = *temp_1;
                int32_t data_7 = -(data_6);
                data_9 = (data_7 - data_7) & temp_1;
            }

            *((entity_1 << 2) + &g_afa6e0) = data_9;
            g_afa7e0 = entity_1 + 1;
            uint32_t data_11 = DynObj_FindSymbol_6();
            int32_t temp_2 = 0;
            temp_2 = i[7];
            result = *(((data_11 * 0x180 + temp_2) << 2) + &g_a96ae0);

            if (result)
                result = result(i, &item_40);

            entity_1 = g_afa7e0 - 1;
            g_afa7e0 = entity_1;
            i = *((entity_1 << 2) + &g_afa6e0);
        } while (i);
    }

    return result;
}
