#include "004F8140-Script_ParseEnumInt32_21.h"
/* 0x004f8140 Script_ParseEnumInt32_21 full linked: callers=1 callees=0 */
void* sub_4f8140(int32_t a1, int32_t a2, int32_t* a3)

{
    *a3 = 0;
    void* result;

    for (int32_t* i = &g_a76ca4; i < &g_a76cc4; i = &i[1])
    {
        result = *i;

        if (result)
        {
            *(a1 + (*a3 << 2)) = result + 0x2d18;
            *(a2 + (*a3 << 2)) = *(result + 0x4288);
            result = *a3 + 1;
            *a3 = result;
        }
    }

    return result;
}
