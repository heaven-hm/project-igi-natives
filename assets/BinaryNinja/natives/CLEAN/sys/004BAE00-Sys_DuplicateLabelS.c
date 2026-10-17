// IGI native provenance: Sys_DuplicateLabelS - 0x004BAE00 - CFG score 85.2% (PASS; structural only); runtime behavior not verified.
// Evidence: 004BAE00-Sys_DuplicateLabelS.md; REA/Ghidra static record; catalog: assets/BinaryNinja/IGINatives_VERIFIED.json.
#include "Sys_DuplicateLabelS.h"
int32_t* Sys_DuplicateLabelS(void* context, int32_t param_2)

{
    int32_t dest_val = param_2;
    int32_t i = 0xffffffff;

    while (i)
    {
        bool flag_0_1 = 0 != *dest_val;
        dest_val += 1;
        i -= 1;

        if (!flag_0_1)
            break;
    }

    int32_t entity_val = ~i;
    int32_t* item_84 = nullptr;
    void item_80;
    int32_t source_1;
    int32_t dest_2;
    dest_2 = memcpy(&item_80, dest_val - entity_val, entity_val & 0xfffffffc);
    memcpy(dest_2, source_1, entity_val & 3);
    void* dest_3 = &item_80;
    int32_t i_1 = 0xffffffff;

    while (i_1)
    {
        bool flag_1_1 = 0 != *dest_3;
        dest_3 += 1;
        i_1 -= 1;

        if (!flag_1_1)
            break;
    }

    int32_t saved_target;

    if (*((&item_84 + 3) + ~i_1 - 1) == 0x3a)
        *(&saved_target + ~i_1 - 1 + 0xb) = 0;
    DynObj_CreateMagicObject_2(*(context + 0x1c), &item_84, &item_80);
    int32_t* data_3 = item_84;

    if (data_3)
    {
        if (!data_3[5])
            return data_3;

        *(context + 4) = 1;
        void* saved_ebp_1 = &item_80;
        void* item_98_1 = context;
        Sys_FreeMemory_26("Duplicate label: '%s'");
        return 0;
    }

    int32_t* data_5 = Mem_Alloc(0x9c, 4);
    Symbol_CheckRegister(*(context + 0x1c), &item_80, data_5);
    data_5[1] = 0;
    *data_5 = 0;
    Camera_SetFieldOfView_33(context + 0x20, data_5);
    void* dest_4 = &item_80;
    int32_t i_2 = 0xffffffff;
    data_5[5] = 0;

    while (i_2)
    {
        bool flag_2_1 = 0 != *dest_4;
        dest_4 += 1;
        i_2 -= 1;

        if (!flag_2_1)
            break;
    }

    int32_t entity_8 = ~i_2;
    int32_t source_5;
    int32_t dest_7;
    dest_7 = memcpy(&data_5[7], dest_4 - entity_8, entity_8 & 0xfffffffc);
    memcpy(dest_7, source_5, entity_8 & 3);
    data_5[3] = 0;
    data_5[4] = &data_5[2];
    data_5[2] = &data_5[3];
    return data_5;
}
