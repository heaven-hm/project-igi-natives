// IGI native provenance: Camera_UpdateViewCone_21 - 0x004AB3ED - CFG score 100.0% (PASS; structural only); runtime behavior not verified.
// Evidence: 004AB3ED-Camera_UpdateViewCone_21.md; REA/Ghidra static record; catalog: assets/BinaryNinja/IGINatives_VERIFIED.json.
#include "Camera_UpdateViewCone_21.h"
int32_t* Camera_UpdateViewCone_21()

{
    int32_t data_3 = g_c321f4;
    int32_t entity_val = g_c321e4;

    if (data_3 != entity_val)
        goto label_4ab446;

    int32_t data_2 = HeapReAlloc(g_c32428, HEAP_NONE, g_c321f8, (entity_val * 5 + 0x50) << 2);

    if (data_2)
    {
        g_c321e4 += 0x10;
        g_c321f8 = data_2;
        data_3 = g_c321f4;
    label_4ab446:
        int32_t* result = g_c321f8 + data_3 * 0x14;
        int32_t data_5 = HeapAlloc(g_c32428, HEAP_ZERO_MEMORY, 0x41c4);
        result[4] = data_5;

        if (data_5)
        {
            int32_t data_6 = VirtualAlloc(nullptr, 0x100000, MEM_RESERVE, PAGE_READWRITE);
            result[3] = data_6;

            if (data_6)
            {
                result[2] = 0xffffffff;
                *result = 0;
                result[1] = 0;
                g_c321f4 += 1;
                *result[4] = 0xffffffff;
                return result;
            }

            HeapFree(g_c32428, HEAP_NONE, result[4]);
        }
    }

    return nullptr;
}
