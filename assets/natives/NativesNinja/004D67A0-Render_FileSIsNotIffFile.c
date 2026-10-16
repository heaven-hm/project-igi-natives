#include "004D67A0-Render_FileSIsNotIffFile.h"
/* 0x004d67a0 Render_FileSIsNotIffFile full linked: callers=2 callees=62 */
int32_t sub_4d67a0(int32_t* a1)

{
    int32_t* __saved_ebp = a1;
    int32_t eax;
    void* ecx;
    int32_t edx;
    int32_t* edi = sub_517a00(Resource_Load(eax, edx, ecx, nullptr));

    if (!edi)
    {
        int32_t* __saved_ebx = a1;
        return Warning_Show("File %s is not IFF file.");
    }

    void** eax_4 = sub_517890(edi, 0x424f424a);

    if (!eax_4)
    {
        int32_t* __saved_ebx_1 = a1;
        return Warning_Show("IFF File %s is not of correct type.");
    }

    void** eax_6 = sub_517890(eax_4, 0x424f4248);
    int32_t* eax_8 = sub_5179c0(sub_517940(eax_6, 0x424f5348));
    int32_t* ebx = *eax_8;
    int32_t ebp = eax_8[1];

    if (ebp <= 0)
        sub_5178e0(eax_6, 0x424f4248);
    else
    {
        int32_t ebx_2 = ebx * 0xc;
        *(ebx_2 + &g_a542f0) = ebp;
        int32_t ebp_2 = ebp * 0xc;
        *(ebx_2 + &g_a542f4) = Mem_Alloc(ebp << 2, 4);
        *(ebx_2 + 0xa542f8) = Mem_Alloc(ebp_2, 4);
        void** eax_12 = sub_517940(eax_6, 0x504c5354);
        void** eax_13 = sub_517940(eax_6, 0x544c5354);
        int32_t eax_14 = sub_5179c0(eax_12);
        int32_t ecx_1 = ebp << 2;
        int32_t esi_3;
        int32_t edi_3;
        edi_3 = memcpy(*(ebx_2 + &g_a542f4), eax_14, ecx_1 & 0xfffffffc);
        memcpy(edi_3, esi_3, ecx_1 & 3);
        int32_t eax_17 = sub_5179c0(eax_13);
        int32_t esi_5;
        int32_t edi_5;
        edi_5 = memcpy(*(ebx_2 + 0xa542f8), eax_17, ebp_2 & 0xfffffffc);
        memcpy(edi_5, esi_5, ebp_2 & 3);
        void** eax_19 = sub_5178e0(eax_6, 0x424f414c);
        sub_5178e0(eax_19, 0x424f4248);
        void** eax_20 = sub_517940(eax_19, 0x42414c48);
        int32_t* eax_21 = sub_5179c0(eax_20);
        int32_t ecx_9 = *eax_21;
        int32_t esi_7 = eax_21[1];
        int32_t ebx_5 = ebx * 0x28;
        *(ebx_5 + 0xa53914) = esi_7;
        int32_t esi_8 = esi_7 << 2;
        *(ebx_5 + &g_a538f0) = Mem_Alloc(esi_7 * 0x14, 4);
        void* eax_23 = Mem_Alloc(esi_8, 4);
        *(ebx_5 + &g_a538f4) = eax_23;
        __builtin_memset(__builtin_memset(eax_23, 0, esi_8 & 0xfffffffc), 0, esi_8 & 3);
        void** edi_8 = eax_20;

        if (ecx_9 > 0)
        {
            int32_t var_2c_2 = ecx_9;
            int32_t esi_10 = ebp << 4;
            int32_t var_24_1 = esi_10;

            while (true)
            {
                edi_8 = sub_5178e0(edi_8, 0x424f414e);
                void** var_34_1 = edi_8;
                int32_t* eax_27 = sub_5179c0(sub_517940(edi_8, 0x424f4148));
                int32_t edx_6 = *eax_27;
                int32_t eax_28 = eax_27[1];
                int32_t ebp_4 = eax_27[2];
                *(*(ebx_5 + &g_a538f4) + (ebp_4 << 2)) = *(ebx_5 + &g_a538f0) + ebp_4 * 0x14;
                **(*(ebx_5 + &g_a538f4) + (ebp_4 << 2)) = edx_6;
                *(*(*(ebx_5 + &g_a538f4) + (ebp_4 << 2)) + 4) = eax_28;
                *(*(*(ebx_5 + &g_a538f4) + (ebp_4 << 2)) + 8) = Mem_Alloc(8, 4);
                *(*(*(ebx_5 + &g_a538f4) + (ebp_4 << 2)) + 0xc) = Mem_Alloc(esi_10, 4);
                *(*(*(ebx_5 + &g_a538f4) + (ebp_4 << 2)) + 0x10) = 0;
                void** eax_32 = sub_517940(edi_8, 0x424f5448);
                int32_t esi_11 = *sub_5179c0(eax_32);
                **(*(*(ebx_5 + &g_a538f4) + (ebp_4 << 2)) + 8) = esi_11;
                void** eax_44;

                if (esi_11 <= 0)
                    eax_44 = eax_32;
                else
                {
                    void** eax_35 = sub_517940(edi_8, 0x424f5444);
                    int32_t ecx_26;
                    int32_t esi_12;
                    int32_t edi_10;

                    if (esi_11 <= 1)
                    {
                        int32_t esi_13 = esi_11 << 4;
                        *(*(*(*(ebx_5 + &g_a538f4) + (ebp_4 << 2)) + 8) + 4) =
                            Mem_Alloc(esi_13, 4);
                        esi_12 = sub_5179c0(eax_35);
                        edi_10 = *(*(*(*(ebx_5 + &g_a538f4) + (ebp_4 << 2)) + 8) + 4);
                        ecx_26 = esi_13;
                    }
                    else
                    {
                        int32_t eax_37 = esi_11 * 0x28;
                        *(*(*(*(ebx_5 + &g_a538f4) + (ebp_4 << 2)) + 8) + 4) =
                            Mem_Alloc(eax_37, 4);
                        esi_12 = sub_5179c0(eax_35);
                        edi_10 = *(*(*(*(ebx_5 + &g_a538f4) + (ebp_4 << 2)) + 8) + 4);
                        ecx_26 = eax_37;
                    }

                    eax_44 = eax_35;
                    int32_t esi_14;
                    int32_t edi_11;
                    edi_11 = memcpy(edi_10, esi_12, ecx_26 & 0xfffffffc);
                    memcpy(edi_11, esi_14, ecx_26 & 3);
                    edi_8 = var_34_1;
                }

                if (ebp > 0)
                {
                    int32_t edi_12 = 0;
                    int32_t var_30_4 = ebp;
                    int32_t var_38_2 = 0;

                    while (true)
                    {
                        int32_t* eax_45 = sub_517980(eax_44, 0x424f5248);
                        int32_t esi_15 = *sub_5179c0(eax_45);
                        *(*(*(*(ebx_5 + &g_a538f4) + (ebp_4 << 2)) + 0xc) + edi_12) = esi_15;

                        if (esi_15 <= 1)
                            *(*(*(*(ebx_5 + &g_a538f4) + (ebp_4 << 2)) + 0xc) + edi_12 + 4) =
                                Mem_Alloc(esi_15 * 0x14, 4);
                        else
                            *(*(*(*(ebx_5 + &g_a538f4) + (ebp_4 << 2)) + 0xc) + edi_12 + 4) =
                                Mem_Alloc(esi_15 * 0x34, 4);

                        *(*(*(*(ebx_5 + &g_a538f4) + (ebp_4 << 2)) + 0xc) + edi_12 + 8) = 0;
                        *(*(*(*(ebx_5 + &g_a538f4) + (ebp_4 << 2)) + 0xc) + edi_12 + 0xc) = 0;
                        int32_t* eax_55 = sub_517980(eax_45, 0x424f5244);
                        int32_t ecx_49;
                        int32_t esi_19;
                        int32_t edi_14;

                        if (esi_15 <= 1)
                        {
                            int32_t esi_21 = esi_15 * 0x14;
                            int32_t eax_59 = sub_5179c0(eax_55);
                            edi_14 = memcpy(
                                *(*(*(*(ebx_5 + &g_a538f4) + (ebp_4 << 2)) + 0xc) + edi_12 + 4),
                                eax_59, esi_21 & 0xfffffffc);
                            ecx_49 = esi_21;
                        }
                        else
                        {
                            int32_t esi_17 = esi_15 * 0x34;
                            int32_t eax_56 = sub_5179c0(eax_55);
                            edi_14 = memcpy(
                                *(*(*(*(ebx_5 + &g_a538f4) + (ebp_4 << 2)) + 0xc) + edi_12 + 4),
                                eax_56, esi_17 & 0xfffffffc);
                            ecx_49 = esi_17;
                        }

                        eax_44 = eax_55;
                        memcpy(edi_14, esi_19, ecx_49 & 3);
                        var_38_2 += 0x10;
                        bool cond:7_1 = var_30_4 != 1;
                        var_30_4 -= 1;

                        if (!cond:7_1)
                            break;

                        edi_12 = var_38_2;
                    }

                    edi_8 = var_34_1;
                }

                int32_t esi_23 = *sub_5179c0(sub_517940(edi_8, 0x424f4548));

                if (esi_23 > 0)
                {
                    *(*(*(ebx_5 + &g_a538f4) + (ebp_4 << 2)) + 0x10) = Mem_Alloc(8, 4);
                    int32_t eax_66 = esi_23 * 0x18;
                    **(*(*(ebx_5 + &g_a538f4) + (ebp_4 << 2)) + 0x10) = esi_23;
                    *(*(*(*(ebx_5 + &g_a538f4) + (ebp_4 << 2)) + 0x10) + 4) =
                        Mem_Alloc(eax_66, 4);
                    int32_t eax_69 = sub_5179c0(sub_517940(edi_8, 0x424f4544));
                    int32_t esi_25;
                    int32_t edi_17;
                    edi_17 = memcpy(
                        *(*(*(*(ebx_5 + &g_a538f4) + (ebp_4 << 2)) + 0x10) + 4), eax_69,
                        eax_66 & 0xfffffffc);
                    memcpy(edi_17, esi_25, eax_66 & 3);
                    edi_8 = var_34_1;
                }

                bool cond:4_1 = var_2c_2 != 1;
                var_2c_2 -= 1;

                if (!cond:4_1)
                    break;

                esi_10 = var_24_1;
            }
        }
    }

    sub_4d6d40(ebx);
    sub_517840(edi);
    return Resource_Unload(a1);
}
