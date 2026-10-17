// IGI native provenance: ComputerStartup_Setup - 0x00466C90 - CFG score 100.0% (PASS; structural only); runtime behavior not verified.
// Evidence: 00466C90-ComputerStartup_Setup.md; REA/Ghidra static record; catalog: assets/BinaryNinja/IGINatives_VERIFIED.json.
#include "ComputerStartup_Setup.h"
void ComputerStartup_Setup(void* context)

{
    if (!(*(context + 0x70) & 1))
        return;

    long double fpu_val_7_2 = *(context + 0x40) + 1.0f;
    int32_t entity_1 = *(context + 0x20);
    *(context + 0x40) = fpu_val_7_2;
    long double f0_1 = *(context + (entity_1 << 2) + 0x44);
    fpu_val_7_2 - f0_1;

    if (*(&((fpu_val_7_2 < f0_1 ? 1 : 0) << 8 | (FCMP_UO(fpu_val_7_2, f0_1) ? 1 : 0) << 0xa
            | (fpu_val_7_2 == f0_1 ? 1 : 0) << 0xe) + 1) & 0x41)
        return;

    int32_t data_2 = *(context + (entity_1 << 2) + 0x74);

    if (data_2)
        data_2(*(context + 0x14), entity_1);

    int32_t data_3 = *(context + 0x20);

    if (data_3 < *(context + 0x24) - 1)
    {
        *(context + 0x40) = 0;
        *(context + 0x20) = data_3 + 1;
        return;
    }

    int32_t data_5 = *(context + 0x70);
    data_5 &= 0xfe;
    data_5 |= 2;
    *(context + 0x70) = data_5;
}
