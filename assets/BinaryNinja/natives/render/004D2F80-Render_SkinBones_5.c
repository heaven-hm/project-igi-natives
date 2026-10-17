// Original IGI.EXE function: Render_SkinBones_5 (VA 0x004D2F80; static CFG gate FAIL, CFG score 0.667).
#include "Render_SkinBones_5.h"
void* Render_SkinBones_5(void* a1, void* a2)

{
    __builtin_memset(a1, 0, 0x84);
    *(a1 + 0x78) = 0;
    *(a1 + 0x74) = a2;
    *(a1 + 0x7c) = *(a2 + 0x78);
    *(a2 + 0x78) = a1;
    return a2;
}
