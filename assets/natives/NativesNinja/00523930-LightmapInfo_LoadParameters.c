#include "00523930-LightmapInfo_LoadParameters.h"
/* 0x00523930 LightmapInfo_LoadParameters full linked: callers=0 callees=13 */
int32_t sub_523930(void* a1)

{
    void* esi = a1;
    int32_t i_1 = 0;
    void* ebx = *(esi + 0x14);
    int32_t edi = 0;
    bool cond:0 = *(esi + 0xcc);
    *(esi + 0x8c) = 0x3f800000;
    a1 = nullptr;
    int32_t var_18 = 0;

    if (!cond:0 && *(esi + 0x98) != 0x3f800000)
        edi = 1;

    if (*(esi + 0x70) || *(esi + 0x6f) || *(esi + 0x71))
    {
        int32_t* eax_2 = *(esi + 0x88);
        var_18 = 1;

        if (eax_2)
        {
            int32_t i_5 = *eax_2;

            if (i_5 > 0)
            {
                int32_t* ecx_1 = &eax_2[6];
                int32_t i;

                do
                {
                    void* eax_3 = *ecx_1;

                    if (eax_3 && !*(eax_3 + 0x38))
                        a1 = 1;

                    ecx_1 = &ecx_1[9];
                    i = i_5;
                    i_5 -= 1;
                } while (i != 1);
            }
        }
    }

    *(esi + 0xcc) = 0;
    void* eax_5 = a1 | edi;
    int32_t var_8 = *(esi + 0x88);
    uint32_t eax_8 = sub_4cfc90();
    int32_t edx_1 = 0;
    edx_1 = *(ebx + 0x1c);
    (*(((eax_8 * 0x180 + edx_1) << 2) + &g_a96ae0))(ebx, &var_8);
    int32_t var_4;
    long double x87_r7_1;
    long double temp0_1;

    if (var_4)
    {
        x87_r7_1 = *(esi + 0x98);
        temp0_1 = *(esi + 0x8c);
        x87_r7_1 - temp0_1;
    }

    if (!var_4 || !(*(&((x87_r7_1 < temp0_1 ? 1 : 0) << 8
        | (FCMP_UO(x87_r7_1, temp0_1) ? 1 : 0) << 0xa | (x87_r7_1 == temp0_1 ? 1 : 0) << 0xe) + 1)
        & 0x40) || eax_5 || *(esi + 0xdc))
    {
        int32_t* edi_1 = *(esi + 0x88);

        if (edi_1 && *edi_1 > 0)
        {
            int32_t ebx_1 = 0;

            do
            {
                void* eax_12 = *(ebx_1 + edi_1 + 0x18);

                if (eax_12)
                {
                    sub_5237e0(eax_12);
                    *(ebx_1 + edi_1 + 0x18) = 0;
                }

                edi_1 = *(esi + 0x88);
                i_1 += 1;
                ebx_1 += 0x24;
            } while (i_1 < *edi_1);
        }

        int32_t* eax_13 = *(esi + 0xc8);

        if (eax_13)
        {
            sub_523670(eax_13);
            *(esi + 0xc8) = 0;
        }

        int32_t var_14 = *(esi + 0x88);

        if (sub_48f230())
        {
            uint32_t eax_16 = sub_4cfc70();
            int32_t ecx_5 = 0;
            ecx_5 = *(ebx + 0x1c);
            (*(((eax_16 * 0x180 + ecx_5) << 2) + &g_a96ae0))(ebx, &var_14);
        }

        int32_t eax_21 = var_14;
        *(esi + 0x88) = eax_21;

        if (eax_21)
        {
            *(esi + 0xa8) = 0;
            *(esi + 0xac) = 0;
            g_a83b4c = 0;
            g_a839f4 = 0;
            int32_t* edi_2 = *(esi + 0x88);
            int32_t i_2 = 0;
            int32_t i_4 = 0;

            if (*edi_2 > 0)
            {
                int32_t ebp = 0;

                do
                {
                    int32_t eax_25;

                    if (eax_5 || *(esi + 0xdc) || var_18)
                        eax_25 = 1;
                    else
                        eax_25 = 0;

                    int32_t ecx_6 = *(edi_2 + ebp + 0x30);
                    int32_t var_2c_4 = *(esi + 0x94);
                    int32_t var_30_2 = var_18;
                    int32_t var_40_1 = ecx_6;
                    float var_40_2 = (1 << (ecx_6 & 0x1f)) * *(esi + 0x8c) * 4096f;
                    int32_t* eax_28 =
                        sub_523d40(*(edi_2 + ebp + 0x1c), ecx_6, esi + 0x78, i_2, eax_25);
                    int32_t j = 0;
                    *(edi_2 + ebp + 0x18) = eax_28;
                    *(edi_2 + ebp + 0x38) = 0;

                    if (eax_28 && eax_28[0xb] > 0)
                    {
                        int32_t* ecx_8 = eax_28;
                        int32_t eax_29 = 0;

                        do
                        {
                            *(esi + 0xac) += *(eax_29 + ecx_8 + 0x66) * *(eax_29 + ecx_8 + 0x64);
                            void* ecx_13 = *(edi_2 + ebp + 0x18) + eax_29;
                            eax_29 += 0x2c;
                            j += 1;
                            *(esi + 0xa8) += *(ecx_13 + 0x66) * *(ecx_13 + 0x64);
                            ecx_8 = *(edi_2 + ebp + 0x18);
                        } while (j < ecx_8[0xb]);

                        i_2 = i_4;
                    }

                    edi_2 = *(esi + 0x88);
                    i_2 += 1;
                    ebp += 0x24;
                    i_4 = i_2;
                } while (i_2 < *edi_2);
            }

            int32_t i_3 = 0;
            *(esi + 0xc0) = g_a83b4c;
            *(esi + 0xc4) = g_a839f4;
            int32_t* eax_31 = *(esi + 0x88);

            if (*eax_31 > 0)
            {
                int32_t ebp_1 = 0;

                do
                {
                    if (eax_31 + ebp_1 + 0x18)
                    {
                        void* edi_3 = *(eax_31 + ebp_1 + 0x20);
                        uint32_t eax_34 = sub_4cfca0();
                        int32_t edx_6 = 0;
                        edx_6 = *(edi_3 + 0x1c);
                        (*(((eax_34 * 0x180 + edx_6) << 2) + &g_a96ae0))(edi_3, 0);
                    }

                    eax_31 = *(esi + 0x88);
                    i_3 += 1;
                    ebp_1 += 0x24;
                } while (i_3 < *eax_31);
            }

            int32_t var_2c_5 = *(esi + 0x88);
        }
    }

    int32_t result = *(esi + 0x88);
    *(esi + 0x98) = *(esi + 0x8c);
    *(esi + 0xdc) = 0;

    if (result)
    {
        result = *(esi + 0x6f);

        if (result)
        {
        label_523c91:
            *(esi + 0xbc) = sub_523110(*(esi + 0xa4));
            int32_t* eax_38 = *(esi + 0xc8);

            if (eax_38)
            {
                sub_523670(eax_38);
                *(esi + 0xc8) = 0;
            }

            void* var_2c_8 = esi;
            *(esi + 0xc8) = 0;
            *(esi + 0xb0) = 0;
            result = sub_5233a0(*(esi + 0xbc));
            *(esi + 0xbc) = 0;
        }
        else
        {
            result = *(esi + 0x70);

            if (result)
                goto label_523c91;
        }

        result = *(esi + 0x71);

        if (result)
        {
            int32_t var_2c_10 = *(esi + 0xb4);
            void* var_30_4 = esi;
        }
    }

    return result;
}
