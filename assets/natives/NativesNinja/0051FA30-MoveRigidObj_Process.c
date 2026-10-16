#include "0051FA30-MoveRigidObj_Process.h"
/* 0x0051fa30 MoveRigidObj_Process full linked: callers=0 callees=5 */
int32_t sub_51fa30(void* a1)

{
    if (sub_4f1050(a1) >= 0)
    {
        int32_t eax_1 = sub_4f1220();
        int32_t ecx_1 = 0;
        ecx_1 = *(a1 + 0x1c);
        int32_t eax_5 = *(((eax_1 * 0x180 + ecx_1) << 2) + &g_a96ae0);

        if (eax_5)
            eax_5(a1);
    }

    sub_4f1340(a1 + 0x1b4);
    sub_4c7560(*(a1 + 0x68), a1);
    return QTask_FindType(*(a1 + 0xe8));
}
