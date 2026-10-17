// IGI native provenance: Glass_Update - 0x00449BA0 - CFG score 100.0% (PASS; structural only); runtime behavior not verified.
// Evidence: 00449BA0-Glass_Update.md; REA/Ghidra static record; catalog: assets/BinaryNinja/IGINatives_VERIFIED.json.
#include "Glass_Update.h"
int32_t Glass_Update(float context, float param_2)

{
    float source_val = context;
    void* entity_val = **(source_val + 0x6c);
    int32_t item_38 = 0;
    void* data_1 = *(*(entity_val + 0xc) + 0xc);
    long double fpu_val_7_3 = *(source_val + 0x78) * *(data_1 + 0x38) + *(source_val + 0x74) * *(data_1 + 0x34)
        + *(data_1 + 0x30) * *(source_val + 0x70);
    long double fpu_val_6_7 = *(source_val + 0x84) * *(data_1 + 0x38) + *(source_val + 0x80) * *(data_1 + 0x34)
        + *(source_val + 0x7c) * *(data_1 + 0x30);
    long double fpu_val_6_11 = *(source_val + 0x90) * *(data_1 + 0x38) + *(source_val + 0x8c) * *(data_1 + 0x34)
        + *(source_val + 0x88) * *(data_1 + 0x30);
    double item_18 = fpu_val_7_3 + *(source_val + 0x20);
    double item_10 = fpu_val_6_7 + *(source_val + 0x28);
    double item_8 = fpu_val_6_11 + *(source_val + 0x30);
    float temp_1 = *(*(*(entity_val + 0xc) + 0xc) + 0x3c);
    context = temp_1;
    float item_44 = source_val;
    long double fp0 = Level_CheckQTaskID_5(param_2, &item_18, temp_1);
    *(source_val + 0x13c) = fp0 + *(source_val + 0x13c);
    long double f0 = 0.0f;
    fp0 - f0;
    int16_t result = (fp0 < f0 ? 1 : 0) << 8 | (FCMP_UO(fp0, f0) ? 1 : 0) << 0xa
        | (fp0 == f0 ? 1 : 0) << 0xe;

    if (!(*(&result + 1) & 0x40))
    {
        result = *(source_val + 0x144);

        if (!result)
        {
            uint32_t entity_2 = *(source_val + 0x6c);
            *(source_val + 0x144) = 1;
            int32_t item_3c_1 = *(param_2 + 0x10);
            return Env_333333333Glassshatte(entity_2, source_val + 0x70, source_val + 0x20, *(param_2 + 4), 409.600006f);
        }
    }

    return result;
}
