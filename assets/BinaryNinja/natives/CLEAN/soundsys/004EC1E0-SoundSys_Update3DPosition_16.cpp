// IGI native provenance: SoundSys_Update3DPosition_16 - 0x004EC1E0 - CFG score 100.0% (PASS; structural only); runtime behavior not verified.
// Evidence: 004EC1E0-SoundSys_Update3DPosition_16.md; REA/Ghidra static record; catalog: assets/BinaryNinja/IGINatives_VERIFIED.json.
#include "SoundSys_Update3DPosition_16.h"
int32_t SoundSys_Update3DPosition_16(void* context, int32_t param_2)

{
    void* data_val = *(context + 8);
    int32_t context_val = *(context + 0x18);
    int32_t item_4 = context_val;
    (*context)(context, param_2);
    int32_t dest_val = 0;
    *(context + 0x1c) = 0xffffffff;

    if (context_val > 0)
    {
        char* entity_1 = context + 0x24;

        do
        {
            context_val = *entity_1;
            int32_t temp_1 = *(context + 0x20);
            char* temp_2 = temp_1 + (dest_val << 3);
            int32_t* data_4 = *(temp_1 + (dest_val << 3) + 4) + context_val * 0xc;

            if (*data_4)
            {
                int32_t data_5 = data_4[2];

                if ((data_5 & data_val) != data_5)
                    goto label_4ec27a;

                goto label_4ec257;
            }

            if (data_4[2] & data_val)
            {
            label_4ec27a:

                if (context_val)
                {
                    char data_10 = entity_1[1];
                    entity_1[1] = data_10 - 1;

                    if (data_10 == 1)
                    {
                        *entity_1 = 0;
                        entity_1[1] = 0;
                    }
                }
            }
            else
            {
            label_4ec257:
                char data_6 = context_val + 1;
                *entity_1 = data_6;
                context_val = *temp_2;

                if (data_6 != context_val)
                    entity_1[1] = *(*(temp_2 + 4) + data_6 * 0xc + 4);
                else
                {
                    *(context + 0x1c) = dest_val;
                    *entity_1 = 0;
                    entity_1[1] = 0;
                }
            }

            dest_val += 1;
            entity_1 = &entity_1[2];
        } while (dest_val < item_4);
    }

    return (*(context + 0x14))(context, param_2);
}
