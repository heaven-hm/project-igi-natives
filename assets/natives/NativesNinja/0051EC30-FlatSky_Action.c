#include "0051EC30-FlatSky_Action.h"
/* 0x0051ec30 FlatSky_Action full linked: callers=0 callees=1 */
int32_t sub_51ec30(void* a1)

{
    int32_t result = *(a1 + 0x44);

    if (result)
    {
        result = Struct_Clear36(a1 + 0x20);
        *(a1 + 0x44) = 0;
    }

    return result;
}
