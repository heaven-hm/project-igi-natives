#include "gi_platform.h"
#include "00529AE0-Light_ApplyLightmap_7.h"
void* Light_ApplyLightmap_7(void* a1 )

{
    char objC = 1;
    (*(int32_t*)(uintptr_t)(a1 + 0xd4)) = 1;

    if (0x80 & g_c28c7f || g_c28cff & 0x80)
    {
        int32_t* objC1 = a1 + 0x1b8;

        if (0x80 & g_c28c8c || g_c28c98 & 0x80)
            objC1 = a1 + 0x1bc;

        if (g_c28c6d & 0x80)
            *objC1 = (*(int32_t*)(uintptr_t)(a1 + 0xd8));

        if (g_c28c64 & 0x80)
            *objC1 = (*(int32_t*)(uintptr_t)(a1 + 0xdc));

        if (g_c28c65 & 0x80)
            *objC1 = (*(int32_t*)(uintptr_t)(a1 + 0xe0));

        if (g_c28c66 & 0x80)
            *objC1 = (*(int32_t*)(uintptr_t)(a1 + 0xe4));

        if (g_c28c67 & 0x80)
            *objC1 = (*(int32_t*)(uintptr_t)(a1 + 0xe8));

        if (g_c28c68 & 0x80)
            *objC1 = (*(int32_t*)(uintptr_t)(a1 + 0xec));

        if (g_c28c69 & 0x80)
            *objC1 = (*(int32_t*)(uintptr_t)(a1 + 0xf0));

        if (g_c28c6a & 0x80)
            *objC1 = (*(int32_t*)(uintptr_t)(a1 + 0xf4));

        if (g_c28c6b & 0x80)
            *objC1 = (*(int32_t*)(uintptr_t)(a1 + 0xf8));

        if (g_c28c6c & 0x80)
            *objC1 = (*(int32_t*)(uintptr_t)(a1 + 0xfc));

        objC = 1;
    }

    if (g_c28c6c & 0x80)
        (*(int32_t*)(uintptr_t)(a1 + 0x1f0)) = 0;

    if (g_c28c91 & 0x80 && !(g_c28d91 & 0x80))
        (*(int32_t*)(uintptr_t)(a1 + 0x214)) ^= objC;

    if (g_c28c92 & 0x80 && !(g_c28d92 & 0x80))
        (*(int32_t*)(uintptr_t)(a1 + 0x215)) ^= objC;

    if (g_c28c93 & 0x80 && !(g_c28d93 & 0x80))
        (*(int32_t*)(uintptr_t)(a1 + 0x216)) ^= objC;

    return a1;
}
