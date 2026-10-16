#include "004205F0-MenuTextConditional_Process.h"
/* 0x004205f0 MenuTextConditional_Process full linked: callers=0 callees=4 */
char* MenuTextConditional_Process(void* a1)

{
    int32_t* eax = *(a1 + 0x114);

    if (eax)
    {
        sub_4b6f30(eax);
        *(a1 + 0x114) = 0;
    }

    sub_4f1340(a1 + 0x11c);
    sub_4f1340(a1 + 0x16c);
    return sub_4f1340(a1 + 0x1bc);
}
