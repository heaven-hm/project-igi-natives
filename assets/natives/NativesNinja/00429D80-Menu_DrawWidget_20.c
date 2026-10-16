#include "00429D80-Menu_DrawWidget_20.h"
/* 0x00429d80 Menu_DrawWidget_20 full linked: callers=1 callees=2 */
struct status_msg* Menu_DrawWidget_20(void* a1)

{
    struct status_msg* result = sub_4e6b00(a1, *(*(a1 + 0x1b4) + 0x2d4) + 0x23c);
    *(a1 + 0x890) = result;

    if (!result)
        return result;

    return sub_4e6c30(result, a1 + 0x20);
}
