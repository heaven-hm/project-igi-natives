// IGI native provenance: Camera_ApplyWideScreen_22 - 0x004AB891 - CFG score 100.0% (PASS; structural only); runtime behavior not verified.
// Evidence: 004AB891-Camera_ApplyWideScreen_22.md; REA/Ghidra static record; catalog: assets/BinaryNinja/IGINatives_VERIFIED.json.
#include "Camera_ApplyWideScreen_22.h"
void* Camera_ApplyWideScreen_22(int32_t context)

{
    int32_t entity_val;
    int32_t item_8 = entity_val;
    int32_t item_c = entity_val;
    void** source_val = g_5466d0;
    void* result;

    while (true)
    {
        int32_t temp_1 = source_val[4];
        int32_t context_1;

        if (temp_1 == 0xffffffff)
            context_1 = context;
        else
        {
            int32_t* dest_1 = source_val[2];
            int32_t* data_6 = ((dest_1 - source_val - 0x18) >> 3 << 0xc) + temp_1;
            int32_t* item_8_1 = data_6;

            if (dest_1 < &source_val[0x806])
            {
                while (true)
                {
                    int32_t entity_2 = *dest_1;
                    context_1 = context;

                    if (entity_2 >= context_1 && dest_1[1] > context_1)
                    {
                        result = Camera_ApplyPostProcess_22(data_6, entity_2, context_1);

                        if (result)
                            break;

                        data_6 = item_8_1;
                        dest_1[1] = context_1;
                    }

                    dest_1 = &dest_1[2];
                    data_6 = &data_6[0x400];
                    item_8_1 = data_6;

                    if (dest_1 >= &source_val[0x806])
                        goto label_4ab907;
                }

                goto label_4ab95c;
            }

            context_1 = context;
        label_4ab907:
            int32_t data_7 = source_val[2];
            dest_1 = &source_val[6];
            int32_t* item_8_2 = source_val[4];

            if (dest_1 < data_7)
            {
                while (true)
                {
                    int32_t data_8 = *dest_1;

                    if (data_8 >= context_1 && dest_1[1] > context_1)
                    {
                        result = Camera_ApplyPostProcess_22(item_8_2, data_8, context_1);

                        if (result)
                            break;

                        dest_1[1] = context_1;
                    }

                    item_8_2 = &item_8_2[0x400];
                    dest_1 = &dest_1[2];

                    if (dest_1 >= data_7)
                        goto label_4ab94d;
                }

            label_4ab95c:
                g_5466d0 = source_val;
                *dest_1 -= context_1;
                source_val[2] = dest_1;
                break;
            }
        }

    label_4ab94d:
        source_val = *source_val;

        if (source_val == g_5466d0)
        {
            void** dest_2 = &g_5446b0;
            int32_t i;
            int32_t dwSize;
            int32_t* context_2;
            int32_t* lpAddress;

            while (true)
            {
                if (dest_2[4] == 0xffffffff || !dest_2[3])
                {
                    dest_2 = *dest_2;

                    if (dest_2 == &g_5446b0)
                    {
                        void** data_17 = Camera_UpdateTransform_22();

                        if (data_17)
                        {
                            void** entity_7 = data_17[4];
                            entity_7[2] = context_1;
                            g_5466d0 = data_17;
                            *entity_7 = entity_7 + context_1 + 8;
                            entity_7[1] = 0xf0 - context_1;
                            data_17[6] -= context_1;
                            return &entity_7[0x40];
                        }
                    }
                    else
                        continue;
                }
                else
                {
                    context_2 = dest_2[3];
                    i = 0;
                    int32_t* data_9 = context_2;
                    lpAddress = ((context_2 - dest_2 - 0x18) >> 3 << 0xc) + dest_2[4];

                    if (*context_2 == 0xffffffff)
                    {
                        while (i < 0x10)
                        {
                            data_9 = &data_9[2];
                            i += 1;

                            if (*data_9 != 0xffffffff)
                                break;
                        }
                    }

                    dwSize = i << 0xc;

                    if (VirtualAlloc(lpAddress, dwSize, MEM_COMMIT, PAGE_READWRITE) == lpAddress)
                        break;
                }

                return nullptr;
            }

            Camera_ApplyBandFilter_26(lpAddress, dwSize, 0);
            int32_t* entity_5 = context_2;

            if (i > 0)
            {
                int32_t* data_12 = &lpAddress[1];
                int32_t i_2 = i;
                int32_t i_1;

                do
                {
                    data_12[0x3d] = 0xff;
                    data_12[-1] = &data_12[1];
                    *data_12 = 0xf0;
                    *entity_5 = 0xf0;
                    entity_5[1] = 0xf1;
                    data_12 = &data_12[0x400];
                    entity_5 = &entity_5[2];
                    i_1 = i_2;
                    i_2 -= 1;
                } while (i_1 != 1);
            }

            g_5466d0 = dest_2;
            bool c_1;

            while (true)
            {
                c_1 = entity_5 < &dest_2[0x806];

                if (!c_1)
                    break;

                if (*entity_5 == 0xffffffff)
                {
                    c_1 = entity_5 < &dest_2[0x806];
                    break;
                }

                entity_5 = &entity_5[2];
            }

            dest_2[3] = (&dest_2[0x806] - &dest_2[0x806]) & entity_5;
            lpAddress[2] = context;
            dest_2[2] = context_2;
            *context_2 -= context;
            lpAddress[1] -= context;
            result = &lpAddress[0x40];
            *lpAddress = lpAddress + context + 8;
            break;
        }
    }

    return result;
}
