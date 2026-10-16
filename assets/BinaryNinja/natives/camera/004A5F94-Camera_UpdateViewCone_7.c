#include "Camera_UpdateViewCone_7.h"
int32_t* Camera_UpdateViewCone_7(int32_t a1)

{
    int32_t objC = g_543fa8;
    int32_t* result = &g_543f28;

    if (g_543f28 != a1)
    {
        do
        {
            result = &result[3];

            if (result >= &(&g_543f28)[objC * 3])
                break;
        } while (*result != a1);
    }

    if (result < &(&g_543f28)[objC * 3] && *result == a1)
        return result;

    return nullptr;
}
