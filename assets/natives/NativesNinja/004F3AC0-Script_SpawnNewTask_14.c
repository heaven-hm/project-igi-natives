#include "004F3AC0-Script_SpawnNewTask_14.h"
/* 0x004f3ac0 Script_SpawnNewTask_14 full linked: callers=0 callees=6 */
int32_t* sub_4f3ac0(void* a1)

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

    sub_4f1340(a1 + 0x200f8);
    sub_4af960(a1 + 0x60);
    int32_t* result = *(a1 + 0x20148);

    if (!result)
        return result;

    int32_t* eax_7 = *result;

    if (eax_7)
        QTask_FindType(eax_7);

    return Qtask_UpdateList(*(a1 + 0x20148));
}
