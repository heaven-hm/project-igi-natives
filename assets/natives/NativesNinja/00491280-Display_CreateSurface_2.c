#include "00491280-Display_CreateSurface_2.h"
/* 0x00491280 Display_CreateSurface_2 full linked: callers=1 callees=10 */
char* sub_491280(char* a1, int32_t* a2)

{
    char* ebp = a1;
    int32_t eax = *(ebp + 0x1148);
    *(ebp + 0x1148) = eax + 1;
    *(ebp + eax * 0x7c + 0x1dc) = a2[9] * 0x3e8;
    *(ebp + eax * 0x7c + 0x1e0) = a2[0xa] * 0x3e8;
    *(ebp + eax * 0x7c + 0x1d4) = a2[4];
    *(ebp + eax * 0x7c + 0x1e4) = a2[0xb] * 0x3e8;
    *(ebp + eax * 0x7c + 0x1d8) = a2[5];
    *(ebp + eax * 0x7c + 0x1e8) = a2[0xc] * 0x3e8;
    *(ebp + eax * 0x7c + 0x1f0) = a2[6];
    *(ebp + eax * 0x7c + 0x1f4) = a2[7];
    *(ebp + eax * 0x7c + 0x1f8) = a2[8];
    *(ebp + eax * 0x7c + 0x1cc) = a2[2];
    *(ebp + eax * 0x7c + 0x1d0) = a2[3];
    *(ebp + eax * 0x7c + 0x1c8) = a2[1];
    ebp[eax * 0x7c + 0x240] = a2[0xd];
    void* edx_7 = *a2;
    void* edi = edx_7;
    int32_t i = 0xffffffff;

    while (i)
    {
        bool cond:0_1 = 0 != *edi;
        edi += 1;
        i -= 1;

        if (!cond:0_1)
            break;
    }

    int32_t eax_19;
    int32_t edx_8;

    if (~i - 1 < 0x80)
        eax_19 = sub_4b64e0(edx_7);

    if (~i - 1 >= 0x80 || !eax_19)
    {
        int32_t edi_5 = *a2;
        int32_t i_1 = 0xffffffff;

        while (i_1)
        {
            bool cond:1_1 = 0 != *edi_5;
            edi_5 += 1;
            i_1 -= 1;

            if (!cond:1_1)
                break;
        }

        char* eax_25 = Mem_Alloc(~i_1 + 4, 4);
        *(ebp + eax * 0x7c + 0x1fc) = eax_25;
        int32_t var_24_2 = *a2;
        Game_DataSymbolLoad(eax_25, "RM: %s");
    }
    else
    {
        void* ecx_10 = *a2;
        void* var_20 = ecx_10;
        a1 = nullptr;
        int32_t* edi_1 = Resource_Load(&a1, edx_8, ecx_10, &a1);
        a2 = edi_1;

        if (edi_1)
        {
            void* eax_22 = Mem_Alloc(a1, 4);
            int32_t i_2 = 0xffffffff;
            *(ebp + eax * 0x7c + 0x1fc) = eax_22;

            while (i_2)
            {
                bool cond:3_1 = 0 != *edi_1;
                edi_1 += 1;
                i_2 -= 1;

                if (!cond:3_1)
                    break;
            }

            int32_t ecx_11 = ~i_2;
            int32_t esi_2;
            int32_t edi_4;
            edi_4 = memcpy(eax_22, edi_1 - ecx_11, ecx_11 & 0xfffffffc);
            memcpy(edi_4, esi_2, ecx_11 & 3);
            Resource_Flush(a2);
        }
    }

    return sub_491420(ebp, &ebp[eax * 0x7c + 0x1c8]);
}
