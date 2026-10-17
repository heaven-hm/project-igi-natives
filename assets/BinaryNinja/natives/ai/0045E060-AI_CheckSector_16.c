// IGI native provenance: AI_CheckSector_16 - 0x0045E060 - CFG score 95.8% (PASS; structural only); runtime behavior not verified.
// Evidence: 0045E060-AI_CheckSector_16.md; REA/Ghidra static record; catalog: assets/BinaryNinja/IGINatives_VERIFIED.json.
#include "AI_CheckSector_16.h"
int32_t AI_CheckSector_16(int32_t context)

{
    void* data_val = Config_GetActivePlayerProfileRecord();
    int32_t* source_val = context;
    memset(source_val, 0, 0xa0);
    int32_t dest_1 = g_bc210c;
    *source_val = g_bc20f4;
    int32_t item_4 = 0;
    source_val[1] = g_bc20f8;
    int32_t item_4_1 = 0;
    source_val[2] = (dest_1 & 1);
    int32_t item_4_2 = 0;
    source_val[3] = (dest_1 & 2);
    int32_t item_4_3 = 0;
    source_val[4] = (dest_1 & 4);
    source_val[5] = (dest_1 & 8);

    if (*(data_val + 0x538))
        source_val[1] = -(source_val[1]);

    long double fpu_val_7_7 = *(data_val + 0x53c);
    long double f0 = 0.0500000007f;
    fpu_val_7_7 - f0;

    if (!(*(&((fpu_val_7_7 < f0 ? 1 : 0) << 8 | (FCMP_UO(fpu_val_7_7, f0) ? 1 : 0) << 0xa
        | (fpu_val_7_7 == f0 ? 1 : 0) << 0xe | 0x3800) + 1) & 1))
    {
        long double f1_1 = 1.0f;
        fpu_val_7_7 - f1_1;

        if (!(*(&((fpu_val_7_7 < f1_1 ? 1 : 0) << 8 | (FCMP_UO(fpu_val_7_7, f1_1) ? 1 : 0) << 0xa
                | (fpu_val_7_7 == f1_1 ? 1 : 0) << 0xe | 0x3800) + 1) & 0x41))
            fpu_val_7_7 = 1.0f;
    }
    else
        fpu_val_7_7 = 0.0500000007f;

    int32_t item_4_4 = 0;
    *source_val = fpu_val_7_7 * *source_val;
    source_val[1] = fpu_val_7_7 * source_val[1];
    int32_t item_4_5 = 0;
    source_val[6] = (dest_1 & 0x100);
    int32_t item_4_6 = 0;
    source_val[7] = (dest_1 & 0x4000);
    int32_t item_4_7 = 0;
    source_val[8] = (dest_1 & 0x200);
    int32_t item_4_8 = 0;
    source_val[9] = (dest_1 & 0x400);
    int32_t item_4_9 = 0;
    source_val[0xa] = (dest_1 & 0x800);
    int32_t item_4_10 = 0;
    source_val[0xb] = (dest_1 & 0x1000);
    source_val[0xc] = (dest_1 & 0x8000);
    int32_t item_4_11 = 0;
    source_val[0xd] = 0xffffffff;
    int32_t item_4_12 = 0;
    source_val[0xe] = (dest_1 & 0x100000);
    int32_t item_4_13 = 0;
    source_val[0xf] = (dest_1 & 0x200000);
    int32_t item_4_14 = 0;
    source_val[0x14] = (dest_1 & 0x40000);
    int32_t item_4_15 = 0;
    source_val[0x15] = (dest_1 & 0x2000);
    source_val[0x16] = (dest_1 & 0x80000);
    int32_t item_4_16 = 0;
    int32_t item_4_17 = 0;
    source_val[0x17] = (dest_1 & &__dos_header);
    int32_t item_4_18 = 0;
    source_val[0x18] = (dest_1 & 0x800000);
    int32_t item_4_19 = 0;
    source_val[0x19] = (dest_1 & 0x1000000);
    int32_t item_4_20 = 0;
    source_val[0x1a] = (dest_1 & 0x2000000);
    int32_t item_4_21 = 0;
    source_val[0x1b] = (dest_1 & 0x4000000);
    int32_t item_4_22 = 0;
    source_val[0x1c] = (dest_1 & 0x8000000);
    int32_t item_4_23 = 0;
    source_val[0x1d] = (dest_1 & 0x10000000);
    int32_t item_4_24 = 0;
    source_val[0x1e] = (dest_1 & 0x20000000);
    int32_t item_4_25 = 0;
    source_val[0x1f] = (dest_1 & 0x40000000);
    int32_t item_4_26 = 0;
    source_val[0x22] = (dest_1 & 0x10000);
    source_val[0x20] = (dest_1 & 0x20000);
    source_val[0x10] = WeaponType_GetConfig_2(0x4e);
    source_val[0x11] = WeaponType_GetConfig_2(0x4a);
    source_val[0x12] = DEBUG_KEYSENABLEINVALID(0x9c);
    source_val[0x13] = DEBUG_KEYSENABLEINVALID(0x37);
    int32_t result = DEBUG_KEYSENABLEINVALID(0x21);
    source_val[0x21] = result;
    return result;
}
