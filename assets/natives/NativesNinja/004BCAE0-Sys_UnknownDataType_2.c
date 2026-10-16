#include "004BCAE0-Sys_UnknownDataType_2.h"
/* 0x004bcae0 Sys_UnknownDataType_2 full linked: callers=3 callees=6 */
int32_t sub_4bcae0(char* a1, int32_t a2, float a3, int32_t a4, int32_t a5)

{
    float esi = a3;
    void* eax = *(esi + 0xc);
    int32_t result = 0;
    int32_t ecx = *(eax + 0x18);
    int32_t ebp = *(eax + 0x14);
    int32_t edi = *(eax + 0x1c);
    *(eax + 0x14) = *(*(esi + 0x10) + (a4 << 2));
    sub_4bcfd0(*(esi + 0xc));
    char* eax_2 = *(esi + 0xc);

    if (*(eax_2 + 0x1c) < edi && !*(eax_2 + 0x20))
    {
        if (a5 == 1)
        {
            if (sub_4bcec0(eax_2, &a4, &a3))
            {
                *a1 = a4;
                result = 1;
            }
        }
        else if (a5 == 2)
        {
            if (sub_4bcec0(eax_2, &a4, &a3))
            {
                *a1 = a3;
                result = 1;
            }
        }
        else
        {
            char* var_c;
            int32_t var_4;

            if (a5 == 3)
            {
                if (sub_4bcc00(eax_2, &var_c, &var_4, 3))
                {
                    sub_4a5500(a1, var_c, a2 - 1);
                    a1[a2 - 1] = 0;
                    result = 1;
                }
            }
            else
            {
                Error_Show("Unknown data type.");

                while (true)
                    /* nop */
            }
        }
    }

    *(*(esi + 0xc) + 0x14) = ebp;
    *(*(esi + 0xc) + 0x1c) = edi;
    *(*(esi + 0xc) + 0x18) = ecx;
    return result;
}
