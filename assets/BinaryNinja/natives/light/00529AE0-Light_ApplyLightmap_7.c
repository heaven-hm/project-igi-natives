// Original IGI.EXE function: Light_ApplyLightmap_7 (VA 0x00529AE0; static CFG gate PASS, CFG score 1.000).
#include "Light_ApplyLightmap_7.h"
void* Light_ApplyLightmap_7(void* context )

{
    char entity_val = 1;
    *(context + 0xd4) = 1;

    if (0x80 & g_c28c7f || g_c28cff & 0x80)
    {
        int32_t* entity_1 = context + 0x1b8;

        if (0x80 & g_c28c8c || g_c28c98 & 0x80)
            entity_1 = context + 0x1bc;

        if (g_c28c6d & 0x80)
            *entity_1 = *(context + 0xd8);

        if (g_c28c64 & 0x80)
            *entity_1 = *(context + 0xdc);

        if (g_c28c65 & 0x80)
            *entity_1 = *(context + 0xe0);

        if (g_c28c66 & 0x80)
            *entity_1 = *(context + 0xe4);

        if (g_c28c67 & 0x80)
            *entity_1 = *(context + 0xe8);

        if (g_c28c68 & 0x80)
            *entity_1 = *(context + 0xec);

        if (g_c28c69 & 0x80)
            *entity_1 = *(context + 0xf0);

        if (g_c28c6a & 0x80)
            *entity_1 = *(context + 0xf4);

        if (g_c28c6b & 0x80)
            *entity_1 = *(context + 0xf8);

        if (g_c28c6c & 0x80)
            *entity_1 = *(context + 0xfc);

        entity_val = 1;
    }

    if (g_c28c6c & 0x80)
        *(context + 0x1f0) = 0;

    if (g_c28c91 & 0x80 && !(g_c28d91 & 0x80))
        *(context + 0x214) ^= entity_val;

    if (g_c28c92 & 0x80 && !(g_c28d92 & 0x80))
        *(context + 0x215) ^= entity_val;

    if (g_c28c93 & 0x80 && !(g_c28d93 & 0x80))
        *(context + 0x216) ^= entity_val;

    return context;
}
