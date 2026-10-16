#include "gi_platform.h"
#include "004FB030-Graph_Cleanup_2.h"
int32_t* Graph_Cleanup_2(int32_t* a1)

{
    Script_ParseEnumString_24(a1, 0xa77294, 0x100);
    int32_t v_14 = 0;
    int32_t* result =
        Script_GraphnodeIdAlreadyUs(a1[1], g_a77260, 0xa77268, g_a77280, g_a77284, g_a77398, 0xa77294);
    a1[2] = result;
    return result;
}
