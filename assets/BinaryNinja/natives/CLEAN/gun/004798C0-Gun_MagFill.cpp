// IGI native provenance: Gun_MagFill - 0x004798C0 - CFG score 100.0% (PASS; structural only); runtime behavior not verified.
// Evidence: 004798C0-Gun_MagFill.md; REA/Ghidra static record; catalog: assets/BinaryNinja/IGINatives_VERIFIED.json.
#include "Gun_MagFill.h"
char* Gun_MagFill(int32_t* context, char* param_2)

{
    int32_t* source_val = context;
    bool flag_0 = !*param_2;
    void* flagP = source_val[0x4a];
    int32_t* context_val = source_val[0x4b];
    context = nullptr;

    if (!flag_0)
    {
        source_val[0x51] = *(flagP + 0x648);
        return param_2;
    }

    void* dest_val = source_val[5];
    uint32_t data_1 = Weapon_ReloadClip_8();
    int32_t data_2 = 0;
    data_2 = *(dest_val + 0x1c);
    int32_t data_3 = *(((data_1 * 0x180 + data_2) << 2) + &g_a96ae0);

    if (data_3)
        data_3(dest_val, &context);

    int32_t* data_5 = Weapon_UpdateMuzzleFlash_8(context, *context_val);

    if (data_5)
    {
        int32_t entity_2 = data_5[1];

        if (entity_2)
        {
            int32_t dest_1 = source_val[0x51];
            int32_t temp_4 = *(flagP + 0x648);
            int32_t temp_5 = temp_4 - dest_1;

            if (temp_4 != dest_1)
            {
                if (entity_2 >= temp_5)
                {
                    data_5[1] = entity_2 - temp_5;
                    int32_t data_7 = source_val[0x51] + temp_5;
                    source_val[0x51] = data_7;
                    return data_7;
                }

                source_val[0x51] = dest_1 + entity_2;
                data_5[1] = 0;
            }
        }
    }

    return data_5;
}
