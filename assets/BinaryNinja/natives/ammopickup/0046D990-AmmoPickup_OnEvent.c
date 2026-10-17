// IGI native provenance: AmmoPickup_OnEvent - 0x0046D990 - CFG score 93.3% (PASS; structural only); runtime behavior not verified.
// Evidence: 0046D990-AmmoPickup_OnEvent.md; REA/Ghidra static record; catalog: assets/BinaryNinja/IGINatives_VERIFIED.json.
#include "AmmoPickup_OnEvent.h"
int32_t AmmoPickup_OnEvent(void* context, int32_t* param_2)

{
    long double fpu7 = *(context + 0x9c);
    long double fpu6 = *(context + 0xa0);
    fpu6 - fpu7;
    long double fpu_val_7_1;

    if (!(*(&((fpu6 < fpu7 ? 1 : 0) << 8 | (FCMP_UO(fpu6, fpu7) ? 1 : 0) << 0xa
            | (fpu6 == fpu7 ? 1 : 0) << 0xe) + 1) & 1))
        fpu_val_7_1 = *(context + 0xa0);
    else
        fpu_val_7_1 = *(context + 0x9c);

    long double fpu_val_6_1 = *(context + 0x98);
    fpu_val_6_1 - fpu_val_7_1;
    long double fpu_val_7_3;

    if (*(&((fpu_val_6_1 < fpu_val_7_1 ? 1 : 0) << 8 | (FCMP_UO(fpu_val_6_1, fpu_val_7_1) ? 1 : 0) << 0xa
        | (fpu_val_6_1 == fpu_val_7_1 ? 1 : 0) << 0xe | 0x3800) + 1) & 0x41)
    {
        long double fpu_val_7_4 = *(context + 0x9c);
        long double fpu_val_6_2 = *(context + 0xa0);
        fpu_val_6_2 - fpu_val_7_4;

        if (!(*(&((fpu_val_6_2 < fpu_val_7_4 ? 1 : 0) << 8 | (FCMP_UO(fpu_val_6_2, fpu_val_7_4) ? 1 : 0) << 0xa
                | (fpu_val_6_2 == fpu_val_7_4 ? 1 : 0) << 0xe) + 1) & 1))
            fpu_val_7_3 = *(context + 0xa0);
        else
            fpu_val_7_3 = *(context + 0x9c);
    }
    else
        fpu_val_7_3 = *(context + 0x98);

    int32_t* data_1 = *(context + 0x6c);
    float item_30 = fpu_val_7_3;
    long double fpu_val_7_6 = Render_ComputeNormals(data_1) * item_30;
    item_30 = fpu_val_7_6;
    long double f0 = 2867.1999999999998;
    fpu_val_7_6 - f0;

    if (*(&((fpu_val_7_6 < f0 ? 1 : 0) << 8 | (FCMP_UO(fpu_val_7_6, f0) ? 1 : 0) << 0xa
        | (fpu_val_7_6 == f0 ? 1 : 0) << 0xe) + 1) & 1)
    {
        strncpy(&item_30, "ffff", 4);
        int32_t item_2c_1 = 0x40a66666;
    }

    double item_20 = *(context + 0x20) - *(param_2 + 8);
    double item_18 = *(context + 0x28) - *(param_2 + 0x10);
    long double fpu_val_7_12 = *(context + 0x30) - *(param_2 + 0x18);
    long double f1 = 0.0;
    fpu_val_7_12 - f1;

    if (*(&((fpu_val_7_12 < f1 ? 1 : 0) << 8 | (FCMP_UO(fpu_val_7_12, f1) ? 1 : 0) << 0xa
            | (fpu_val_7_12 == f1 ? 1 : 0) << 0xe | 0x3800) + 1) & 1)
        fpu_val_7_12 = -(fpu_val_7_12);

    double item_28 = fpu_val_7_12;
    int32_t item_10 = 0;
    int32_t item_c = 0;
    long double fp0_1 = Sys_OpenFileStream_11(&item_20);
    long double f2 = item_30;
    fp0_1 - f2;
    int16_t result = (fp0_1 < f2 ? 1 : 0) << 8 | (FCMP_UO(fp0_1, f2) ? 1 : 0) << 0xa
        | (fp0_1 == f2 ? 1 : 0) << 0xe;

    if (*(&result + 1) & 1)
    {
        long double fpu_val_7_14 = item_28;
        long double f3_1 = 4096.0;
        fpu_val_7_14 - f3_1;
        result = (fpu_val_7_14 < f3_1 ? 1 : 0) << 8 | (FCMP_UO(fpu_val_7_14, f3_1) ? 1 : 0) << 0xa
            | (fpu_val_7_14 == f3_1 ? 1 : 0) << 0xe;

        if (*(&result + 1) & 1)
        {
            int32_t temp_1 = *(context + 0x10c);
            void* entity_1 = *param_2;
            *(&item_28 + 4) = *(context + 0x130);
            uint32_t data_6 = *g_53fe28;
            item_28 = temp_1;
            int32_t temp_2 = 0;
            temp_2 = *(entity_1 + 0x1c);
            int32_t data_9 = *(((temp_2 + data_6 * 0x180) << 2) + &g_a96ae0);

            if (data_9)
                data_9(entity_1, &item_28);

            *(context + 0x109) = 1;
            return StatusMessage_ShowFull(Script_FormatString(), "PICKEDUPAMMO", "STATUSSCREEN:ammo.spr",
                &g_567c74);
        }
    }

    return result;
}
