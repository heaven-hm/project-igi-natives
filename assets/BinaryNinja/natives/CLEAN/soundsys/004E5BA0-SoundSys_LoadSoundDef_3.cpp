// IGI native provenance: SoundSys_LoadSoundDef_3 - 0x004E5BA0 - CFG score 100.0% (PASS; structural only); runtime behavior not verified.
// Evidence: 004E5BA0-SoundSys_LoadSoundDef_3.md; REA/Ghidra static record; catalog: assets/BinaryNinja/IGINatives_VERIFIED.json.
#include "SoundSys_LoadSoundDef_3.h"
int32_t SoundSys_LoadSoundDef_3(void* context, float param_2, float param_3, float param_4, float param_5)

{
    int32_t dest_val = param_2;
    int32_t source_val = *(context + 8);
    int32_t data_val = param_3;
    int32_t temp_2 = param_2 + param_4 - dest_val + 1;
    int32_t entity_2 = param_3 + param_5 - data_val + 1;

    if (dest_val < source_val)
    {
        if (dest_val >= 0)
            goto label_4e5bfc;

        temp_2 += dest_val;

        if (temp_2 > 0)
        {
            dest_val = 0;
        label_4e5bfc:

            if (data_val < source_val)
            {
                if (data_val >= 0)
                    goto label_4e5c11;

                entity_2 += data_val;

                if (entity_2 > 0)
                {
                    data_val = 0;
                label_4e5c11:

                    if (temp_2 + dest_val > source_val)
                        temp_2 = source_val - dest_val;

                    if (entity_2 + data_val > source_val)
                        entity_2 = source_val - data_val;

                    float entity_3 = entity_2 + data_val;
                    float source_2 = data_val;
                    param_2 = source_2;
                    param_3 = entity_3;

                    if (data_val < entity_3)
                    {
                        int32_t temp_4 = temp_2 + dest_val;

                        do
                        {
                            int32_t data_1 = dest_val;

                            if (dest_val < temp_4)
                            {
                                do
                                {
                                    if (*((((data_1 & 0xfffffff8) + (source_2 << (*(context + 4) & 0x1f)))
                                            >> 3) + context + 0xc) >> (data_1 & 7) & 1)
                                        return 1;

                                    data_1 += 1;
                                } while (data_1 < temp_4);

                                source_2 = param_2;
                                entity_3 = param_3;
                            }

                            source_2 += 1;
                            param_2 = source_2;
                        } while (source_2 < entity_3);
                    }
                }
            }
        }
    }

    return 0;
}
