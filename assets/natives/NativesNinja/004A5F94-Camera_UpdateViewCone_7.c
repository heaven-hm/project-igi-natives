#include "004A5F94-Camera_UpdateViewCone_7.h"
/* 0x004a5f94 Camera_UpdateViewCone_7 full linked: callers=1 callees=0 */
int32_t* sub_4a5f94(int32_t a1)

{
    int32_t ecx = g_543fa8;
    int32_t* result = &g_543f28;

    if (g_543f28 != a1)
    {
        do
        {
            result = &result[3];

            if (result >= &(&g_543f28)[ecx * 3])
                break;
        } while (*result != a1);
    }

    if (result < &(&g_543f28)[ecx * 3] && *result == a1)
        return result;

    return nullptr;
}
