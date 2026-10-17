// IGI native provenance: Sound_Invoke20_4E7A60 - 0x004E7A60 - CFG score 100.0% (PASS; structural only); runtime behavior not verified.
// Evidence: 004E7A60-Sound_Invoke20_4E7A60.md; Binary Ninja/Radare2 CFG record; catalog: assets/BinaryNinja/IGINatives_VERIFIED.json.
#include "Sound_Invoke20_4E7A60.h"

int32_t* Sound_Invoke20_4E7A60()

{
    int32_t* result = g_a5ebd4;

    if (result)
    {
        Sys_PushStack_20(**&g_a5ebd0);
        Heap_FreeEntry(g_a5ebd4);
        result = g_a5ebd0;
        g_a5ebd4 = 0;
        *result = 0;
    }

    result = g_5488d8;

    if (result)
        result = Display_SwapBuffers_13(0xa5eb80);

    g_a5ea70 = 0;
    return result;
}
