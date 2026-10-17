// IGI native provenance: Vehicle_UpdateRudder - 0x00430530 - CFG score 100.0% (PASS; structural only); runtime behavior not verified.
// Evidence: 00430530-Vehicle_UpdateRudder.md; REA/Ghidra static record; catalog: assets/BinaryNinja/IGINatives_VERIFIED.json.
#include "Vehicle_UpdateRudder.h"
void** Vehicle_UpdateRudder(void* context, int32_t param_2, float param_3, float param_4)

{
    void* entity_2 = *(context + 0x1b4);
    void* dest_val = *(entity_2 + 0x2d4);
    void* item_c;
    void** result = WeaponType_RegisterType_2(&item_c, context, *(entity_2 + param_2 * 0x18 + 0x14c));
    float item_4;
    long double fpu_val_7_1 = item_4 - *(context + param_2 * 0x38 + 0x1d0);
    long double f0 = 0.0f;
    fpu_val_7_1 - f0;
    result = (fpu_val_7_1 < f0 ? 1 : 0) << 8 | (FCMP_UO(fpu_val_7_1, f0) ? 1 : 0) << 0xa
        | (fpu_val_7_1 == f0 ? 1 : 0) << 0xe | 0x3800;

    if (*(&result + 1) & 1)
        fpu_val_7_1 = -(fpu_val_7_1);

    long double fpu_val_7_2 = fpu_val_7_1 + 0.00100000005f;
    long double fpu_val_6_1 = param_4 + *(dest_val + 0x25c);
    fpu_val_6_1 - fpu_val_7_2;
    result = (fpu_val_6_1 < fpu_val_7_2 ? 1 : 0) << 8 | (FCMP_UO(fpu_val_6_1, fpu_val_7_2) ? 1 : 0) << 0xa
        | (fpu_val_6_1 == fpu_val_7_2 ? 1 : 0) << 0xe;

    if (!(*(&result + 1) & 0x41))
    {
        long double fpu_val_7_4 = item_4 + param_4;
        param_4 = fpu_val_7_4;
        long double fpu_val_7_5 = fpu_val_7_4 - *(dest_val + 0x25c);
        long double f1_1 = *(context + param_2 * 0x38 + 0x1d0);
        fpu_val_7_5 - f1_1;
        result = (fpu_val_7_5 < f1_1 ? 1 : 0) << 8 | (FCMP_UO(fpu_val_7_5, f1_1) ? 1 : 0) << 0xa
            | (fpu_val_7_5 == f1_1 ? 1 : 0) << 0xe | 0x3800;

        if (*(&result + 1) & 0x41)
        {
            long double f2_1 = *(context + param_2 * 0x38 + 0x1d0);
            fpu_val_7_5 - f2_1;
            result = (fpu_val_7_5 < f2_1 ? 1 : 0) << 8 | (FCMP_UO(fpu_val_7_5, f2_1) ? 1 : 0) << 0xa
                | (fpu_val_7_5 == f2_1 ? 1 : 0) << 0xe;

            if (*(&result + 1) & 1)
            {
                long double fpu_val_7_10 = *(context + param_2 * 0x38 + 0x1d0) - param_3;
                *(context + param_2 * 0x38 + 0x1d0) = fpu_val_7_10;
                param_4 = param_4 - *(dest_val + 0x25c);
                long double f4_1 = param_4;
                fpu_val_7_10 - f4_1;
                result = (fpu_val_7_10 < f4_1 ? 1 : 0) << 8
                    | (FCMP_UO(fpu_val_7_10, f4_1) ? 1 : 0) << 0xa
                    | (fpu_val_7_10 == f4_1 ? 1 : 0) << 0xe;

                if (*(&result + 1) & 1)
                {
                    result = param_4;
                    *(context + param_2 * 0x38 + 0x1d0) = result;
                }
            }
        }
        else
        {
            long double fpu_val_7_8 = param_3 + *(context + param_2 * 0x38 + 0x1d0);
            *(context + param_2 * 0x38 + 0x1d0) = fpu_val_7_8;
            param_4 = param_4 - *(dest_val + 0x25c);
            long double f3_1 = param_4;
            fpu_val_7_8 - f3_1;
            result = (fpu_val_7_8 < f3_1 ? 1 : 0) << 8 | (FCMP_UO(fpu_val_7_8, f3_1) ? 1 : 0) << 0xa
                | (fpu_val_7_8 == f3_1 ? 1 : 0) << 0xe;

            if (!(*(&result + 1) & 0x41))
            {
                *(context + param_2 * 0x38 + 0x1d0) = param_4;
                *(context + 0x690) = 1;
                return result;
            }
        }

        *(context + 0x690) = 1;
    }

    return result;
}
