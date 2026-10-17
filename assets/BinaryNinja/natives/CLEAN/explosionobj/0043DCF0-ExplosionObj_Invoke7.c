// IGI native provenance: ExplosionObj_Invoke7 - 0x0043DCF0 - CFG score 100.0% (PASS; structural only); runtime behavior not verified.
// Evidence: 0043DCF0-ExplosionObj_Invoke7.md; Binary Ninja/Radare2 CFG record; catalog: assets/BinaryNinja/IGINatives_VERIFIED.json.
#include "ExplosionObj_Invoke7.h"

void* ExplosionObj_Invoke7(void* arg1)

{
    void* result_val = *(arg1 + 0x63c);

    if (result_val)
    {
        SoundSys_SetFrequency_7(result_val);
        *(arg1 + 0x63c) = 0;
    }

    if (Script_EvaluateCondition_4(arg1) >= 0)
    {
        int32_t eax_2 = Script_SpawnNewTask_6();
        int32_t ecx_1 = 0;
        ecx_1 = *(arg1 + 0x1c);
        int32_t eax_6 = *(((eax_2 * 0x180 + ecx_1) << 2) + &g_a96ae0);

        if (eax_6)
            eax_6(arg1);
    }

    int32_t* dest_ptr = arg1 + 0x1c4;
    int32_t i_1 = 0xa;
    int32_t i;

    do
    {
        Script_CallNativeHandler_6(dest_ptr);
        dest_ptr = &dest_ptr[0x14];
        i = i_1;
        i_1 -= 1;
    } while (i != 1);
    Script_CallNativeHandler_6(arg1 + 0x534);
    Script_CallNativeHandler_6(arg1 + 0x4e4);
    Script_CallNativeHandler_6(arg1 + 0x584);
    return DynObj_RegisterSymbol_9(*(arg1 + 0x68), arg1);
}
