// IGI native provenance: SoundSys_RegisterDefs - 0x004E5EC0 - CFG score 100.0% (PASS; structural only); runtime behavior not verified.
// Evidence: 004E5EC0-SoundSys_RegisterDefs.md; Binary Ninja/Radare2 CFG record; catalog: assets/BinaryNinja/IGINatives_VERIFIED.json.
#include "SoundSys_RegisterDefs.h"

int32_t* SoundSys_RegisterDefs(int32_t pThis, void* param)

{
    void* param_1 = param;
    int32_t i = 0xffffffff;

    while (i)
    {
        bool cond:0_1 = 0 != *param_1;
        param_1 += 1;
        i -= 1;

        if (!cond:0_1)
            break;
    }

    int32_t counter_val = ~i;
    int32_t source_ptr_1;
    int32_t dest_ptr_2;
    dest_ptr_2 = memcpy(pThis + 0x20, param_1 - counter_val, counter_val & 0xfffffffc);
    memcpy(dest_ptr_2, source_ptr_1, counter_val & 3);
    DynObj_QtasklistIsFull(g_a5e610, pThis);
    Script_SetSymbolContext("DefineGroup", pThis);
    Script_SetSymbolContext("DefineSound", pThis);
    Script_SetSymbolContext("DefineGraph", pThis);
    Script_SetSymbolContext("DefineTriggerOnce", pThis);
    int32_t* result = Qvm_Load(param);

    if (!result)
        return result;

    Qvm_Execute(result);
    return Qvm_Cleanup(result);
}
