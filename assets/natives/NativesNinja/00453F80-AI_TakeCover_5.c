#include "00453F80-AI_TakeCover_5.h"
/* 0x00453f80 AI_TakeCover_5 full linked: callers=0 callees=1 */
int32_t sub_453f80(void* a1, void* a2)

{
    *(a2 + 0x33d) = 1;
    *(a2 + 0x696) = 0;
    int32_t result = sub_489e70(a2, *(a1 + 0x10), 0f);
    *(a1 + 0x14) = sub_453fb0;
    return result;
}
