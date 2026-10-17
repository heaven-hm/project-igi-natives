// IGI native provenance: SoundSys_PlaySoundSample_19 - 0x004EE3B0 - CFG score 88.9% (PASS; structural only); runtime behavior not verified.
// Evidence: 004EE3B0-SoundSys_PlaySoundSample_19.md; REA/Ghidra static record; catalog: assets/BinaryNinja/IGINatives_VERIFIED.json.
#include "SoundSys_PlaySoundSample_19.h"
int32_t __fastcall SoundSys_PlaySoundSample_19(int16_t* context)

{
    int16_t* item_4 = context;
    int32_t result = SoundSys_StopSoundSample_18();
    int32_t result_1 = result;
    int32_t source_val = 0;

    if (result_1 > 0)
    {
        do
        {
            int16_t* data_val = SoundSys_LoadSoundDef_18(source_val);
            int32_t entity_val = 0;
            int32_t temp_1 = 0;
            entity_val = g_54dc32;
            item_4 = data_val;
            temp_1 = *data_val;
            result = (*(((entity_val * 0x180 + temp_1) << 2) + &g_a96ae0))(0, &item_4);
            source_val += 1;
        } while (source_val < result_1);
    }

    g_a5efd8 = 0;
    return result;
}
