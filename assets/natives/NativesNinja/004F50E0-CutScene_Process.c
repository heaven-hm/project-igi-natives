#include "004F50E0-CutScene_Process.h"
/* 0x004f50e0 CutScene_Process full linked: callers=0 callees=11 */
int32_t* sub_4f50e0(void* a1)

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

    sub_4f1340(a1 + 0x7c);
    sub_4f1340(a1 + 0xcc);
    sub_4f1340(a1 + 0x11c);
    sub_4f1340(a1 + 0x16c);
    sub_4f1340(a1 + 0x1bc);
    int32_t* eax_8 = *(a1 + 0x25c);

    if (eax_8)
    {
        QTask_FindType(eax_8);
        *(a1 + 0x25c) = 0;
    }

    int32_t* eax_9 = *(a1 + 0x264);

    if (eax_9)
    {
        QTask_FindType(eax_9);
        *(a1 + 0x264) = 0;
    }

    int32_t* eax_10 = *(a1 + 0x268);

    if (eax_10)
    {
        QTask_FindType(eax_10);
        *(a1 + 0x268) = 0;
    }

    int32_t* result = *(a1 + 0x260);

    if (result)
    {
        result = QTask_FindType(result);
        *(a1 + 0x260) = 0;
    }

    return result;
}
