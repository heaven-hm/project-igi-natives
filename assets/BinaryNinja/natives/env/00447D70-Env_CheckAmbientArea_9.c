// IGI native provenance: Env_CheckAmbientArea_9 - 0x00447D70 - CFG score 100.0% (PASS; structural only); runtime behavior not verified.
// Evidence: 00447D70-Env_CheckAmbientArea_9.md; REA/Ghidra static record; catalog: assets/BinaryNinja/IGINatives_VERIFIED.json.
#include "Env_CheckAmbientArea_9.h"
int32_t Env_CheckAmbientArea_9(void* context)

{
    void* data_2 = context;

    if (*(data_2 + 0x199))
        return 0;

    if (*(data_2 + 0x19a))
        return 1;

    data_2 = *(data_2 + 0x290);
    char f0 = data_2;
    data_2 = -(data_2);
    return data_2 - data_2 + 3;
}
