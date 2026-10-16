#include "004F2140-Script_CallNativeHandler_12.h"
/* 0x004f2140 Script_CallNativeHandler_12 full linked: callers=2 callees=3 */
int32_t** sub_4f2140(int32_t a1 @ 0x8, char* a2)

{
    int32_t** eax = Table_GetAt(a1, a2);
    int32_t** edi = eax;
    int32_t** arg_4;

    if (edi)
    {
        int32_t* esi = *edi;
        int32_t** ebp_1 = arg_4;

        if (!esi || !*esi || !esi)
        {
            eax = ebp_1[2];
            int32_t* esi_1 = *eax;
            int32_t esi_2 = -(esi_1);
            esi = (esi_2 - esi_2) & eax;
        }

        while (esi != edi)
        {
            int32_t eax_4 = 0;
            int32_t ecx_2 = 0;
            eax_4 = g_a76c03;
            arg_4 = nullptr;
            ecx_2 = esi[7];
            eax = *(((eax_4 * 0x180 + ecx_2) << 2) + &g_a96ae0);

            if (eax)
            {
                eax(esi, &arg_4);
                eax = arg_4;

                if (eax && eax[1] == a2 && !eax[2])
                {
                    void* eax_9 = sub_4f2070(a1, a2, esi);
                    eax_9 = 1;
                    return eax_9;
                }
            }

            esi = *esi;

            if (!esi || !*esi || !esi)
            {
                eax = ebp_1[2];
                int32_t* esi_4 = *eax;
                int32_t esi_5 = -(esi_4);
                esi = (esi_5 - esi_5) & eax;
            }
        }
    }
    else
    {
        int32_t* i = arg_4[2];

        if (*i && i)
        {
            do
            {
                int32_t eax_1 = 0;
                arg_4 = nullptr;
                eax_1 = g_a76c03;
                int32_t eax_2 = 0;
                eax_2 = i[7];
                eax = *(((eax_1 * 0x180 + eax_2) << 2) + &g_a96ae0);

                if (eax)
                {
                    eax(i, &arg_4);
                    eax = arg_4;

                    if (eax && eax[1] == a2 && !eax[2])
                    {
                        void* eax_3 = sub_4f2070(a1, a2, i);
                        eax_3 = 1;
                        return eax_3;
                    }
                }

                i = *i;

                if (!i)
                    break;

                if (!*i)
                    break;
            } while (i);
        }
    }
    eax = 0;
    return eax;
}
