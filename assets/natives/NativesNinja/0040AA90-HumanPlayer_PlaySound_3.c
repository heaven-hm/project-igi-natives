#include "0040AA90-HumanPlayer_PlaySound_3.h"
/* 0x0040aa90 HumanPlayer_PlaySound_3 full linked: callers=0 callees=1 */
int32_t HumanPlayer_PlaySound_3(void* a1, void* a2)

{
    *(a2 + 0x33d) = 0;
    int32_t result = sub_489e70(a2, *(a1 + 0x10), 0.200000003f);
    *(a1 + 0x14) = sub_40aac0;
    return result;
}
