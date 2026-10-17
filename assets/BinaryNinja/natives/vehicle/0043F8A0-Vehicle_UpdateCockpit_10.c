// IGI native provenance: Vehicle_UpdateCockpit_10 - 0x0043F8A0 - CFG score 100.0% (PASS; structural only); runtime behavior not verified.
// Evidence: 0043F8A0-Vehicle_UpdateCockpit_10.md; REA/Ghidra static record; catalog: assets/BinaryNinja/IGINatives_VERIFIED.json.
#include "Vehicle_UpdateCockpit_10.h"
int32_t Vehicle_UpdateCockpit_10(float context)

{
    float item_28[0xa];
    Vehicle_DeployGear_10(&item_28, context);
    float item_30;
    float item_2c;
    Sys_Atan2UndefinedInOrig(&item_28, &context, &item_2c, &item_30);
    long double fpu7 = context;
    long double f0 = 0.0f;
    fpu7 - f0;
    long double fpu_val_7_1 = context;

    if (*(&((fpu7 < f0 ? 1 : 0) << 8 | (FCMP_UO(fpu7, f0) ? 1 : 0) << 0xa
            | (fpu7 == f0 ? 1 : 0) << 0xe | 0x3800) + 1) & 1)
        fpu_val_7_1 = -(fpu_val_7_1);

    long double f1 = 0.0349065848f;
    fpu_val_7_1 - f1;
    int16_t result = (fpu_val_7_1 < f1 ? 1 : 0) << 8 | (FCMP_UO(fpu_val_7_1, f1) ? 1 : 0) << 0xa
        | (fpu_val_7_1 == f1 ? 1 : 0) << 0xe;

    if (*(&result + 1) & 0x41)
    {
        result = 0;
        return result;
    }

    result = 1;
    return result;
}
