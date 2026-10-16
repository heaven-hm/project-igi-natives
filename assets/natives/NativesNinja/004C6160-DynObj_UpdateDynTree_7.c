#include "004C6160-DynObj_UpdateDynTree_7.h"
/* 0x004c6160 DynObj_UpdateDynTree_7 full linked: callers=1 callees=8 */
int32_t sub_4c6160(void* a1)

{
    int32_t* esi = a1 + 0xe00;
    int32_t i = 0xffffffff;
    int32_t* edi = esi;
    int32_t result = 0;

    while (i)
    {
        bool cond:0_1 = 0 != *edi;
        edi += 1;
        i -= 1;

        if (!cond:0_1)
            break;
    }

    if (~i != 1)
    {
        void* ecx_2;
        int32_t edx_1;
        result = sub_4b5b60(esi);

        if (result)
        {
            int32_t* var_20_1 = esi;
            int32_t var_8;
            int32_t* eax_1;
            int32_t ecx_3;
            eax_1 = Resource_Load(&var_8, edx_1, ecx_2, &var_8);
            int32_t* edi_1 = eax_1;
            *(a1 + 0xdf8) = edi_1;

            if (edi_1)
            {
                int32_t ebp_1 = 0;

                if (var_8 > 0)
                {
                    int32_t* ebx_1 = &g_b81b20;

                    do
                    {
                        int32_t esi_1 = *edi_1;

                        if (esi_1)
                        {
                            if (sub_4b2670(ecx_3) > 1)
                                sub_4b2610(1);

                            int32_t eax_5;
                            eax_5 = sub_4b2670(sub_4b2450(&ebx_1[2], *(a1 + 0xdf4), esi_1, esi_1,
                                esi_1, 1, &edi_1[1]));

                            if (eax_5 > 1)
                                ecx_3 = sub_4b2610(0xffffffff);

                            *ebx_1 = esi_1;
                            ebx_1[1] = &edi_1[1];
                        }

                        ebx_1 = &ebx_1[0xb];
                        int32_t eax_7 = esi_1 * esi_1;
                        edi_1 = &edi_1[1] + eax_7;
                        ebp_1 = ebp_1 + 4 + eax_7;
                    } while (ebp_1 < var_8);
                }
            }

            return Resource_Unload(esi);
        }
    }

    return result;
}
