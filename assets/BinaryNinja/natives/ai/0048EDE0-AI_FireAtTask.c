// Original IGI.EXE function: AI_FireAtTask (VA 0x0048EDE0; static CFG gate PASS, CFG score 1.000).
#include "AI_FireAtTask.h"

void* AI_FireAtTask(void* pThis @ 0x8)

{
    void* result = *(pThis + 0x28);
    *(pThis + 0x18) = FX_FragmentSimulate_21;
    *(result + 0x19) = 0;
    *(result + 0x14) = 0xffffffff;
    return result;
}
