#include "gi_platform.h"
#include "004F80F0-Script_SpawnNewTask_21.h"
long double Script_SpawnNewTask_21(float a1)

{
    for (int32_t* i = &g_a76ca4; i < &g_a76cc4; i = &i[1])
    {
        void* valA1 = *i;

        if (valA1)
        {
            double* valA2 = Script_SpawnNewTask_19(valA1, a1);

            if (valA2 && *(valA2 + 0x1c))
                return 1.0f;
        }
    }

    return 0.0f;
}
