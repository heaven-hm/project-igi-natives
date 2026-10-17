// Original IGI.EXE function: Explosion0_Cleanup (VA 0x00480420; static CFG gate PASS, CFG score 1.000).
#include "Explosion0_Cleanup.h"
int32_t Explosion0_Cleanup(int32_t context)

{
    int32_t* source_val = context;
    int32_t data_val = source_val[8];

    if (data_val <= 0)
        return QTask_FindType(source_val);

    int32_t entity_val = source_val[9];
    int64_t item_8;

    if (data_val == entity_val)
    {
        item_8 = entity_val * 0.100000001f;
        int16_t dest_1 = item_8;
        context = source_val[9];
        long double fpu_val_7_5 = Sys_AllocateMemory_14(Level_SetMission_5()) * 0.200000003f;
        int32_t data_3 = source_val[0x10];
        item_8 = data_3;
        *(&item_8 + 4) = data_3;
        Weapon_EjectShell_9(source_val, 0x1000008, &item_8, 1.0f / context, dest_1, (fpu_val_7_5 + 0.800000012f) * context,
            (Sys_AllocateMemory_14(Level_SetMission_5()) + 1.0f) * 0.100000001f);
    }

    struct status_msg* data_7 = source_val[9];
    int32_t entity_2 = source_val[8];
    long double fpu_val_7_13 = data_7;
    item_8 = fpu_val_7_13 * 0.899999976f;

    if (entity_2 == item_8)
    {
        int32_t entity_3 = source_val[0x10];
        item_8 = entity_3;
        *(&item_8 + 4) = entity_3;
        source_val[0x11] = Weapon_EjectShell_9(source_val, 0x1000010, &item_8, 1.0f / fpu_val_7_13, data_7, 0, 0x3a83126f);
    }

    void* saved_ebx_4 = source_val[0x11];

    if (saved_ebx_4)
    {
        long double fpu_val_7_16 = source_val[8];
        long double fpu_val_6_4 = source_val[9];
        long double fpu_val_6_5 = fpu_val_6_4 * 0.5f;
        fpu_val_7_16 - fpu_val_6_5;
        long double fpu_val_6_9;

        fpu_val_6_9 = *(&((fpu_val_7_16 < fpu_val_6_5 ? 1 : 0) << 8
            | (FCMP_UO(fpu_val_7_16, fpu_val_6_5) ? 1 : 0) << 0xa
            | (fpu_val_7_16 == fpu_val_6_5 ? 1 : 0) << 0xe | 0x3000) + 1) & 0x41 ? fpu_val_7_16 / fpu_val_6_5
            : 1.0f - (fpu_val_7_16 - fpu_val_6_5) / (fpu_val_6_4 * 0.899999976f - fpu_val_6_5);

        void* saved_ebx_2 = saved_ebx_4;
        Script_ParseEnumString_31(saved_ebx_4, fpu_val_6_9 * 0.300000012f);
    }

    int32_t result = source_val[8] - 1;
    source_val[8] = result;
    return result;
}
