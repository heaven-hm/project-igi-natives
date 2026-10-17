// IGI native provenance: SoundSys_LoadSoundDef_6 - 0x004E67D0 - CFG score 100.0% (PASS; structural only); runtime behavior not verified.
// Evidence: 004E67D0-SoundSys_LoadSoundDef_6.md; REA/Ghidra static record; catalog: assets/BinaryNinja/IGINatives_VERIFIED.json.
#include "SoundSys_LoadSoundDef_6.h"
int32_t SoundSys_LoadSoundDef_6(int32_t* context)

{
    void item_80;
    Sys_ReadFileBlock_7(&item_80, 0x80, context);
    int32_t result;
    void* entity_val;
    int32_t temp_val;
    result = Sys_AllocateMemory_16(context);

    if (!result)
        return result;

    int32_t* item_8c_1 = context;
    Resource_Load(result, temp_val, entity_val, nullptr);
    Sys_OpenFileStream_16(&item_80, SoundSys_EvaluateTrigger_6, nullptr);
    return Resource_Unload(context);
}
