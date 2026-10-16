#include "0051B4F0-AnimSound_Process.h"
/* 0x0051b4f0 AnimSound_Process full linked: callers=0 callees=4 */
struct status_msg* sub_51b4f0(int32_t* a1 @ 0x8)

{
    char* eax = a1[1];

    if (eax[0x20])
        return sub_4e6b00(*a1, eax);

    struct status_msg* result = sub_4e6b00(sub_4f0ee0(), eax);

    if (!result)
        return result;

    return sub_4e6c30(result, a1[2]);
}
