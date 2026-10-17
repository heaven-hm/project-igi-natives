// IGI native provenance: QTask_InvokeRestoreDevice - 0x00402240 - CFG score 100.0% (PASS; structural only); runtime behavior not verified.
// Evidence: 00402240-QTask_InvokeRestoreDevice.md; Binary Ninja/Radare2 CFG record; catalog: assets/BinaryNinja/IGINatives_VERIFIED.json.
#include "QTask_InvokeRestoreDevice.h"

int32_t QTask_InvokeRestoreDevice(int32_t arg1)

{
    if (!arg1)
        /* tailcall */
        return Game_TimingBegin();

    /* tailcall */
    return Game_TimingEnd();
}
