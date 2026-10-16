#include "0044C740-AmbientArea_Process.h"
/* 0x0044c740 AmbientArea_Process full linked: callers=0 callees=4 */
int32_t sub_44c740(void* a1)

{
    char ecx = 0;
    char* edi = a1 + 0x94;
    *(a1 + 0x1b4) = 0;
    char* ebp = edi;

    while (true)
    {
        char eax_1 = *edi;

        if (eax_1 != 0x20 && eax_1 != 0x3b && eax_1 != 0x2c && eax_1)
        {
            if (!ecx)
                ebp = edi;

            ecx = 1;
        }
        else if (ecx)
        {
            sub_4a5500((*(a1 + 0x1b4) << 5) + a1 + 0xb4, ebp, edi - ebp);
            *((*(a1 + 0x1b4) << 5) - ebp + edi + a1 + 0xb4) = 0;
            ecx = 0;
            *(a1 + 0x1b4) += 1;
        }

        if (!*edi)
            break;

        edi = &edi[1];
    }

    *(a1 + 0x90) = (sub_4b4770(Level_SetMission_5()) * *(a1 + 0x88) + *(a1 + 0x80)) * 30.0;
    sub_4f1400(a1 + 0x1bc, a1);
    return 0;
}
