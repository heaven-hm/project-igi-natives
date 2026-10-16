#include "004A865C-Camera_ApplyLineFilter_13.h"
/* 0x004a865c Camera_ApplyLineFilter_13 full linked: callers=1 callees=0 */
int32_t sub_4a865c(char a1) __pure

{
    if (a1 & 0x20)
        return 5;

    if (a1 & 8)
        return 1;

    if (a1 & 4)
        return 2;

    if (!(a1 & 1))
        return (a1 & 2) << 1;

    return 3;
}
