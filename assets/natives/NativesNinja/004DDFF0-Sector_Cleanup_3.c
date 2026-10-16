#include "004DDFF0-Sector_Cleanup_3.h"
/* 0x004ddff0 Sector_Cleanup_3 full linked: callers=0 callees=4 */
int32_t* sub_4ddff0(void* a1)

{
    sub_4de040(a1);
    sub_4b0b70(a1 + 0x130);
    int32_t* result = *(a1 + 0xe8);

    if (result)
        result = QTask_FindType(result);

    int32_t* esi_1 = *(a1 + 0x148);

    if (!esi_1)
        return result;

    return QTask_FindType(esi_1);
}
