#include "0044C700-AmbientArea_Setup.h"
/* 0x0044c700 AmbientArea_Setup full linked: callers=0 callees=2 */
char* sub_44c700(void* a1)

{
    int32_t* eax = *(a1 + 0x1b8);

    if (eax)
        Qtask_UpdateList(eax);

    return sub_4f1340(a1 + 0x1bc);
}
