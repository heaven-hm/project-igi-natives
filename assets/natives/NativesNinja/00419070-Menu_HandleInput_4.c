#include "00419070-Menu_HandleInput_4.h"
/* 0x00419070 Menu_HandleInput_4 full linked: callers=2 callees=1 */
int32_t Menu_HandleInput_4(void* a1)

{
    char* ecx = *(a1 + 8);

    if (!ecx)
        return 0;

    return sub_4b9120(ecx);
}
