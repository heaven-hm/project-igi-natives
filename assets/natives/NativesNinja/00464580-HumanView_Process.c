#include "00464580-HumanView_Process.h"
/* 0x00464580 HumanView_Process full linked: callers=0 callees=2 */
int32_t sub_464580(void* a1, int32_t* a2)

{
    char result = *(a1 + 0xd9);

    if (result)
    {
        sub_4d96f0(a1);
        result = sub_4c7560(*a2, a1);
        *(a1 + 0xd9) = 0;
    }

    return result;
}
