#include "0052CAF0-PushButton_LoadParameters.h"
/* 0x0052caf0 PushButton_LoadParameters full linked: callers=0 callees=2 */
int32_t sub_52caf0(void* a1, int32_t* a2)

{
    int32_t result = *(a1 + 0x78);

    if (!result)
        return result;

    *(a1 + 0x74) = a1;
    sub_4b6f90(result, a1 + 0x5c);
    return sub_504dc0(a2, a1 + 0x54);
}
