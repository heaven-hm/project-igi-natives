// Original IGI.EXE function: Script_SpawnNewTask_21 (VA 0x004F80F0; static CFG gate PASS, CFG score 1.000).
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
