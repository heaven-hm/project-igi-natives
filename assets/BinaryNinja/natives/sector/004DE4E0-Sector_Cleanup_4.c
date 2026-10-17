// IGI native provenance: Sector_Cleanup_4 - 0x004DE4E0 - CFG score 100.0% (PASS; structural only); runtime behavior not verified.
// Evidence: 004DE4E0-Sector_Cleanup_4.md; REA/Ghidra static record; catalog: assets/BinaryNinja/IGINatives_VERIFIED.json.
#include "Sector_Cleanup_4.h"
int32_t Sector_Cleanup_4(void* context)

{
    int32_t* i = *(context + 8);
    int32_t result;

    if (!*i || !i)
        result = g_afa7e0;
    else
    {
        result = g_afa7e0;

        do
        {
            int32_t* source_1 = *i;
            void* entity_4;

            if (!source_1)
                entity_4 = nullptr;
            else
            {
                int32_t entity_1 = *source_1;
                int32_t entity_2 = -(entity_1);
                entity_4 = (entity_2 - entity_2) & source_1;
            }

            *((result << 2) + &g_afa6e0) = entity_4;
            int32_t data_val = result + 1;
            int32_t entity_5 = 0;
            g_afa7e0 = data_val;
            entity_5 = i[7];
            int32_t entity_6 = *((entity_5 << 2) + &g_a970e0);

            if (entity_6)
            {
                entity_6(i);
                data_val = g_afa7e0;
            }

            i = *((data_val << 2) + &g_afa6dc);
            result = data_val - 1;
            g_afa7e0 = result;
        } while (i);
    }

    void* entity_7 = *(context + 0xe8);

    if (entity_7)
    {
        int32_t* i_1 = *(entity_7 + 8);

        if (*i_1 && i_1)
        {
            do
            {
                int32_t* source_2 = *i_1;
                void* entity_11;

                if (!source_2)
                    entity_11 = nullptr;
                else
                {
                    int32_t entity_8 = *source_2;
                    int32_t entity_9 = -(entity_8);
                    entity_11 = (entity_9 - entity_9) & source_2;
                }

                *((result << 2) + &g_afa6e0) = entity_11;
                int32_t data_1 = result + 1;
                int32_t entity_12 = 0;
                g_afa7e0 = data_1;
                entity_12 = i_1[7];
                int32_t entity_13 = *((entity_12 << 2) + &g_a970e0);

                if (entity_13)
                {
                    entity_13(i_1);
                    data_1 = g_afa7e0;
                }

                i_1 = *((data_1 << 2) + &g_afa6dc);
                result = data_1 - 1;
                g_afa7e0 = result;
            } while (i_1);
        }
    }

    if (*(context + 0x6c))
    {
        void* entity_15 = *(context + 0x148);

        if (entity_15)
        {
            int32_t* i_3 = *(entity_15 + 8);

            if (*i_3)
            {
                int32_t* i_4;

                for (int32_t* i_2 = i_3; i_2; i_2 = i_4)
                {
                    int32_t* j = i_2[2];

                    if (*j && j)
                    {
                        do
                        {
                            int32_t* source_3 = *j;
                            void* entity_19;

                            if (!source_3)
                                entity_19 = nullptr;
                            else
                            {
                                int32_t entity_16 = *source_3;
                                int32_t entity_17 = -(entity_16);
                                entity_19 = (entity_17 - entity_17) & source_3;
                            }

                            *((result << 2) + &g_afa6e0) = entity_19;
                            int32_t data_2 = result + 1;
                            int32_t entity_20 = 0;
                            g_afa7e0 = data_2;
                            entity_20 = j[7];
                            int32_t entity_21 = *((entity_20 << 2) + &g_a970e0);

                            if (entity_21)
                            {
                                entity_21(j);
                                data_2 = g_afa7e0;
                            }

                            j = *((data_2 << 2) + &g_afa6dc);
                            result = data_2 - 1;
                            g_afa7e0 = result;
                        } while (j);
                    }

                    void* entity_22 = i_2[0x3a];

                    if (entity_22)
                    {
                        int32_t* j_1 = *(entity_22 + 8);

                        if (*j_1 && j_1)
                        {
                            do
                            {
                                int32_t* source_4 = *j_1;
                                void* entity_26;

                                if (!source_4)
                                    entity_26 = nullptr;
                                else
                                {
                                    int32_t entity_23 = *source_4;
                                    int32_t entity_24 = -(entity_23);
                                    entity_26 = (entity_24 - entity_24) & source_4;
                                }

                                *((result << 2) + &g_afa6e0) = entity_26;
                                int32_t data_3 = result + 1;
                                int32_t entity_27 = 0;
                                g_afa7e0 = data_3;
                                entity_27 = j_1[7];
                                int32_t entity_28 = *((entity_27 << 2) + &g_a970e0);

                                if (entity_28)
                                {
                                    entity_28(j_1);
                                    data_3 = g_afa7e0;
                                }

                                j_1 = *((data_3 << 2) + &g_afa6dc);
                                result = data_3 - 1;
                                g_afa7e0 = result;
                            } while (j_1);
                        }
                    }

                    i_4 = *i_2;

                    if (!i_4)
                        break;

                    if (!*i_4)
                        break;
                }
            }
        }
    }

    return result;
}
