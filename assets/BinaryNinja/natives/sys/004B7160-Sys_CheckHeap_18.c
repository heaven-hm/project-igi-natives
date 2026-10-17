// IGI native provenance: Sys_CheckHeap_18 - 0x004B7160 - CFG score 88.9% (PASS; structural only); runtime behavior not verified.
// Evidence: 004B7160-Sys_CheckHeap_18.md; REA/Ghidra static record; catalog: assets/BinaryNinja/IGINatives_VERIFIED.json.
#include "Sys_CheckHeap_18.h"
int32_t Sys_CheckHeap_18()

{
    int32_t flagP;
    int32_t item_4 = flagP;
    Camera_UpdateTransform_5(0x1014);
    int32_t i_6;
    int32_t i_4 = i_6;
    void* return_addr_1;
    return_addr = return_addr_1;
    int32_t dest_val;
    item_4 = dest_val;
    int32_t item_1018[0x100];
    memset(&item_1018, 0, 0x1000);
    int32_t* entry_ebx;

    if (i_4 > 0)
    {
        int32_t i_3 = i_4;
        int32_t* temp_1 = &entry_ebx[2];
        int32_t i;

        do
        {
            int32_t data_2 = *temp_1;
            int24_t item_8_1 = data_2;

            if (!(data_2 & 0x80000000))
            {
                data_2 ^= 0x7fffffff;
                item_8_1 = data_2;
            }

            *temp_1 = data_2;
            uint32_t entity_2 = data_2;
            temp_1 = &temp_1[3];
            (&item_4)[entity_2 - 0x405] = item_1018[entity_2] + 1;
            int32_t entity_4 = 0;
            entity_4 = *(&data_2 + 1);
            int32_t item_c18[0x100];
            (&item_4)[entity_4 - 0x305] = item_c18[entity_4] + 1;
            int32_t entity_6 = 0;
            entity_6 = *(&item_8_1 + 2);
            int32_t item_818[0x200];
            (&item_4)[entity_6 - 0x205] = item_818[entity_6] + 1;
            i = i_3;
            i_3 -= 1;
            (&item_4)[(data_2 >> 0x18) - 0x105] += 1;
        } while (i != 1);
    }

    int32_t (* temp_2)[0x100] = &item_1018;
    int32_t i_2 = 4;
    int32_t i_1;

    do
    {
        int32_t entity_8 = 0;
        int32_t j_1 = 0x100;
        int32_t j;

        do
        {
            int32_t data_6 = entity_8 + *temp_2;
            *temp_2 = entity_8;
            temp_2 = &(*temp_2)[1];
            j = j_1;
            j_1 -= 1;
            entity_8 = data_6;
        } while (j != 1);
        i_1 = i_2;
        i_2 -= 1;
    } while (i_1 != 1);
    int32_t data_9 = i_4 * 0xc + 3;
    data_9 &= 0xfc;
    Camera_UpdateTransform_5(data_9);
    int32_t* source_8 = entry_ebx;
    int32_t* dest_1 = &i_6;
    int32_t* item_18 = &i_6;
    int32_t* item_c = source_8;
    int32_t* item_10 = &i_6;
    int32_t (* temp_3)[0x100] = &item_1018;
    int32_t* arg_4 = nullptr;
    int32_t result_1 = 4;
    int32_t result;
    bool flag_4_1;

    do
    {
        if (i_4 > 0)
        {
            int32_t i_5 = i_4;

            while (true)
            {
                uint32_t data_12 = source_8[2] >> (arg_4 & 0x1f);
                int32_t* entity_12 = &dest_1[(*temp_3)[data_12] * 3];
                int32_t* dest_2 = source_8;
                source_8 = &source_8[3];
                *entity_12 = *dest_2;
                entity_12[1] = dest_2[1];
                entity_12[2] = dest_2[2];
                (*temp_3)[data_12] += 1;
                bool flag_5_1 = i_5 != 1;
                i_5 -= 1;

                if (!flag_5_1)
                    break;

                dest_1 = item_18;
            }

            i_4 = i_6;
            source_8 = item_c;
        }

        dest_1 = source_8;
        source_8 = item_10;
        temp_3 = &temp_3[1];
        result = result_1 - 1;
        flag_4_1 = result_1 != 1;
        item_18 = dest_1;
        item_c = source_8;
        item_10 = dest_1;
        arg_4 = &arg_4[2];
        result_1 = result;
    } while (flag_4_1);
    return result;
}
