#include "00438DA0-RotatingObject_Setup.h"
/* 0x00438da0 RotatingObject_Setup full linked: callers=0 callees=4 */
char* RotatingObject_Setup(void* a1)

{
    sub_4c7560(*(a1 + 0x68), a1);
    int32_t* eax_1 = *(a1 + 0x1a0);

    if (eax_1)
        Qtask_UpdateList(eax_1);

    void* eax_2 = *(a1 + 0x1a4);

    if (eax_2)
        sub_4c1830(eax_2);

    return sub_4f1340(a1 + 0x1ac);
}
