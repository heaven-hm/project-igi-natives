// IGI native provenance: Car_DetectionSweep - 0x00489750 - CFG score 100.0% (PASS; structural only); runtime behavior not verified.
// Evidence: 00489750-Car_DetectionSweep.md; REA/Ghidra static record; catalog: assets/BinaryNinja/IGINatives_VERIFIED.json.
#include "Car_DetectionSweep.h"
void* Car_DetectionSweep(void* context, double* param_2, float param_3, int32_t param_4)

{
    int32_t dest_val = **&g_5c8ac0;
    int32_t item_2c = dest_val;
    void* result = Frames_GetUpdateCounter() & 0x80000003;

    if (result < 0)
        result = ((result - 1) | 0xfffffffc) + 1;

    void* context_val = context;

    if (*(context_val + 0xc) == result)
    {
        context = nullptr;

        if (dest_val > 0)
        {
            int32_t* item_30_1 = 8;
            int32_t* flagP1 = context_val + 0x30;

            do
            {
                void* source_1 = *(item_30_1 + g_5c8ac0);

                if (source_1 != param_3)
                {
                    uint32_t data_6 = FX_ExplosionSpawn_13();
                    int32_t entity_2 = 0;
                    entity_2 = *(source_1 + 0x1c);
                    int32_t item_28;
                    (*(((data_6 * 0x180 + entity_2) << 2) + &g_a96ae0))(source_1, &item_28);
                    int16_t item_4;

                    if (!*(&item_4 + 1) || !(item_28 & *(context_val + 0x14)))
                    {
                    label_489893:

                        if (*(flagP1 + 0x2a))
                            FX_FireBallUpdate_12(flagP1);
                    }
                    else
                    {
                        int32_t data_11 = *(context_val + 0x10);
                        int32_t item_8;
                        void* dest_1;

                        if (item_8 != param_4)
                        {
                            if (!(data_11 & 0xc))
                                goto label_489893;

                            if (item_4)
                            {
                                if (!(data_11 & 4))
                                    goto label_489893;

                                goto label_489838;
                            }

                            if (!(data_11 & 8))
                                goto label_489893;

                        label_489838:
                            dest_1 = context_val + 0x18;
                            goto label_489840;
                        }

                        if (!(data_11 & 3))
                            goto label_489893;

                        if (item_4)
                        {
                            if (!(data_11 & 1))
                                goto label_489893;

                            dest_1 = context_val + 0x24;
                            goto label_489840;
                        }

                        if (!(data_11 & 2))
                            goto label_489893;

                        dest_1 = context_val + 0x24;
                    label_489840:

                        if (!*(flagP1 + 0x2a))
                            FX_FragmentSimulate_12(context_val, dest_1, source_1, context);
                        else if (*flagP1[2] != source_1)
                        {
                            FX_FireBallUpdate_12(flagP1);
                            FX_FragmentSimulate_12(context_val, dest_1, source_1, context);
                        }

                        double item_20[0x3];
                        AI_TestCandidate(context_val, flagP1, &item_20, param_2, param_3);
                        dest_val = item_2c;
                    }
                }
                else if (*(flagP1 + 0x2a))
                    FX_FireBallUpdate_12(flagP1);

                result = context + 1;
                flagP1 = &flagP1[0xc];
                context = result;
                item_30_1 = &item_30_1[1];
            } while (result < dest_val);
        }
    }

    return result;
}
