// Original IGI.EXE function: PhysicsObj_Create (VA 0x004FB080; static CFG gate PASS, CFG score 1.000).
#include "PhysicsObj_Create.h"

char* PhysicsObj_Create(int32_t* pThis)

{
    g_a77258 = 0xffffffff;
    g_a77254 = 0xffffffff;
    pThis[3] = 0;
    return Script_ParseEnumString_24(pThis, &g_a77258, 0);
}
