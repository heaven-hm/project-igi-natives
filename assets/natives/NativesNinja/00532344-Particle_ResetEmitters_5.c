#include "00532344-Particle_ResetEmitters_5.h"
/* 0x00532344 Particle_ResetEmitters_5 full linked: callers=1 callees=1 */
char* sub_532344(char* a1, char* a2, int32_t a3, int32_t a4)

{
    char* result = a1;
    char* edi = a2;

    if (edi > result)
    {
        do
        {
            char* i_1 = a1;

            for (char* i = &result[a3]; i <= edi; i = &i[a3])
            {
                if (a4(i, i_1) > 0)
                    i_1 = i;
            }

            result = sub_532392(i_1, edi, a3);
            edi -= a3;
        } while (edi > a1);
    }

    return result;
}
