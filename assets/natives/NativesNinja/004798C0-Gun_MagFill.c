#include "004798C0-Gun_MagFill.h"
/* 0x004798c0 Gun_MagFill full linked: callers=0 callees=2 */
char* sub_4798c0(int32_t* a1, char* a2)

{
    int32_t* esi = a1;
    bool cond:0 = !*a2;
    void* ebp = esi[0x4a];
    int32_t* ebx = esi[0x4b];
    a1 = nullptr;

    if (!cond:0)
    {
        esi[0x51] = *(ebp + 0x648);
        return a2;
    }

    void* edi = esi[5];
    uint32_t eax_1 = sub_47cdc0();
    int32_t eax_2 = 0;
    eax_2 = *(edi + 0x1c);
    int32_t eax_3 = *(((eax_1 * 0x180 + eax_2) << 2) + &g_a96ae0);

    if (eax_3)
        eax_3(edi, &a1);

    int32_t* eax_5 = sub_47cee0(a1, *ebx);

    if (eax_5)
    {
        int32_t ecx_2 = eax_5[1];

        if (ecx_2)
        {
            int32_t edi_1 = esi[0x51];
            int32_t edx_4 = *(ebp + 0x648);
            int32_t edx_5 = edx_4 - edi_1;

            if (edx_4 != edi_1)
            {
                if (ecx_2 >= edx_5)
                {
                    eax_5[1] = ecx_2 - edx_5;
                    int32_t eax_7 = esi[0x51] + edx_5;
                    esi[0x51] = eax_7;
                    return eax_7;
                }

                esi[0x51] = edi_1 + ecx_2;
                eax_5[1] = 0;
            }
        }
    }

    return eax_5;
}
