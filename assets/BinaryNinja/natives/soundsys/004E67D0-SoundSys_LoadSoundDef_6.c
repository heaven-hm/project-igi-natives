#include "SoundSys_LoadSoundDef_6.h"
int32_t SoundSys_LoadSoundDef_6(int32_t* a1)

{
    void v_80;
    Sys_ReadFileBlock_7(&v_80, 0x80, a1);
    int32_t result;
    void* objC;
    int32_t tmpD;
    result = Sys_AllocateMemory_16(a1);

    if (!result)
        return result;

    int32_t* v_8c_1 = a1;
    Resource_Load(result, tmpD, objC, nullptr);
    Sys_OpenFileStream_16(&v_80, SoundSys_EvaluateTrigger_6, nullptr);
    return Resource_Unload(a1);
}
