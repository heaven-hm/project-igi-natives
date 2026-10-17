// IGI native provenance: GlobalLight_Setup - 0x00528180 - CFG score 100.0% (PASS; structural only); runtime behavior not verified.
// Evidence: 00528180-GlobalLight_Setup.md; REA/Ghidra static record; catalog: assets/BinaryNinja/IGINatives_VERIFIED.json.
#include "GlobalLight_Setup.h"
int32_t GlobalLight_Setup(void* context)

{
    if (*(context + 0x1b4))
    {
        Sys_ExecuteBytecode_9(context + 0x198);
        *(context + 0x1b5) = 1;
        *(context + 0x1b4) = 0;
    }

    if (*(context + 0x1b5))
    {
        Sys_CloseFileStream_9(context + 0x198);
        Sys_CheckHeap_8();
        *(context + 0x1b5) = 0;
    }

    *(context + 0x18c) = 0x7f7fffff;
    *(context + 0x194) = 0xff7fffff;
    *(context + 0x190) = 0xff7fffff;
    int32_t* i_1 = QTask_DeleteTask_2(context, g_a84374);

    for (int32_t* i = i_1; i; i = i_1)
    {
        long double fpu_val_7_1 = i[0x12];
        long double f0_1 = *(context + 0x190);
        fpu_val_7_1 - f0_1;
        i_1 = (fpu_val_7_1 < f0_1 ? 1 : 0) << 8 | (FCMP_UO(fpu_val_7_1, f0_1) ? 1 : 0) << 0xa
            | (fpu_val_7_1 == f0_1 ? 1 : 0) << 0xe;

        if (!(*(&i_1 + 1) & 0x41))
        {
            i_1 = i[0x12];
            *(context + 0x190) = i_1;
        }

        long double fpu_val_7_2 = i[0x12];
        long double f1_1 = *(context + 0x18c);
        fpu_val_7_2 - f1_1;
        i_1 = (fpu_val_7_2 < f1_1 ? 1 : 0) << 8 | (FCMP_UO(fpu_val_7_2, f1_1) ? 1 : 0) << 0xa
            | (fpu_val_7_2 == f1_1 ? 1 : 0) << 0xe;

        if (*(&i_1 + 1) & 1)
            *(context + 0x18c) = i[0x12];

        i_1 = g_a84374;
        i_1 = QTask_TriggerEvent_2(i, i_1);
    }

    return Light_UpdateGlobalLight_6(0.0f);
}
