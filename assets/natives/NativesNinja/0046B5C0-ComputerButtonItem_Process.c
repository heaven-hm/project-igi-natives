#include "0046B5C0-ComputerButtonItem_Process.h"
/* 0x0046b5c0 ComputerButtonItem_Process full linked: callers=0 callees=2 */
int32_t sub_46b5c0(void* a1)

{
    char eax = *(a1 + 0x4e);
    int32_t* eax_1;

    if (!eax)
        eax_1 = *(a1 + 0x88);
    else if (*(a1 + 0x80))
        eax_1 = *(a1 + 0x90);
    else if (!eax)
        eax_1 = *(a1 + 0x88);
    else
        eax_1 = *(a1 + 0x8c);

    sub_4b50b0(eax_1, *(a1 + 0x78), *(a1 + 0x7c), 128f, 128f, 128f, 0x3f800000, 0x44029eb8, 0,
        0x400c0000, 0xffffffff);
    int32_t result = *(a1 + 0x84);

    if (!result)
        return result;

    *(result + 0x20) = 0xffffffff;
    return sub_4b6f50(*(a1 + 0x84));
}
