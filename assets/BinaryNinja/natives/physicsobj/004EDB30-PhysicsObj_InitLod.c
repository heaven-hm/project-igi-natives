// Original IGI.EXE function: PhysicsObj_InitLod (VA 0x004EDB30; static CFG gate PASS, CFG score 1.000).
#include "PhysicsObj_InitLod.h"

int32_t PhysicsObj_InitLod(void* pThis)

{
    *(pThis + 0x30) = 0;
    *(pThis + 0x34) = 0;
    *(pThis + 0x38) = 0;
    *(pThis + 0x3c) = 0;
    return Game_DataSymbolLoad(pThis + 0x20, &g_script_ret_type);
}
