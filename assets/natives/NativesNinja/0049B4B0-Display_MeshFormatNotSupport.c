#include "0049B4B0-Display_MeshFormatNotSupport.h"
/* 0x0049b4b0 Display_MeshFormatNotSupport full linked: callers=3 callees=7 */
void* sub_49b4b0(void* a1)

{
    int32_t* ebx = a1 * 0xfa8 + &g_7205c0;
    int32_t edx_1 = *((a1 << 2) + &g_543cb8);
    int32_t* var_18 = ebx;
    int32_t ecx_4;

    if (!g_bcad74)
        ecx_4 = *((a1 << 2) + &g_543cc4);
    else
        ecx_4 = *((a1 << 2) + &g_543cd0);

    int32_t eax_1 = g_72350c;
    g_72350c = eax_1 + 1;
    int32_t* eax_3 = ebx[0x3e8];
    int32_t* eax_4 = g_5ca110;
    void* esi_1 = eax_1 * 0x24 + &g_7ac0a0;
    int32_t var_10 = 0x10;
    a1 = esi_1;
    (*(*eax_4 + 0x14))(eax_4, &var_10, esi_1, 0);
    int32_t ebp = 0;
    void* i_1 = nullptr;
    *(esi_1 + 4) = var_10;
    *(esi_1 + 8) = ecx_4;
    *(esi_1 + 0xc) = edx_1;
    *(esi_1 + 0x1c) = 0;
    *(esi_1 + 0x10) = eax_3;
    void* i = esi_1 + 0x1c;
    *(esi_1 + 0x18) = i;
    *(esi_1 + 0x20) = esi_1 + 0x18;

    if (ebx[0x3e9] > 0)
    {
        int32_t* var_24_1 = ebx;

        do
        {
            void* eax_7 = *var_24_1;
            int32_t ecx_9 = *(eax_7 + 0x20);
            int32_t eax_16;

            if (!ecx_9)
            {
                void* ebx_2 = *(eax_7 + 0x24);
                int16_t edx_7 = *(ebx_2 + 0xc);
                int32_t eax_17 = *(ebx_2 + 0x10);
                *(ebx_2 + 0x24) = ebp;
                *(ebx_2 + 0x26) = edx_7;
                *(ebx_2 + 0x28) = esi_1;
                *(ebx_2 + 0x20) = 1;
                *(ebx_2 + 0x2c) = eax_17;
                int32_t var_1c = 0;
                int32_t* eax_18 = **(ebx_2 + 0x28);
                (*(*eax_18 + 0xc))(eax_18, 0x20, &var_1c, 0);
                int32_t ecx_24 = *(ebx_2 + 0xc) << 5;
                int32_t esi_5;
                int32_t edi_6;
                edi_6 = memcpy((ebp << 5) + var_1c, *(ebx_2 + 0x10), ecx_24 & 0xfffffffc);
                memcpy(edi_6, esi_5, ecx_24 & 3);
                int32_t* eax_20 = **(ebx_2 + 0x28);
                (*(*eax_20 + 0x10))(eax_20);
                *(a1 + 0x14) = 0x20;
                sub_4af8f0(a1 + 0x18, ebx_2 + 0x18);
                eax_16 = *(ebx_2 + 0xc);
            label_49b6a7:
                esi_1 = a1;
                ebx = var_18;
                ebp += eax_16;
            }
            else if (ecx_9 != 1)
            {
                if (ecx_9 != 3)
                {
                    Error_Show("Mesh format not supported");

                    while (true)
                        /* nop */
                }
                else
                {
                    void* ebx_1 = *(eax_7 + 0x24);
                    int16_t ecx_13 = *(ebx_1 + 0x10);
                    int32_t edx_4 = *(ebx_1 + 0x14);
                    *(ebx_1 + 0x2c) = ebp;
                    *(ebx_1 + 0x2e) = ecx_13;
                    *(ebx_1 + 0x30) = esi_1;
                    *(ebx_1 + 0x28) = 1;
                    *(ebx_1 + 0x34) = edx_4;
                    int32_t var_20 = 0;
                    int32_t* eax_9 = **(ebx_1 + 0x30);
                    (*(*eax_9 + 0xc))(eax_9, 0x20, &var_20, 0);
                    int32_t ecx_16 = *(ebx_1 + 0x10) * 0x28;
                    int32_t esi_3;
                    int32_t edi_2;
                    edi_2 =
                        memcpy(var_20 + ebp * 0x28, *(ebx_1 + 0x14), ecx_16 & 0xfffffffc);
                    memcpy(edi_2, esi_3, ecx_16 & 3);
                    int32_t* eax_13 = **(ebx_1 + 0x30);
                    (*(*eax_13 + 0x10))(eax_13);
                    *(a1 + 0x14) = 0x28;
                    sub_4af8f0(a1 + 0x18, ebx_1 + 0x20);
                    eax_16 = *(ebx_1 + 0x10);
                }

                goto label_49b6a7;
            }
            i = i_1 + 1;
            i_1 = i;
            var_24_1 = &var_24_1[1];
        } while (i < ebx[0x3e9]);
    }

    ebx[0x3e9] = 0;
    ebx[0x3e8] = 0;
    return i;
}
