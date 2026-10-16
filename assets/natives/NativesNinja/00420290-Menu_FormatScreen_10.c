#include "00420290-Menu_FormatScreen_10.h"
/* 0x00420290 Menu_FormatScreen_10 full linked: callers=4 callees=0 */
int32_t Menu_FormatScreen_10(int32_t a1)

{
    int32_t eax = *(a1 + 0x248);

    if (!eax)
        return 0;

    return (eax - 1) * *(a1 + 0xa0) + 0.5;
}
