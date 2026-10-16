#include "004C04B0-DynObj_InsertHashItem_2.h"
/* 0x004c04b0 DynObj_InsertHashItem_2 full linked: callers=3 callees=1 */
uint32_t sub_4c04b0(int32_t* a1, int32_t** a2, char* a3)

{
    uint32_t eax_1 = sub_4c0530(a3, a1[1]);
    int32_t* ebp = *(*a1 + eax_1 * 0xc);
    int32_t* edi = *ebp;

    if (edi)
    {
        while (true)
        {
            char* esi_1 = ebp[2];
            char* eax_2 = a3;

            while (true)
            {
                char edx_1 = *eax_2;
                char temp0_1 = *esi_1;
                bool c_1 = edx_1 < temp0_1;

                if (edx_1 == temp0_1)
                {
                    if (!edx_1)
                    {
                        eax_1 = 0;
                        break;
                    }

                    edx_1 = eax_2[1];
                    char temp3_1 = esi_1[1];
                    c_1 = edx_1 < temp3_1;

                    if (edx_1 == temp3_1)
                    {
                        eax_2 = &eax_2[2];
                        esi_1 = &esi_1[2];

                        if (edx_1)
                            continue;

                        eax_1 = 0;
                        break;
                    }
                }

                eax_1 = eax_2 - eax_2 + 1;
                break;
            }

            if (!eax_1)
            {
                int32_t** eax_4 = a2;
                *eax_4 = ebp;
                eax_4 = 1;
                return eax_4;
            }

            ebp = edi;
            edi = *edi;

            if (!edi)
                break;
        }
    }

    *a2 = nullptr;
    eax_1 = 0;
    return eax_1;
}
