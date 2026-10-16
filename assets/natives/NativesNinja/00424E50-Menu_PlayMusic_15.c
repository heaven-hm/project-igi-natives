#include "00424E50-Menu_PlayMusic_15.h"
/* 0x00424e50 Menu_PlayMusic_15 full linked: callers=1 callees=0 */
int32_t Menu_PlayMusic_15(void* a1, int32_t* a2, int32_t* a3, int32_t* a4, int32_t* a5)

{
    *a2 = *(a1 + 0x24);
    *a3 = *(a1 + 0x28);
    *a4 = *(a1 + 0x3c);
    int32_t result = *(a1 + 0x38);
    *a5 = result;
    return result;
}
