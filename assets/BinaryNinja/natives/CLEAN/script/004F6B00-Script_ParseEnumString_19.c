// IGI native provenance: Script_ParseEnumString_19 - 0x004F6B00 - CFG score 66.7% (FAIL; structural only); runtime behavior not verified.
// Evidence: 004F6B00-Script_ParseEnumString_19.md; REA/Ghidra static record; catalog: assets/BinaryNinja/IGINatives_VERIFIED.json.
#include "Script_ParseEnumString_19.h"
void* Script_ParseEnumString_19(void* context)

{
    float data_val = *(context + 0x2c7c);
    long double fpu_val_7_1 = *(context + 0x2c7c) * 3.0f;
    double item_20;
    memcpy(&item_20, context + 0x2c08, 0x18);
    float item_28_1 = data_val * 3.0f;
    int32_t item_38 = 0;
    void* result = context + 0x78;
    long double fpu_val_7_2 = item_20 - fpu_val_7_1;
    bool flag_2_1;

    do
    {
        long double fpu_val_4_1 = item_38;
        int32_t i = 0;
        int32_t i_1 = 0;

        do
        {
            int32_t j = 0;
            int32_t j_1 = 0;

            do
            {
                j += 1;
                result += 0x20;
                *(result - 0x30) = fpu_val_4_1 * *(context + 0x2c7c) + fpu_val_7_2;
                double item_18;
                *(result - 0x28) = i_1 * *(context + 0x2c7c) + item_18 - item_28_1;
                long double fpu_val_2_7 = j_1;
                j_1 = j;
                long double fpu_val_2_8 = fpu_val_2_7 * *(context + 0x2c7c);
                *(result - 0x14) = 1;
                *(result - 0x18) = 0;
                double item_10;
                *(result - 0x20) = fpu_val_2_8 + item_10 - data_val * 3.0f;
            } while (j < 7);

            i += 1;
            i_1 = i;
        } while (i < 7);

        flag_2_1 = item_38 + 1 < 7;
        item_38 += 1;
    } while (flag_2_1);
    return result;
}
