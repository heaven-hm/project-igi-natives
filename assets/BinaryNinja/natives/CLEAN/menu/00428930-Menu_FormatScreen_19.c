// IGI native provenance: Menu_FormatScreen_19 - 0x00428930 - CFG score 88.9% (PASS; structural only); runtime behavior not verified.
// Evidence: 00428930-Menu_FormatScreen_19.md; REA/Ghidra static record; catalog: assets/BinaryNinja/IGINatives_VERIFIED.json.
#include "Menu_FormatScreen_19.h"
int32_t Menu_FormatScreen_19(void* context)

{
    long double fpu_val_7_1 = *(context + 0x20) - *(context + 0x828);
    int32_t item_54 = 0x40c80000;
    double item_30 = *(context + 0x28) - *(context + 0x830);
    long double fpu_val_6_3 = *(context + 0x30) - *(context + 0x838);
    double item_28 = fpu_val_6_3;
    long double fpu_val_6_6 =
        fpu_val_6_3 * *(context + 0x850) + item_30 * *(context + 0x848) + fpu_val_7_1 * *(context + 0x840);
    double item_40 = fpu_val_6_6;
    double item_38 = fpu_val_6_6 * fpu_val_7_1;
    double item_30_1 = item_40 * item_30;
    double item_28_1 = item_40 * item_28;
    double item_20;
    memcpy(&item_20, &item_38, 0x18);
    Sys_AllocateMemory_11(&item_20, 0.0f);
    item_38 = item_20 + item_38;
    double item_18;
    double item_30_2 = item_18 + item_30_1;
    double item_10;
    double item_28_2 = item_10 + item_28_1;
    long double fpu0;
    long double fpu1;
    return Menu_RequestScreen_20(fpu0, fpu1, context, &item_38);
}
