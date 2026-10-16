#include "0050B4F0-Physics_CouldnTGetSurfacedes.h"
/* 0x0050b4f0 Physics_CouldnTGetSurfacedes full linked: callers=3 callees=21 */
int32_t sub_50b4f0(int32_t* a1, int32_t a2, int32_t a3, int32_t* a4, int32_t* a5, int32_t* a6)

{
    int32_t ecx = *a1;
    int32_t var_b4 = 0x7c;
    int32_t eax_1 = (*(ecx + 0x58))(a1, &var_b4);
    void var_530;

    if (eax_1)
    {
        Game_DataSymbolLoad(&var_530, "Couldn't get surfacedesc");
        int32_t var_54c = sub_492be0(eax_1);
        void* var_550 = &var_530;
        Error_Show("%s\n\nDirectX error message: %s");

        while (true)
            /* nop */

        return;
    }

    int32_t var_130;
    __builtin_memset(&var_130, 0, 0x7c);
    int32_t* eax_3 = g_5ca10c;
    var_130 = 0x7c;
    int32_t ebx = a2;
    int32_t var_128 = a3;
    int32_t var_12c = 0x1007;
    int32_t var_124 = ebx;
    int32_t var_c8 = 0x1800;
    void var_e8;
    void var_6c;
    memcpy(&var_e8, &var_6c, 0x20);
    int32_t* var_8;
    int32_t eax_4 = (*(*eax_3 + 0x18))(eax_3, &var_130, &var_8, 0);

    if (eax_4)
    {
        Game_DataSymbolLoad(&var_530, "Couldn't create surface");
        int32_t var_54c_2 = sub_492be0(eax_4);
        void* var_550_1 = &var_530;
        Error_Show("%s\n\nDirectX error message: %s");

        while (true)
            /* nop */

        return;
    }

    int32_t* eax_6 = var_8;
    int32_t eax_7 = (*(*eax_6 + 0x64))(eax_6, 0, &var_130, 1, 0);

    if (eax_7)
    {
        Game_DataSymbolLoad(&var_530, "Couldn't lock surface");
        int32_t var_54c_3 = sub_492be0(eax_7);
        void* var_550_3 = &var_530;
        Error_Show("%s\n\nDirectX error message: %s");

        while (true)
            /* nop */

        return;
    }

    int32_t var_50;
    char var_34;
    char ecx_5;

    if (!var_50)
    {
        var_34 = 0;
        ecx_5 = 0;
    }
    else
    {
        int32_t eflags_1;
        char eax_10;
        eax_10 = __bsf_gprv_memv(var_50);
        var_34 = eax_10;
        int32_t eflags_2;
        char eax_12;
        eax_12 = __bsr_gprv_memv(var_50);
        ecx_5 = eax_12 - eax_10 + 1;
    }

    int32_t var_5c;
    int32_t eflags_3;
    char eax_13;
    eax_13 = __bsf_gprv_memv(var_5c);
    int32_t var_58;
    int32_t eflags_4;
    char eax_15;
    eax_15 = __bsf_gprv_memv(var_58);
    int32_t var_54;
    int32_t eflags_5;
    char eax_16;
    eax_16 = __bsf_gprv_memv(var_54);
    int32_t eflags_6;
    char eax_18;
    eax_18 = __bsr_gprv_memv(var_5c);
    int32_t eflags_7;
    char eax_19;
    eax_19 = __bsr_gprv_memv(var_58);
    int32_t eflags_8;
    char eax_21;
    eax_21 = __bsr_gprv_memv(var_54);
    char var_68;

    if (!(var_68 & 0x40))
    {
        Error_Show("Invalid texture format");

        while (true)
            /* nop */

        return;
    }

    int32_t var_60;
    int32_t var_120;
    int32_t* var_10c;

    if (var_60 == 0x20)
    {
        int32_t* esi_5 = a5;

        if (var_5c != 0xff0000 || var_58 != 0xff00 || var_54 != 0xff || esi_5 != ebx || a6 != a3
            || var_120 != ebx << 2)
        {
            int32_t* eax_43 = a6;
            int32_t edi_4 = 0;
            int32_t var_c_2 = 0;

            if (eax_43 > 0)
            {
                int32_t* var_24_1 = a4;

                do
                {
                    int32_t* var_20_1 = var_24_1;
                    void* edi_6 = edi_4 * var_120 + var_10c;

                    if (esi_5 > 0)
                    {
                        int32_t* var_14_1 = esi_5;
                        bool cond:8_1;

                        do
                        {
                            edi_6 += 4;
                            int32_t eax_35 = *var_20_1;
                            uint32_t esi_13 =
                                eax_35 >> ((eax_16 - eax_21 + 7) & 0x1f) << (eax_16 & 0x1f)
                                | (eax_35 & 0xff0000) >> ((eax_13 - eax_18 + 0x17) & 0x1f)
                                << (eax_13 & 0x1f) | (eax_35 & 0xff00)
                                >> ((eax_15 - eax_19 + 0xf) & 0x1f) << (eax_15 & 0x1f);
                            *(edi_6 - 4) = esi_13 | (eax_35 & 0xff000000) >> ((0x20 - ecx_5) & 0x1f)
                                << (var_34 & 0x1f);
                            cond:8_1 = var_14_1 != 1;
                            var_20_1 = &var_20_1[1];
                            var_14_1 -= 1;
                        } while (cond:8_1);
                        ebx = a2;
                        esi_5 = a5;
                    }

                    int32_t ecx_27;
                    int32_t edi_7;

                    if (esi_5 < ebx)
                        edi_7 = __memfill_u32(edi_6, *(edi_6 - 4), ebx - esi_5);
                    edi_4 = var_c_2 + 1;
                    eax_43 = a6;
                    var_c_2 = edi_4;
                    var_24_1 = &var_24_1[esi_5];
                } while (edi_4 < eax_43);
            }

            int32_t* edi_9 = eax_43;
            int32_t* var_c_3 = edi_9;

            if (eax_43 < a3)
            {
                int32_t* eax_46 = &a4[(eax_43 - 1) * esi_5];

                do
                {
                    a6 = eax_46;
                    void* edi_11 = edi_9 * var_120 + var_10c;

                    if (esi_5 > 0)
                    {
                        int32_t* var_14_2 = esi_5;
                        bool cond:12_1;

                        do
                        {
                            edi_11 += 4;
                            int32_t eax_48 = *a6;
                            uint32_t esi_22 =
                                eax_48 >> ((eax_16 - eax_21 + 7) & 0x1f) << (eax_16 & 0x1f)
                                | (eax_48 & 0xff0000) >> ((eax_13 - eax_18 + 0x17) & 0x1f)
                                << (eax_13 & 0x1f) | (eax_48 & 0xff00)
                                >> ((eax_15 - eax_19 + 0xf) & 0x1f) << (eax_15 & 0x1f);
                            *(edi_11 - 4) = esi_22 | (eax_48 & 0xff000000)
                                >> ((0x20 - ecx_5) & 0x1f) << (var_34 & 0x1f);
                            cond:12_1 = var_14_2 != 1;
                            a6 = &a6[1];
                            var_14_2 -= 1;
                        } while (cond:12_1);
                        ebx = a2;
                        esi_5 = a5;
                    }

                    int32_t ecx_44;
                    int32_t edi_12;

                    if (esi_5 < ebx)
                        edi_12 = __memfill_u32(edi_11, *(edi_11 - 4), ebx - esi_5);
                    edi_9 = var_c_3 + 1;
                    var_c_3 = edi_9;
                } while (edi_9 < a3);
            }
        }
        else
        {
            int32_t ecx_11 = (ebx * a3) << 2;
            int32_t esi_7;
            int32_t edi_3;
            edi_3 = memcpy(var_10c, a4, ecx_11 & 0xfffffffc);
            memcpy(edi_3, esi_7, ecx_11 & 3);
        }
    }
    else if (var_60 != 0x10)
    {
        Error_Show("Invalid texture format");

        while (true)
            /* nop */
    }
    else
    {
        int32_t* ecx_45 = a6;
        int32_t* esi_26 = a5;
        int32_t var_c_4 = 0;

        if (ecx_45 > 0)
        {
            int32_t* var_20_2 = a4;

            do
            {
                int32_t* var_24_2 = var_20_2;
                void* edi_16 = var_c_4 * var_120 + var_10c;

                if (esi_26 > 0)
                {
                    int32_t* var_14_3 = esi_26;
                    bool cond:6_1;

                    do
                    {
                        edi_16 += 2;
                        int32_t eax_59 = *var_24_2;
                        uint16_t esi_31 =
                            eax_59 >> ((eax_16 - eax_21 + 7) & 0x1f) << (eax_16 & 0x1f)
                            | (eax_59 & 0xff0000) >> ((eax_13 - eax_18 + 0x17) & 0x1f)
                            << (eax_13 & 0x1f);
                        uint16_t esi_33 = esi_31 | (eax_59 & 0xff00)
                            >> ((eax_15 - eax_19 + 0xf) & 0x1f) << (eax_15 & 0x1f)
                            | (eax_59 & 0xff000000) >> ((0x20 - ecx_5) & 0x1f) << (var_34 & 0x1f);
                        *(edi_16 - 2) = esi_33;
                        cond:6_1 = var_14_3 != 1;
                        var_24_2 = &var_24_2[1];
                        var_14_3 -= 1;
                    } while (cond:6_1);
                    ebx = a2;
                    esi_26 = a5;
                    ecx_45 = a6;
                }

                int16_t eax_64 = *(edi_16 - 2);

                if (esi_26 < ebx)
                {
                    int32_t ecx_55 = ebx;
                    ebx = eax_64;
                    int32_t ebx_25 = ebx << 0x10;
                    void* ecx_56 = ecx_55 - esi_26;
                    ebx_25 = eax_64;
                    ebx = a2;
                    int32_t ecx_58;
                    int32_t edi_17;
                    edi_17 = __memfill_u32(edi_16, ebx_25, ecx_56 >> 1);
                    int32_t ecx_60;
                    int32_t edi_18;
                    edi_18 = __memfill_u16(edi_17, ebx_25, ecx_58 + ecx_58);
                    ecx_45 = a6;
                }

                var_c_4 += 1;
                var_20_2 = &var_20_2[esi_26];
            } while (var_c_4 < ecx_45);
        }

        int32_t* edi_21 = ecx_45;
        int32_t* var_c_5 = edi_21;

        if (ecx_45 < a3)
        {
            int32_t* ecx_63 = &a4[(ecx_45 - 1) * esi_26];

            do
            {
                void* edi_23 = edi_21 * var_120 + var_10c;
                a6 = ecx_63;

                if (esi_26 > 0)
                {
                    int32_t* var_14_4 = esi_26;
                    bool cond:10_1;

                    do
                    {
                        edi_23 += 2;
                        int32_t eax_73 = *a6;
                        uint16_t esi_40 =
                            eax_73 >> ((eax_16 - eax_21 + 7) & 0x1f) << (eax_16 & 0x1f)
                            | (eax_73 & 0xff0000) >> ((eax_13 - eax_18 + 0x17) & 0x1f)
                            << (eax_13 & 0x1f);
                        uint16_t esi_42 = esi_40 | (eax_73 & 0xff00)
                            >> ((eax_15 - eax_19 + 0xf) & 0x1f) << (eax_15 & 0x1f)
                            | (eax_73 & 0xff000000) >> ((0x20 - ecx_5) & 0x1f) << (var_34 & 0x1f);
                        *(edi_23 - 2) = esi_42;
                        cond:10_1 = var_14_4 != 1;
                        a6 = &a6[1];
                        var_14_4 -= 1;
                    } while (cond:10_1);
                    ebx = a2;
                    esi_26 = a5;
                }

                int16_t eax_78 = *(edi_23 - 2);

                if (esi_26 < ebx)
                {
                    int32_t ecx_74 = ebx;
                    ebx = eax_78;
                    int32_t ebx_34 = ebx << 0x10;
                    void* ecx_75 = ecx_74 - esi_26;
                    ebx_34 = eax_78;
                    ebx = a2;
                    int32_t ecx_77;
                    int32_t edi_24;
                    edi_24 = __memfill_u32(edi_23, ebx_34, ecx_75 >> 1);
                    int32_t ecx_79;
                    int32_t edi_25;
                    edi_25 = __memfill_u16(edi_24, ebx_34, ecx_77 + ecx_77);
                }

                edi_21 = var_c_5 + 1;
                var_c_5 = edi_21;
            } while (edi_21 < a3);
        }
    }
    int32_t* eax_81 = var_8;
    int32_t eax_82 = (*(*eax_81 + 0x80))(eax_81, 0);

    if (!eax_82)
    {
        int32_t eax_85 = (*(*a1 + 0x14))(a1, 0, var_8, 0, 0x1000000, 0);

        if (!eax_85)
        {
            int32_t* eax_87 = var_8;
            return (*(*eax_87 + 8))(eax_87);
        }

        Game_DataSymbolLoad(&var_530, "Couldn't blit surface");
        int32_t var_54c_6 = sub_492be0(eax_85);
        void* var_550_5 = &var_530;
        Error_Show("%s\n\nDirectX error message: %s");

        while (true)
            /* nop */
    }
    else
    {
        Game_DataSymbolLoad(&var_530, "Couldn't unlock surface");
        int32_t var_54c_4 = sub_492be0(eax_82);
        void* var_550_4 = &var_530;
        Error_Show("%s\n\nDirectX error message: %s");

        while (true)
            /* nop */
    }
}
