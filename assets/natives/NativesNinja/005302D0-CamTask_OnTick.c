#include "005302D0-CamTask_OnTick.h"
/* 0x005302d0 CamTask_OnTick full linked: callers=0 callees=14 */
int32_t sub_5302d0(int32_t a1 @ 0x8, int32_t* a2, int32_t* a3)

{
    char* ebp = *a2;
    char* var_10 = ebp;
    void* eax_1 = Mem_Alloc(0x3006, 4);
    void* eax_2 = Mem_Alloc(0x800, 4);
    int32_t esi = 1;
    int32_t* edi = nullptr;

    while (a1)
    {
        *(edi + eax_2 + 1) = *ebp;
        ebp = &ebp[1];
        edi += 1;
        a1 -= 1;

        if (edi >= 0x82)
            break;
    }

    char* var_10_1 = ebp;
    a2 = edi;
    sub_530470(eax_1, 1);
    int32_t* ebp_1 = nullptr;
    int32_t var_8 = 0;

    if (edi > 0)
    {
        do
        {
            if (ebp_1 > a2)
                ebp_1 = a2;

            int32_t* edi_1;

            if (ebp_1 > 2)
            {
                sub_530810(a3, 0);
                sub_530850(a3, var_8, 0xb);
                sub_530850(a3, ebp_1 - 3, 7);
                edi_1 = ebp_1;

                if (ebp_1 > 0)
                    goto label_5303b4;
            }
            else
            {
                edi_1 = 1;
                sub_530810(a3, 1);
                int32_t edx_1 = 0;
                edx_1 = *(esi + eax_2);
                sub_530850(a3, edx_1, 8);
            label_5303b4:
                int32_t* var_4_1 = edi_1;
                bool cond:1_1;

                do
                {
                    sub_5304b0(eax_1, (esi + 0x82) & 0x7ff);

                    if (a1)
                    {
                        char eax_12 = *var_10_1;
                        var_10_1 = &var_10_1[1];
                        a1 -= 1;
                        *(((esi + 0x82) & 0x7ff) + eax_2) = eax_12;
                    }
                    else
                        a2 -= 1;

                    esi = (esi + 1) & 0x7ff;

                    if (a2)
                        ebp_1 = sub_530630(eax_1, eax_2, esi, &var_8);

                    cond:1_1 = var_4_1 != 1;
                    var_4_1 -= 1;
                } while (cond:1_1);
            }
        } while (a2 > 0);
    }

    sub_530810(a3, 0);
    sub_530850(a3, 0, 0xb);
    sub_4b0d10(eax_1);
    return sub_4b0d10(eax_2);
}
