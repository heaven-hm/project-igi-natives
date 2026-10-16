#include "004CE620-DynObj_LookupHashItem_12.h"
/* 0x004ce620 DynObj_LookupHashItem_12 full linked: callers=4 callees=3 */
int32_t sub_4ce620(int32_t a1, int32_t a2)

{
    int32_t eax = a2;
    int32_t ebx = a1;

    if (!*(ebx + (eax << 2) + 0xe8))
    {
        void* eax_1 = *(ebx + (eax << 2) + 0x10);
        int32_t ecx_4 = -(*(ebx + 0xde4));
        int32_t ecx_5 = *(ebx + 0xde8);
        double var_30 = -(*(ebx + 0xde0));
        int32_t ecx_7 = 0;
        ecx_7 = *(eax_1 + 0x30);
        double var_28_1 = ecx_4;
        void var_70;
        int32_t* edx_1 = &var_70;
        double var_20_1 = -(ecx_5);
        memcpy(&var_70, eax_1, 0x40);
        int32_t i = 0;
        void var_48;
        int32_t* var_10_1 = &var_48;
        int32_t var_14_1 = 0x1e;
        char var_40 = 0;
        int32_t var_8_1 = 7;
        void var_64;
        int32_t* edi_1 = &var_64;
        a1 = eax_1 + 0xc;
        int32_t* var_c_1 = eax_1 + 0x28;

        do
        {
            *edi_1 = *var_c_1;
            *var_10_1 = *a1;
            var_40 |= (ecx_7 >> (i & 0x1f) & 1) << (var_8_1 & 0x1f);
            i += 1;
            a1 += 4;
            edi_1 = &edi_1[1];
            var_8_1 -= 1;
            var_c_1 -= 4;
            var_10_1 -= 4;
        } while (i < 4);

        if (var_40)
        {
            uint32_t eax_12 = var_40;
            int32_t var_44;

            if ((~(eax_12 - 1) & eax_12) == eax_12 && !var_44)
            {
                char* esi_2 = &var_40;

                do
                {
                    int32_t eax_14 = 0;
                    eax_14 = *esi_2;
                    int32_t eflags_1;
                    int32_t eax_15;
                    eax_15 = __bsf_gprv_memv(eax_14);
                    edx_1 = edx_1[eax_15 + 3];
                    int32_t ecx_25 = *edx_1;
                    var_30 = ((eax_15 & 1) * 2 - 1) * ecx_25 + var_30;
                    var_28_1 = ((eax_15 & 2) - 1) * ecx_25 + var_28_1;
                    char eax_21 = edx_1[0xc];
                    var_14_1 -= 1;
                    esi_2 = &edx_1[0xc];
                    var_20_1 = ((eax_15 >> 1 & 2) - 1) * ecx_25 + var_20_1;

                    if (!eax_21)
                        break;

                    uint32_t eax_22 = eax_21;

                    if ((~(eax_22 - 1) & eax_22) != eax_22)
                        break;
                } while (!edx_1[0xb]);

                *(ebx + (a2 << 2) + 0x28) = edx_1;
                memcpy(ebx + a2 * 0x18 + 0x40, &var_30, 0x18);
                *(ebx + (a2 << 2) + 0xd0) = var_14_1;
                *(ebx + (a2 << 2) + 0xe8) = 1;
                return a2;
            }
        }

        eax = a2;
        *(ebx + (eax << 2) + 0x28) = *(ebx + (eax << 2) + 0x10);
        memcpy(ebx + eax * 0x18 + 0x40, &var_30, 0x18);
        *(ebx + (eax << 2) + 0xd0) = 0x1e;
        *(ebx + (eax << 2) + 0xe8) = 1;
    }

    return eax;
}
