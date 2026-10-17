// IGI native provenance: Sound_Invoke20 - 0x004E7900 - CFG score 100.0% (PASS; structural only); runtime behavior not verified.
// Evidence: 004E7900-Sound_Invoke20.md; Binary Ninja/Radare2 CFG record; catalog: assets/BinaryNinja/IGINatives_VERIFIED.json.
#include "Sound_Invoke20.h"

int32_t* Sound_Invoke20()

{
    int32_t* result;
    result = g_a5ea75;

    if (result)
    {
        result = g_a5ebd4;
        g_a5ea74 = 1;

        if (result)
        {
            Sys_PushStack_20(**&g_a5ebd0);
            Heap_FreeEntry(g_a5ebd4);
            result = g_a5ebd0;
            g_a5ebd4 = 0;
            *result = 0;
        }
    }

    return result;
}
