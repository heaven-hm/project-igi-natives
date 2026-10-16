#include "004F80F0-Script_SpawnNewTask_21.h"
/* 0x004f80f0 Script_SpawnNewTask_21 full linked: callers=1 callees=1 */
long double sub_4f80f0(float a1)

{
    for (int32_t* i = &g_a76ca4; i < &g_a76cc4; i = &i[1])
    {
        void* eax_1 = *i;

        if (eax_1)
        {
            double* eax_2 = sub_4f65e0(eax_1, a1);

            if (eax_2 && *(eax_2 + 0x1c))
                return 1f;
        }
    }

    return 0f;
}
