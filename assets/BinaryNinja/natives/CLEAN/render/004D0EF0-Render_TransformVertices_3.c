// IGI native provenance: Render_TransformVertices_3 - 0x004D0EF0 - CFG score 100.0% (PASS; structural only); runtime behavior not verified.
// Evidence: 004D0EF0-Render_TransformVertices_3.md; REA/Ghidra static record; catalog: assets/BinaryNinja/IGINatives_VERIFIED.json.
#include "Render_TransformVertices_3.h"
void** Render_TransformVertices_3()

{
    g_b16c98 = Mem_Alloc(0x3e80, 4);
    int32_t data_1 = 0;
    int32_t item_10 = 0;

    while (true)
    {
        int32_t entity_1 = 0;
        int32_t item_18_1 = 0xffffffff;
        int32_t temp_4 = data_1 & 3;
        bool flag_6_1;

        do
        {
            int32_t i_7 = 0xffffffff;
            int32_t i_5 = 1;
            bool flag_5_1;

            do
            {
                int32_t i_6 = 0xffffffff;

                for (int32_t i = 1; i > 0xfffffffe; )
                {
                    int32_t i_4 = i_6;
                    int32_t i_8 = i_7;

                    if (data_1 & 4)
                        i_4 = i;

                    if (temp_4 == 1)
                    {
                        i_8 = i_4;
                        i_4 = i_5;
                    }
                    else if (temp_4 == 2)
                    {
                        i_8 = i_5;
                        i_4 = -(i_4);
                    }
                    else if (temp_4 == 3)
                    {
                        int32_t i_9 = i_4;
                        i_4 = i_7;
                        i_8 = -(i_9);
                    }

                    int32_t temp_7 = 0;

                    if (i_4 < 0)
                        temp_7 = 1;

                    if (i_4 > 0)
                        temp_7 |= 2;

                    bool flag_1_1 = i_8 <= 0;

                    if (i_8 < 0)
                    {
                        temp_7 |= 4;
                        flag_1_1 = i_8 <= 0;
                    }

                    if (!flag_1_1)
                        temp_7 |= 8;

                    bool flag_2_1 = item_18_1 <= 0;

                    if (item_18_1 < 0)
                    {
                        temp_7 |= 0x10;
                        flag_2_1 = item_18_1 <= 0;
                    }

                    if (!flag_2_1)
                        temp_7 |= 0x20;

                    int32_t data_4 = 1 << (entity_1 & 0x1f);
                    entity_1 += 1;
                    i_6 += 1;
                    i -= 1;
                    *((((data_1 << 6) + temp_7) << 2) + &g_a50ffc) = data_4;
                }

                i_7 += 1;
                flag_5_1 = i_5 - 1 > 0xfffffffe;
                i_5 -= 1;
            } while (flag_5_1);
            flag_6_1 = item_18_1 + 1 < 2;
            item_18_1 += 1;
        } while (flag_6_1);
        bool flag_7_1 = item_10 + 1 < 8;
        item_10 += 1;

        if (!flag_7_1)
            break;

        data_1 = item_10;
    }

    int32_t entity_2 = 0;

    for (char* i_1 = &g_b12be0; i_1 < &g_b12c20; )
    {
        for (int32_t j = 0; j < 8; j += 1)
        {
            char temp_8;
            char context_1;

            if (i_1 >= 0xb12c00)
            {
                temp_8 = (entity_2 - j) & 3;
                context_1 = ~j;
            }
            else
            {
                context_1 = j;
                temp_8 = (j + entity_2) & 3;
            }

            i_1[j] = temp_8 + (context_1 & 4);
        }

        i_1 = &i_1[8];
        entity_2 += 1;
    }

    int32_t dest_1 = 0;

    for (int32_t i_2 = 0xb12340; i_2 < &g_b12b40; )
    {
        for (int32_t j_1 = 0; j_1 < 0x100; j_1 += 1)
        {
            char* source_3 = nullptr;

            for (int32_t k = 0; k < 8; k += 1)
            {
                if (j_1 & 1 << (k & 0x1f))
                    source_3 |= 1 << (*(((dest_1 + k) << 2) + &g_548060) & 0x1f);
            }

            source_3[i_2] = j_1;
        }

        i_2 += 0x100;
        dest_1 += 8;
    }

    void* temp_9 = nullptr;
    int32_t item_18_2 = 0;
    bool flag_9_1;

    do
    {
        int32_t item_14_1 = 0;
        bool flag_8_1;

        do
        {
            for (int32_t i_3 = 0; i_3 < 3; i_3 += 1)
            {
                *(temp_9 + 0xa4ef14) = 0;

                for (int32_t j_2 = 0; j_2 < 8; j_2 += 1)
                {
                    char data_17;

                    data_17 = (i_3 == 1 || i_3 >> 1 == (j_2 & 1))
                        && (item_14_1 == 1 || item_14_1 == (j_2 & 2))
                        && (item_18_2 == 1 || item_18_2 * 2 == (j_2 & 4)) ? 1 : 0;

                    *(temp_9 + 0xa4ef14) |= data_17 << (j_2 & 0x1f);
                }

                if (!(i_3 & 1) && !(item_14_1 & 1) && !(item_18_2 & 1))
                    *(temp_9 + 0xa4ef14) = 0;

                temp_9 += 1;
            }

            flag_8_1 = item_14_1 + 1 < 3;
            item_14_1 += 1;
        } while (flag_8_1);
        flag_9_1 = item_18_2 + 1 < 3;
        item_18_2 += 1;
    } while (flag_9_1);
    QTask_CleanupEvents(0, 0xf);
    QTask_CleanupEvents(0, 0x10);
    QTask_CleanupEvents(0, 0x11);
    QTask_CleanupEvents(0, 0x12);
    QTask_CleanupTypes_2(0xf, 7);
    QTask_CleanupTypes_2(0x10, 8);
    g_548441 = QTask_UnableToAllocateEvent(0x181);
    g_548440 = QTask_UnableToAllocateEvent(0x181);
    Render_NoMoreQcubeCallbacks(1);
    return Render_CallbackNotFound(1);
}
