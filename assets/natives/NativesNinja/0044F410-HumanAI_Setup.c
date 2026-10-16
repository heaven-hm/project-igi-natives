#include "0044F410-HumanAI_Setup.h"
/* 0x0044f410 HumanAI_Setup full linked: callers=0 callees=62 */
void* sub_44f410(int32_t a1)

{
    struct ai_ctx* ebp = a1;
    __builtin_memset(&ebp->pad[0x3c74], 0, 0xa0);
    uint8_t var_51 = 0;
    a1 = DEBUG_KEYSENABLEINVALID(0x37);
    *(ebp + 0x3cc0) = a1;
    float ebx;
    ebx = ebp->pad[0x14];
    *(&ebx + 1) = ebp->pad[0x15];
    *(&ebx + 2) = ebp->pad[0x16];
    *(&ebx + 3) = ebp->pad[0x17];
    float var_3c;
    float* eax_1 = sub_48a340(&var_3c, ebx, 0);
    float var_48 = *eax_1;
    int32_t ecx_1 = *(ebx + 0x20);
    int32_t var_44 = eax_1[1];
    float eax_2 = eax_1[2];
    ebp->pad[0x20] = ecx_1;
    ebp->pad[0x21] = *(&ecx_1 + 1);
    ebp->pad[0x22] = *(&ecx_1 + 2);
    ebp->pad[0x23] = *(&ecx_1 + 3);
    int32_t edx_1 = *(ebx + 0x24);
    ebp->pad[0x24] = edx_1;
    ebp->pad[0x25] = *(&edx_1 + 1);
    ebp->pad[0x26] = *(&edx_1 + 2);
    ebp->pad[0x27] = *(&edx_1 + 3);
    int32_t eax_3 = *(ebx + 0x28);
    ebp->pad[0x28] = eax_3;
    ebp->pad[0x29] = *(&eax_3 + 1);
    ebp->pad[0x2a] = *(&eax_3 + 2);
    ebp->pad[0x2b] = *(&eax_3 + 3);
    int32_t ecx_2 = *(ebx + 0x2c);
    ebp->pad[0x2c] = ecx_2;
    ebp->pad[0x2d] = *(&ecx_2 + 1);
    ebp->pad[0x2e] = *(&ecx_2 + 2);
    ebp->pad[0x2f] = *(&ecx_2 + 3);
    ebp->pad[0x30] = *(ebx + 0x30) - eax_2;
    memcpy(&ebp->pad[0x50], ebx + 0x78, 0x28);
    sub_465800(&ebp->pad[0x38], *(ebx + 0x4ec));
    int32_t* edx_3 = &ebp->pad[0x78];
    sub_465880(edx_3, *(ebx + 0x4ec));
    sub_465920(*(ebx + 0x4ec), 0, 0);

    if (!*(ebp + 0x3c70))
    {
        int32_t var_6c_1 = sub_4f1050(ebp);
        return Warning_Show("No AI script in HumanAI #%d");
    }

    if (!*(ebp + 0x3b6c))
    {
        int32_t var_6c_2 = sub_4f1050(ebp);
        return Warning_Show("No AI graph in HumanAI #%d");
    }

    int32_t var_50;
    int32_t var_30;

    if (*(ebp + 0x3d14))
    {
        if (sub_451330(ebp) && !ebp->pad[0x3aba])
        {
            int32_t* i_3;
            i_3 = ebp->pad[0x8fc];
            *(&i_3 + 1) = ebp->pad[0x8fd];
            *(&i_3 + 2) = ebp->pad[0x8fe];
            *(&i_3 + 3) = ebp->pad[0x8ff];
            a1 = 0xffffffff;

            for (int32_t* i = *i_3; i; i = *i)
            {
                sub_450ff0(ebp, i_3);
                i_3 = i;
            }

            int32_t ecx_7;
            ecx_7 = ebp->pad[0x8dc];
            *(&ecx_7 + 1) = ebp->pad[0x8dd];
            *(&ecx_7 + 2) = ebp->pad[0x8de];
            *(&ecx_7 + 3) = ebp->pad[0x8df];
            int32_t eax_19 = 0;

            if (ecx_7 > 0)
            {
                uint8_t* edx_5 = &ebp->pad[0x81c];

                do
                {
                    if (ADJ(edx_5)->pad[0x81c] == 2)
                        a1 = eax_19;

                    eax_19 += 1;
                    edx_5 = &edx_5[4];
                } while (eax_19 < ecx_7);
            }

            int32_t var_28_2 = 2;
            int32_t var_2c_2 = 0;
            var_30 = 0;
            sub_4af8f0(&ebp->pad[0x708], &var_30);
            sub_44fc90(ebp, 2, a1);
            edx_3 = sub_4af960(&var_30);
            ebp->pad[0x3aba] = sub_451330(ebp);
        }

        if (!sub_451330(ebp))
        {
            int32_t eax_24;
            eax_24 = ebp->pad[0xa0];
            *(&eax_24 + 1) = ebp->pad[0xa1];
            *(&eax_24 + 2) = ebp->pad[0xa2];
            *(&eax_24 + 3) = ebp->pad[0xa3];
            ebp->pad[0x3a30] = *(*(ebx + 0x70) + 0x2ac) + *(ebx + 0x20);
            ebp->pad[0x3a38] = *(*(ebx + 0x70) + 0x2b0) + *(ebx + 0x28);
            int32_t edx_7;
            edx_7 = ebp->pad[0xa8];
            *(&edx_7 + 1) = ebp->pad[0xa9];
            *(&edx_7 + 2) = ebp->pad[0xaa];
            *(&edx_7 + 3) = ebp->pad[0xab];
            ebp->pad[0x3a40] = *(*(ebx + 0x70) + 0x2b4) + *(ebx + 0x30);
            memcpy(&ebp->pad[0x3a48], *(ebx + 0x70) + 0x2b8, 0x28);
            int32_t ecx_10;
            ecx_10 = ebp->pad[0xa4];
            *(&ecx_10 + 1) = ebp->pad[0xa5];
            *(&ecx_10 + 2) = ebp->pad[0xa6];
            *(&ecx_10 + 3) = ebp->pad[0xa7];
            ebp->pad[0x3a70] = eax_24;
            ebp->pad[0x3a71] = *(&eax_24 + 1);
            ebp->pad[0x3a72] = *(&eax_24 + 2);
            ebp->pad[0x3a73] = *(&eax_24 + 3);
            int32_t eax_25;
            eax_25 = ebp->pad[0xac];
            *(&eax_25 + 1) = ebp->pad[0xad];
            *(&eax_25 + 2) = ebp->pad[0xae];
            *(&eax_25 + 3) = ebp->pad[0xaf];
            ebp->pad[0x3a78] = edx_7;
            ebp->pad[0x3a79] = *(&edx_7 + 1);
            ebp->pad[0x3a7a] = *(&edx_7 + 2);
            ebp->pad[0x3a7b] = *(&edx_7 + 3);
            int32_t edx_8;
            edx_8 = ebp->pad[0xc4];
            *(&edx_8 + 1) = ebp->pad[0xc5];
            *(&edx_8 + 2) = ebp->pad[0xc6];
            *(&edx_8 + 3) = ebp->pad[0xc7];
            ebp->pad[0x3a7c] = eax_25;
            ebp->pad[0x3a7d] = *(&eax_25 + 1);
            ebp->pad[0x3a7e] = *(&eax_25 + 2);
            ebp->pad[0x3a7f] = *(&eax_25 + 3);
            int32_t eax_26;
            eax_26 = ebp->pad[0xc8];
            *(&eax_26 + 1) = ebp->pad[0xc9];
            *(&eax_26 + 2) = ebp->pad[0xca];
            *(&eax_26 + 3) = ebp->pad[0xcb];
            ebp->pad[0x3a74] = ecx_10;
            ebp->pad[0x3a75] = *(&ecx_10 + 1);
            ebp->pad[0x3a76] = *(&ecx_10 + 2);
            ebp->pad[0x3a77] = *(&ecx_10 + 3);
            int32_t ecx_11;
            ecx_11 = ebp->pad[0xc0];
            *(&ecx_11 + 1) = ebp->pad[0xc1];
            *(&ecx_11 + 2) = ebp->pad[0xc2];
            *(&ecx_11 + 3) = ebp->pad[0xc3];
            ebp->pad[0x3a90] = eax_26;
            ebp->pad[0x3a91] = *(&eax_26 + 1);
            ebp->pad[0x3a92] = *(&eax_26 + 2);
            ebp->pad[0x3a93] = *(&eax_26 + 3);
            uint8_t eax_27 = ebp->pad[0x3abb];
            ebp->pad[0x3a88] = ecx_11;
            ebp->pad[0x3a89] = *(&ecx_11 + 1);
            ebp->pad[0x3a8a] = *(&ecx_11 + 2);
            ebp->pad[0x3a8b] = *(&ecx_11 + 3);
            int32_t ecx_12;
            ecx_12 = ebp->pad[0xcc];
            *(&ecx_12 + 1) = ebp->pad[0xcd];
            *(&ecx_12 + 2) = ebp->pad[0xce];
            *(&ecx_12 + 3) = ebp->pad[0xcf];
            ebp->pad[0x3a8c] = edx_8;
            ebp->pad[0x3a8d] = *(&edx_8 + 1);
            ebp->pad[0x3a8e] = *(&edx_8 + 2);
            ebp->pad[0x3a8f] = *(&edx_8 + 3);
            ebp->pad[0x3a94] = ecx_12;
            ebp->pad[0x3a95] = *(&ecx_12 + 1);
            ebp->pad[0x3a96] = *(&ecx_12 + 2);
            ebp->pad[0x3a97] = *(&ecx_12 + 3);

            if (!eax_27)
            {
                int32_t eax_29;
                eax_29 = ebp->pad[0xb0];
                *(&eax_29 + 1) = ebp->pad[0xb1];
                *(&eax_29 + 2) = ebp->pad[0xb2];
                *(&eax_29 + 3) = ebp->pad[0xb3];
                int32_t edx_11;
                edx_11 = ebp->pad[0xd0];
                *(&edx_11 + 1) = ebp->pad[0xd1];
                *(&edx_11 + 2) = ebp->pad[0xd2];
                *(&edx_11 + 3) = ebp->pad[0xd3];
                int32_t ecx_14;
                ecx_14 = ebp->pad[0xb4];
                *(&ecx_14 + 1) = ebp->pad[0xb5];
                *(&ecx_14 + 2) = ebp->pad[0xb6];
                *(&ecx_14 + 3) = ebp->pad[0xb7];
                ebp->pad[0x3a80] = eax_29;
                ebp->pad[0x3a81] = *(&eax_29 + 1);
                ebp->pad[0x3a82] = *(&eax_29 + 2);
                ebp->pad[0x3a83] = *(&eax_29 + 3);
                int32_t eax_30;
                eax_30 = ebp->pad[0xd4];
                *(&eax_30 + 1) = ebp->pad[0xd5];
                *(&eax_30 + 2) = ebp->pad[0xd6];
                *(&eax_30 + 3) = ebp->pad[0xd7];
                ebp->pad[0x3a98] = edx_11;
                ebp->pad[0x3a99] = *(&edx_11 + 1);
                ebp->pad[0x3a9a] = *(&edx_11 + 2);
                ebp->pad[0x3a9b] = *(&edx_11 + 3);
                ebp->pad[0x3a84] = ecx_14;
                ebp->pad[0x3a85] = *(&ecx_14 + 1);
                ebp->pad[0x3a86] = *(&ecx_14 + 2);
                ebp->pad[0x3a87] = *(&ecx_14 + 3);
                ebp->pad[0x3a9c] = eax_30;
                ebp->pad[0x3a9d] = *(&eax_30 + 1);
                ebp->pad[0x3a9e] = *(&eax_30 + 2);
                ebp->pad[0x3a9f] = *(&eax_30 + 3);
            }
            else
            {
                int32_t edx_9;
                edx_9 = ebp->pad[0xb8];
                *(&edx_9 + 1) = ebp->pad[0xb9];
                *(&edx_9 + 2) = ebp->pad[0xba];
                *(&edx_9 + 3) = ebp->pad[0xbb];
                int32_t ecx_13;
                ecx_13 = ebp->pad[0xd8];
                *(&ecx_13 + 1) = ebp->pad[0xd9];
                *(&ecx_13 + 2) = ebp->pad[0xda];
                *(&ecx_13 + 3) = ebp->pad[0xdb];
                int32_t eax_28;
                eax_28 = ebp->pad[0xbc];
                *(&eax_28 + 1) = ebp->pad[0xbd];
                *(&eax_28 + 2) = ebp->pad[0xbe];
                *(&eax_28 + 3) = ebp->pad[0xbf];
                ebp->pad[0x3a80] = edx_9;
                ebp->pad[0x3a81] = *(&edx_9 + 1);
                ebp->pad[0x3a82] = *(&edx_9 + 2);
                ebp->pad[0x3a83] = *(&edx_9 + 3);
                int32_t edx_10;
                edx_10 = ebp->pad[0xdc];
                *(&edx_10 + 1) = ebp->pad[0xdd];
                *(&edx_10 + 2) = ebp->pad[0xde];
                *(&edx_10 + 3) = ebp->pad[0xdf];
                ebp->pad[0x3a98] = ecx_13;
                ebp->pad[0x3a99] = *(&ecx_13 + 1);
                ebp->pad[0x3a9a] = *(&ecx_13 + 2);
                ebp->pad[0x3a9b] = *(&ecx_13 + 3);
                ebp->pad[0x3a84] = eax_28;
                ebp->pad[0x3a85] = *(&eax_28 + 1);
                ebp->pad[0x3a86] = *(&eax_28 + 2);
                ebp->pad[0x3a87] = *(&eax_28 + 3);
                ebp->pad[0x3a9c] = edx_10;
                ebp->pad[0x3a9d] = *(&edx_10 + 1);
                ebp->pad[0x3a9e] = *(&edx_10 + 2);
                ebp->pad[0x3a9f] = *(&edx_10 + 3);
            }

            ebp->pad[0x3aa0] = 1;
            edx_3 = sub_489750(&ebp->pad[0x15f8], &ebp->pad[0x3a30], ebx, sub_463130(ebx));
            int32_t* i_4;
            i_4 = ebp->pad[0x1610];
            *(&i_4 + 1) = ebp->pad[0x1611];
            *(&i_4 + 2) = ebp->pad[0x1612];
            *(&i_4 + 3) = ebp->pad[0x1613];

            for (int32_t* i_1 = *i_4; i_1; i_1 = *i_1)
            {
                if (*(i_4 + 0x29))
                {
                    edx_3 = i_4[2];
                    void* eax_34 = *edx_3;

                    if (eax_34 && !sub_463170(eax_34))
                    {
                        var_30 = 0x16;
                        int32_t var_28_3 = 0;
                        int32_t var_2c_3 = sub_463130(*i_4[2]);
                        int32_t var_18_1 = *i_4[2];
                        int32_t var_1c_1 = *i_4[2];
                        int32_t var_20_1 = sub_4c3440(*i_4[2]);
                        int32_t var_24_1 = 0;
                        edx_3 = sub_450d50(ebp, &var_30);
                    }
                }

                i_4 = i_1;
            }

            int32_t* i_5;
            i_5 = ebp->pad[0x161c];
            *(&i_5 + 1) = ebp->pad[0x161d];
            *(&i_5 + 2) = ebp->pad[0x161e];
            *(&i_5 + 3) = ebp->pad[0x161f];

            for (int32_t* i_2 = *i_5; i_2; i_2 = *i_2)
            {
                if (*(i_5 + 0x29))
                {
                    void* eax_42 = *i_5[2];

                    if (eax_42 && sub_463170(eax_42))
                    {
                        var_30 = 0x17;
                        int32_t var_28_4 = 0;
                        int32_t var_2c_4 = sub_463130(*i_5[2]);
                        int32_t var_18_2 = *i_5[2];
                        int32_t var_1c_2 = *i_5[2];
                        int32_t var_20_2 = sub_4c3440(*i_5[2]);
                        int32_t var_24_2 = 0;
                        edx_3 = sub_450d50(ebp, &var_30);
                    }
                }

                i_5 = i_2;
            }

            int32_t eax_48;
            eax_48 = ebp->pad[0x3ac4];
            *(&eax_48 + 1) = ebp->pad[0x3ac5];
            *(&eax_48 + 2) = ebp->pad[0x3ac6];
            *(&eax_48 + 3) = ebp->pad[0x3ac7];

            if (eax_48 != 0xffffffff)
            {
                void* eax_49 = sub_4f1030(eax_48);

                if (!eax_49)
                {
                    int32_t ecx_22;
                    ecx_22 = ebp->pad[0x3ac4];
                    *(&ecx_22 + 1) = ebp->pad[0x3ac5];
                    *(&ecx_22 + 2) = ebp->pad[0x3ac6];
                    *(&ecx_22 + 3) = ebp->pad[0x3ac7];
                    int32_t var_68_17 = ecx_22;
                    edx_3 = Warning_Show("AlarmControl ID #%d not defined");
                    ebp->pad[0x3ac4] = 0xff;
                    ebp->pad[0x3ac5] = 0xff;
                    ebp->pad[0x3ac6] = 0xff;
                    ebp->pad[0x3ac7] = 0xff;
                }
                else if (!sub_440c00(eax_49))
                {
                    if (sub_440c10(eax_49))
                        edx_3 = sub_450d80(ebp, 9, 0);
                }
                else
                {
                    edx_3 = sub_450d80(ebp, 8, 0);
                    var_51 = 1;
                }
            }

            uint32_t interval_c = ebp->interval_c;

            if (interval_c >= 0 && ebp->anim_count)
            {
                uint32_t eax_54;

                if (interval_c)
                    eax_54 = interval_c - 1;
                else
                {
                    sub_450d80(ebp, 3, interval_c);
                    uint32_t eax_53;
                    eax_53 = sub_4b47c0(Level_SetMission_5(), ebp->interval_b);
                    eax_54 = eax_53 + ebp->interval_a;
                }

                ebp->interval_c = eax_54;
            }
        }

        int32_t* eax_55;
        eax_55 = ebp->pad[0x3aa8];
        *(&eax_55 + 1) = ebp->pad[0x3aa9];
        *(&eax_55 + 2) = ebp->pad[0x3aaa];
        *(&eax_55 + 3) = ebp->pad[0x3aab];

        if (eax_55)
        {
            int32_t ecx_26 = *eax_55[3];
            int32_t* var_70_9;
            struct ai_ctx* var_6c_12;
            char var_68_21;

            if (!ecx_26)
            {
                edx_3 = ebp->pad[0x3aba];
                var_68_21 = edx_3;
                var_6c_12 = ebp;
                var_70_9 = eax_55;
            label_44f9c4:
                sub_4512a0(var_70_9, var_6c_12, var_68_21);
                ebp->pad[0x3aa8] = 0;
                ebp->pad[0x3aa9] = 0;
                ebp->pad[0x3aaa] = 0;
                ebp->pad[0x3aab] = 0;
            }
            else
            {
                eax_55 = sub_489be0(&ebp->pad[0x15f8], ecx_26);
                ebp->pad[0x3aac] = eax_55;
                ebp->pad[0x3aad] = *(&eax_55 + 1);
                ebp->pad[0x3aae] = *(&eax_55 + 2);
                ebp->pad[0x3aaf] = *(&eax_55 + 3);

                if (!eax_55)
                {
                    eax_55 = ebp->pad[0x3aba];
                    int32_t* ecx_27;
                    ecx_27 = ebp->pad[0x3aa8];
                    *(&ecx_27 + 1) = ebp->pad[0x3aa9];
                    *(&ecx_27 + 2) = ebp->pad[0x3aaa];
                    *(&ecx_27 + 3) = ebp->pad[0x3aab];
                    var_68_21 = eax_55;
                    var_6c_12 = ebp;
                    var_70_9 = ecx_27;
                    goto label_44f9c4;
                }

                var_51 = 1;
            }
        }

        ebp->pad[0x3abb] = var_51;
        void* eax_57 = sub_450dc0(ebp);

        if (!eax_57)
        {
            var_30 = 4;
            int32_t var_28_5 = 0;
            int32_t var_2c_5 = 0xffffffff;
            int32_t var_18_3 = 0;
            int32_t var_1c_3 = 0;
            int32_t var_20_3 = 0;
            void* var_24_3 = eax_57;
            sub_450d50(ebp, &var_30);
        }

        int32_t edx_19;
        edx_19 = ebp->pad[0x8e0];
        *(&edx_19 + 1) = ebp->pad[0x8e1];
        *(&edx_19 + 2) = ebp->pad[0x8e2];
        *(&edx_19 + 3) = ebp->pad[0x8e3];
        int32_t var_68_24 = edx_19;
        char* var_6c_14 = "Events: %d";
        int32_t var_70_10 = 0xffffffff;
        struct ai_ctx* var_74_4 = ebp;
    }
    else
    {
        int32_t esi_1;
        esi_1 = ebp->pad[0x14];
        *(&esi_1 + 1) = ebp->pad[0x15];
        *(&esi_1 + 2) = ebp->pad[0x16];
        *(&esi_1 + 3) = ebp->pad[0x17];
        var_50 = 0xffffffff;
        void* var_4c_1 = &ebp->pad[0x3c74];
        uint32_t eax_14 = sub_4f40d0();
        int32_t edx_4 = 0;
        edx_4 = *(esi_1 + 0x1c);
        int32_t eax_15 = *(((eax_14 * 0x180 + edx_4) << 2) + &g_a96ae0);

        if (eax_15)
            eax_15(esi_1, &var_50);

        sub_44fba0(ebp, esi_1, 0, ebp);
        *(ebp + 0x3d14) = 1;
        int32_t var_28_1 = 0;
        int32_t var_2c_1 = 0;
        var_30 = 0;
        sub_4af8f0(&ebp->pad[0x6f0], &var_30);
        sub_44fc90(ebp, 0, 0xffffffff);
        sub_4af960(&var_30);
    }
    sub_44fd50(ebp);
    sub_44fec0(ebp);

    if (sub_463190(ebx))
    {
        void* esi_5;
        esi_5 = ebp->pad[0x14];
        *(&esi_5 + 1) = ebp->pad[0x15];
        *(&esi_5 + 2) = ebp->pad[0x16];
        *(&esi_5 + 3) = ebp->pad[0x17];
        var_50 = 0xffffffff;
        void* __offset(ai_ctx, 0x3c74) var_4c_2 = &ebp->pad[0x3c74];
        uint32_t eax_61 = sub_4f40d0();
        int32_t ecx_28 = 0;
        ecx_28 = *(esi_5 + 0x1c);
        int32_t eax_65 = *(((eax_61 * 0x180 + ecx_28) << 2) + &g_a96ae0);

        if (eax_65)
            eax_65(esi_5, &var_50);
    }

    void* result = sub_451330(ebp);

    if (result)
    {
        result = sub_463190(ebx);

        if (result)
        {
            result = *(ebx + 0x33c);

            if (result)
            {
                sub_44ff40(ebp);
                void* eax_66;
                eax_66 = ebp->pad[0x3ab0];
                *(&eax_66 + 1) = ebp->pad[0x3ab1];
                *(&eax_66 + 2) = ebp->pad[0x3ab2];
                *(&eax_66 + 3) = ebp->pad[0x3ab3];

                if (eax_66)
                {
                    sub_453390(eax_66);
                    ebp->pad[0x3ab0] = 0;
                    ebp->pad[0x3ab1] = 0;
                    ebp->pad[0x3ab2] = 0;
                    ebp->pad[0x3ab3] = 0;
                }

                void* eax_67;
                eax_67 = ebp->pad[0x3ab4];
                *(&eax_67 + 1) = ebp->pad[0x3ab5];
                *(&eax_67 + 2) = ebp->pad[0x3ab6];
                *(&eax_67 + 3) = ebp->pad[0x3ab7];

                if (eax_67)
                {
                    sub_453390(eax_67);
                    ebp->pad[0x3ab4] = 0;
                    ebp->pad[0x3ab5] = 0;
                    ebp->pad[0x3ab6] = 0;
                    ebp->pad[0x3ab7] = 0;
                }

                int32_t* ecx_29 = *(ebp + 0x3ea0);

                if (ecx_29)
                {
                    int32_t eax_68 = *(ebp + 0x3ea4);
                    sub_452c10(ecx_29, eax_68, eax_68);
                    *(ebp + 0x3ea0) = 0;
                }

                int32_t eax_69 = *(ebp + 0x3e10);

                if (eax_69 >= 0)
                {
                    result = eax_69 - 1;
                    *(ebp + 0x3e10) = result;
                }
                else
                {
                    int16_t eax_70 = sub_488610();

                    if (*(*(ebx + 0x14) + 0x1c) != eax_70 && *(ebx + 0x7c4) != 0xffffffff)
                        result = Frames_GetTaskCounter() - *(ebx + 0x7c4);

                    if (*(*(ebx + 0x14) + 0x1c) == eax_70 || *(ebx + 0x7c4) == 0xffffffff
                        || result > 1)
                    {
                        a1 = Level_StartMission_4();
                        uint32_t eax_74 = sub_4cea20();
                        int32_t eax_75 = 0;
                        eax_75 = *(ebx + 0x1c);
                        result = *(((eax_74 * 0x180 + eax_75) << 2) + &g_a96ae0);

                        if (result)
                            return result(ebx, &a1);
                    }
                }
            }
        }
    }

    return result;
}
