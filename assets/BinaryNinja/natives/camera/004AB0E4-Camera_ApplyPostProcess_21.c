// IGI native provenance: Camera_ApplyPostProcess_21 - 0x004AB0E4 - CFG score 100.0% (PASS; structural only); runtime behavior not verified.
// Evidence: 004AB0E4-Camera_ApplyPostProcess_21.md; REA/Ghidra static record; catalog: assets/BinaryNinja/IGINatives_VERIFIED.json.
#include "Camera_ApplyPostProcess_21.h"
void* Camera_ApplyPostProcess_21(int32_t* context)

{
    int32_t* temp_val = g_c321f8;
    void* dest_val = &temp_val[g_c321f4 * 5];
    void* entity_1 = (context + 0x17) & 0xfffffff0;
    uint32_t item_10;
    uint32_t item_c;
    uint32_t source_val;

    if ((entity_1 >> 4) - 1 >= 0x20)
    {
        source_val = 0;
        item_10 = 0;
        item_c = 0xffffffff >> ((((entity_1 >> 4) - 1) - 0x20) & 0x1f);
    }
    else
    {
        source_val = 0xffffffff >> (((entity_1 >> 4) - 1) & 0x1f);
        item_c = 0xffffffff;
        item_10 = source_val;
    }

    int32_t* data_4 = g_c321ec;
    int32_t* context_val = data_4;
    context = context_val;

    if (context_val < dest_val)
    {
        while (!((context_val[1] & item_c) | (*context_val & source_val)))
        {
            context_val = &context_val[5];
            context = context_val;

            if (context_val >= dest_val)
                break;
        }
    }

    if (context_val == dest_val)
    {
        context_val = temp_val;
        bool flag_4_1;

        while (true)
        {
            flag_4_1 = context_val != data_4;
            context = context_val;

            if (context_val >= data_4)
                break;

            if ((context_val[1] & item_c) | (*context_val & source_val))
            {
                flag_4_1 = context_val != data_4;
                break;
            }

            context_val = &context_val[5];
        }

        if (!flag_4_1)
        {
            bool flag_5_1;

            while (true)
            {
                flag_5_1 = context_val != dest_val;

                if (context_val >= dest_val)
                    break;

                if (context_val[2])
                {
                    flag_5_1 = context_val != dest_val;
                    break;
                }

                context_val = &context_val[5];
                context = context_val;
            }

            if (!flag_5_1)
            {
                context_val = temp_val;
                bool flag_7_1;

                while (true)
                {
                    flag_7_1 = context_val != data_4;
                    context = context_val;

                    if (context_val >= data_4)
                        break;

                    if (context_val[2])
                    {
                        flag_7_1 = context_val != data_4;
                        break;
                    }

                    context_val = &context_val[5];
                }

                if (!flag_7_1)
                {
                    context_val = Camera_UpdateViewCone_21();
                    context = context_val;

                    if (!context_val)
                        return nullptr;
                }
            }

            *context_val[4] = Camera_ResetMatrix_21(context_val);

            if (*context_val[4] == 0xffffffff)
                return nullptr;
        }
    }

    g_c321ec = context_val;
    int32_t* data_8 = context_val[4];
    int32_t temp_1 = *data_8;
    int32_t item_8_1 = temp_1;

    if (temp_1 == 0xffffffff || !((data_8[temp_1 + 0x31] & item_c) | (data_8[temp_1 + 0x11] & source_val)))
    {
        item_8_1 = 0;
        void* entity_15 = &data_8[0x11];
        source_val = item_10;

        if (!((data_8[0x31] & item_c) | (data_8[0x11] & item_10)))
        {
            int32_t temp_6;

            do
            {
                item_8_1 += 1;
                temp_6 = *(entity_15 + 0x84) & item_c;
                entity_15 += 4;
            } while (!(temp_6 | (source_val & *entity_15)));
        }

        temp_1 = item_8_1;
    }

    int32_t dest_9 = 0;
    int32_t i = data_8[temp_1 + 0x11] & source_val;

    if (!i)
    {
        i = data_8[temp_1 + 0x31] & item_c;
        dest_9 = 0x20;
    }

    while (i >= 0)
    {
        i <<= 1;
        dest_9 += 1;
    }

    int32_t* temp_8 = data_8[temp_1 * 0x81 + 0x51 + dest_9 * 2 + 1];
    void* entity_23 = *temp_8 - entity_1;
    int32_t source_5 = (entity_23 >> 4) - 1;

    if (source_5 > 0x3f)
        source_5 = 0x3f;

    if (source_5 == dest_9)
    {
    label_4ab39b:

        if (entity_23)
        {
            *temp_8 = entity_23;
            *(entity_23 + temp_8 - 4) = entity_23;
        }
    }
    else
    {
        if (temp_8[1] == temp_8[2])
        {
            if (dest_9 >= 0x20)
            {
                uint32_t context_5 = ~(0x80000000 >> ((dest_9 - 0x20) & 0x1f));
                data_8[item_8_1 + 0x31] &= context_5;
                char f1_1 = *(data_8 + dest_9 + 4);
                *(data_8 + dest_9 + 4) -= 1;

                if (f1_1 != 1)
                    context_val = context;
                else
                {
                    context_val = context;
                    context_val[1] &= context_5;
                }
            }
            else
            {
                uint32_t context_2 = ~(0x80000000 >> (dest_9 & 0x1f));
                data_8[item_8_1 + 0x11] &= context_2;
                char f2_1 = *(data_8 + dest_9 + 4);
                *(data_8 + dest_9 + 4) -= 1;

                if (f2_1 != 1)
                    context_val = context;
                else
                {
                    context_val = context;
                    *context_val &= context_2;
                }
            }
        }

        *(temp_8[2] + 4) = temp_8[1];
        *(temp_8[1] + 8) = temp_8[2];

        if (entity_23)
        {
            void* entity_35 = &data_8[temp_1 * 0x81 + 0x51 + source_5 * 2];
            temp_8[1] = data_8[temp_1 * 0x81 + 0x51 + source_5 * 2 + 1];
            temp_8[2] = entity_35;
            *(entity_35 + 4) = temp_8;
            *(temp_8[1] + 8) = temp_8;

            if (temp_8[1] == temp_8[2])
            {
                char entity_38 = *(source_5 + data_8 + 4);
                *(&context + 3) = entity_38;

                if (source_5 >= 0x20)
                {
                    *(source_5 + data_8 + 4) = entity_38 + 1;

                    if (!*(&context + 3))
                        context_val[1] |= 0x80000000 >> ((source_5 - 0x20) & 0x1f);

                    data_8[item_8_1 + 0x31] |= 0x80000000 >> ((source_5 - 0x20) & 0x1f);
                }
                else
                {
                    *(source_5 + data_8 + 4) = entity_38 + 1;

                    if (!*(&context + 3))
                        *context_val |= 0x80000000 >> (source_5 & 0x1f);

                    data_8[item_8_1 + 0x11] |= 0x80000000 >> (source_5 & 0x1f);
                }
            }

            goto label_4ab39b;
        }
    }

    void** temp_9 = temp_8 + entity_23;
    *temp_9 = entity_1 + 1;
    *(temp_9 + entity_1 - 4) = entity_1 + 1;
    int32_t entity_46 = data_8[temp_1 * 0x81 + 0x51];
    data_8[temp_1 * 0x81 + 0x51] = entity_46 + 1;

    if (!entity_46 && context_val == g_c321f0 && item_8_1 == g_c321e8)
        g_c321f0 = 0;

    *data_8 = item_8_1;
    return &temp_9[1];
}
