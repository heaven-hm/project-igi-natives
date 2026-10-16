#include "AI_FireAtTask.h"

void* AI_FireAtTask(void* pThis @ 0x8)

{
    void* result = *(pThis + 0x28);
    *(pThis + 0x18) = FX_FragmentSimulate_21;
    *(result + 0x19) = 0;
    *(result + 0x14) = 0xffffffff;
    return result;
}
