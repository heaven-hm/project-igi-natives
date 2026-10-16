#include "00428610-Menu_RequestScreen_19.h"
/* 0x00428610 Menu_RequestScreen_19 full linked: callers=1 callees=1 */
void* Menu_RequestScreen_19(void* a1)

{
    void* result = *(a1 + 0x890);

    if (!result)
        return result;

    return sub_4e6c30(result, a1 + 0x20);
}
