#include "004F2B50-EditRigidObj_Process.h"
/* 0x004f2b50 EditRigidObj_Process full linked: callers=0 callees=3 */
void* sub_4f2b50(void* a1)

{
    int32_t* eax = *(a1 + 0xe8);

    if (eax)
        QTask_FindType(eax);

    sub_4dcdd0(a1);
    return sub_4c7560(*(a1 + 0x68), a1);
}
