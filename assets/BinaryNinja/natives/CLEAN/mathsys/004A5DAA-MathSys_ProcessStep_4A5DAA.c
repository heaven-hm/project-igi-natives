// IGI native provenance: MathSys_ProcessStep_4A5DAA - 0x004A5DAA - CFG score 100.0% (PASS; structural only); runtime behavior not verified.
// Evidence: 004A5DAA-MathSys_ProcessStep_4A5DAA.md; Binary Ninja/Radare2 CFG record; catalog: assets/BinaryNinja/IGINatives_VERIFIED.json.
#include "MathSys_ProcessStep_4A5DAA.h"

🌐  int32_t __abnormal_termination()

{
    TEB* fsbase;
    struct _EXCEPTION_REGISTRATION_RECORD* ExceptionList = fsbase->NtTib.ExceptionList;

    if (ExceptionList->Handler == MathSys_Invoke7
            && *(ExceptionList + 8) == *(*(ExceptionList + 0xc) + 0xc))
        return 1;

    return 0;
}
