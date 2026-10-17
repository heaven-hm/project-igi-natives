// IGI native provenance: Human_AttachedMovement - 0x00462CF0 - CFG score 88.9% (PASS; structural only); runtime behavior not verified.
// Evidence: 00462CF0-Human_AttachedMovement.md; REA/Ghidra static record; catalog: assets/BinaryNinja/IGINatives_VERIFIED.json.
#include "Human_AttachedMovement.h"
int32_t Human_AttachedMovement(void* context)

{
    void* data_val = *(context + 0x76c);
    long double fpu_val_7_3 = *(data_val + 0x70) * *(context + 0x520) + *(context + 0x524) * *(data_val + 0x7c)
        + *(context + 0x528) * *(data_val + 0x88);
    long double fpu_val_6_7 = *(context + 0x524) * *(data_val + 0x80) + *(data_val + 0x74) * *(context + 0x520)
        + *(data_val + 0x8c) * *(context + 0x528);
    float item_2c = fpu_val_6_7;
    long double fpu_val_6_11 = *(context + 0x524) * *(data_val + 0x84) + *(data_val + 0x78) * *(context + 0x520)
        + *(context + 0x528) * *(data_val + 0x90);
    float item_28 = fpu_val_6_11;
    long double fpu_val_7_4 = fpu_val_7_3 + *(context + 0x770);
    *(context + 0x770) = fpu_val_7_4;
    long double fpu_val_6_13 = item_2c + *(context + 0x778);
    *(context + 0x778) = fpu_val_6_13;
    long double fpu_val_5_9 = item_28 + *(context + 0x780);
    *(context + 0x780) = fpu_val_5_9;
    double item_18 = *(data_val + 0x74) * fpu_val_6_13 + *(data_val + 0x70) * fpu_val_7_4 + *(data_val + 0x78) * fpu_val_5_9;
    double item_10 = *(data_val + 0x84) * fpu_val_5_9 + *(data_val + 0x7c) * fpu_val_7_4 + *(data_val + 0x80) * fpu_val_6_13;
    double item_8 = *(data_val + 0x90) * fpu_val_5_9 + *(data_val + 0x88) * fpu_val_7_4 + *(data_val + 0x8c) * fpu_val_6_13;
    double item_30;
    memcpy(&item_30, &item_18, 0x18);
    item_30 = item_18 + *(data_val + 0x20);
    item_28 = item_28 + *(data_val + 0x28);
    double item_20;
    double item_20_1 = item_20 + *(data_val + 0x30);
    float data_1 = *(context + 0xa0);
    double* item_40 = &item_30;
    void* item_48 = Level_StartMission_4();
    return WorldObject_CommitTransform(item_48, context, item_40, data_1);
}
