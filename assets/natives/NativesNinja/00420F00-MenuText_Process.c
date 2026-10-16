#include "00420F00-MenuText_Process.h"
/* 0x00420f00 MenuText_Process full linked: callers=0 callees=2 */
char* MenuText_Process(void* a1)

{
    int32_t* eax = *(a1 + 0x114);

    if (eax)
    {
        sub_4b6f30(eax);
        *(a1 + 0x114) = 0;
    }

    return sub_4f1340(a1 + 0x11c);
}
