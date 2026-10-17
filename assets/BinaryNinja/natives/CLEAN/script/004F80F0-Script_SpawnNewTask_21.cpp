// IGI native provenance: Script_SpawnNewTask_21 - 0x004F80F0 - CFG score 100.0% (PASS; structural only); runtime behavior not verified.
// Evidence: 004F80F0-Script_SpawnNewTask_21.md; REA/Ghidra static record; catalog: assets/BinaryNinja/IGINatives_VERIFIED.json.
#include "Script_SpawnNewTask_21.h"
long double Script_SpawnNewTask_21(float context)

{
    for (int32_t* i = &g_a76ca4; i < &g_a76cc4; i = &i[1])
    {
        void* data_1 = *i;

        if (data_1)
        {
            double* data_2 = Script_SpawnNewTask_19(data_1, context);

            if (data_2 && *(data_2 + 0x1c))
                return 1.0f;
        }
    }

    return 0.0f;
}
