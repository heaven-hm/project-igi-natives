#include "0050AD90-Physics_InterpolateWaypoint_12.h"
/* 0x0050ad90 Physics_InterpolateWaypoint_12 full linked: callers=0 callees=37 */
int32_t sub_50ad90(int32_t* a1)

{
    int32_t var_590 = g_a7ceb0;

    if (a1[0xa])
    {
        int32_t eax_2 = a1[6];
        int32_t eax_3;

        if ((~(eax_2 - 1) & eax_2) == eax_2)
            eax_3 = a1[7];

        if ((~(eax_2 - 1) & eax_2) != eax_2 || (~(eax_3 - 1) & eax_3) != eax_3)
        {
            Error_Show("
                Trying to download mipmap texture that is not power of 2 in width or height");

            while (true)
                /* nop */
        }
    }

    int32_t* eax_4 = g_5ca114;
    (*(*eax_4 + 0x8c))(eax_4, 0, 0);
    int32_t* eax_5 = g_5ca114;
    (*(*eax_5 + 0x8c))(eax_5, 1, 0);
    int32_t* eax_9 = Mem_Alloc((a1[7] * a1[6]) << 3, 4);
    int32_t ecx_5 = a1[6];
    int32_t edi = a1[3];
    int32_t* esi = a1[7];
    int32_t ebx = a1[0xb];
    int32_t* var_578 = eax_9;
    int32_t* var_594 = eax_9;
    int32_t var_598 = ecx_5;
    int32_t ebx_1;

    while (true)
    {
        int32_t ecx_7 = a1[8] - 1;

        if (ecx_7 <= 0x42)
        {
            int32_t edx_5 = 0;
            edx_5 = lookup_table_50b47c[ecx_7];

            switch (edx_5)
            {
                case 0:
                {
                    sub_517fd0(eax_9, var_598, esi, 0, ebx, *(a1[1] + 8), edi, esi, nullptr);
                    ebx += esi * edi;
                label_50aed0:
                    int32_t eax_13 = var_598 >> 1;
                    int32_t* ecx_18 = &var_594[esi * var_598];
                    var_598 = eax_13;
                    var_594 = ecx_18;
                    esi s>>= 1;
                    edi s>>= 1;

                    if (a1[8] & 0x40 && eax_13 > 0 && esi > 0)
                    {
                        eax_9 = var_594;
                        continue;
                    }

                    ebx_1 = 0;
                    *(*a1 + 0x18) = sub_50a620(var_578, a1[6], a1[7]);
                    break;
                    break;
                }
                case 1:
                {
                    sub_517c90(eax_9, var_598, esi, ebx, edi >> 1, esi, nullptr);
                    goto label_50aec1;
                }
                case 2:
                {
                    sub_517f00(eax_9, var_598, esi, ebx, edi >> 2, esi, nullptr);
                    goto label_50aec1;
                }
                case 3:
                {
                    sub_517dd0(eax_9, var_598, esi, ebx, edi >> 1, esi, nullptr);
                label_50aec1:
                    ebx += esi * edi;
                    goto label_50aed0;
                }
            }
        }

        Error_Show("Unsupported texture format");

        while (true)
            /* nop */
    }

    if (*(*a1 + 0x20))
    {
        g_a7ceb4 -= 1;
        int32_t eax_18 = sub_50ac90(*(*a1 + 0x20));
        int32_t ecx_23 = g_a7ceb8 - eax_18;
        int32_t eax_19 = g_a7ceb4;
        g_a7ceb8 = ecx_23;
        g_5ca124 = eax_19;
        g_5ca128 = ecx_23;
        int32_t* eax_20 = *(*a1 + 0x20);
        (*(*eax_20 + 8))(eax_20);
        *(*a1 + 0x20) = 0;
    }

    int32_t var_574;
    __builtin_memset(&var_574, 0, 0x7c);
    bool cond:0 = !(g_bcac00 & 0x80000);
    var_574 = 0x7c;
    int32_t var_570 = 0x1007;
    int32_t var_50c = 0x1000;
    int32_t var_508 = 8;

    if (!cond:0)
        int32_t var_508_1 = 0x18;

    int32_t ecx_25 = a1[0xa];
    int32_t var_588;
    int32_t var_56c;
    int32_t var_568;
    void* ecx_27;

    if (ecx_25 || !(*(&g_bcac5c + 1) & 1))
    {
        int32_t eax_24 = a1[6];
        int32_t edx_19 = a1[7];
        var_588 = eax_24;
        int32_t var_584_1 = edx_19;

        if (ecx_25)
        {
            char ecx_28 = var_590;
            int32_t eax_25 = eax_24 >> (ecx_28 & 0x1f);
            int32_t edx_20 = edx_19 >> (ecx_28 & 0x1f);
            var_588 = eax_25;
            var_584_1 = edx_20;

            if (eax_25 <= 1)
                var_588 = 1;

            if (edx_20 <= 1)
                var_584_1 = 1;
        }

        int32_t* var_5ac_11 = &var_588;
        int32_t eax_26 = sub_4b2700();
        sub_4b1000(sub_4950e0(), eax_26, var_5ac_11);
        int32_t var_580;
        var_568 = var_580;
        int32_t var_57c;
        var_56c = var_57c;
        *(*a1 + 0x10) = var_588 / var_580;
        ecx_27 = *a1;
        *(ecx_27 + 0x14) = var_584_1 / var_57c;
    }
    else
    {
        var_568 = a1[6];
        ecx_27 = *a1;
        var_56c = a1[7];
        *(ecx_27 + 0x10) = 0x3f800000;
        *(*a1 + 0x14) = 0x3f800000;
    }

    if (g_a7ceac != 0xffffffff)
    {
        var_570 |= 0x100000;
        int32_t var_4fc_1 = sub_4b2640(ecx_27);
    }

    int32_t var_55c;

    if (a1[0xa])
    {
        int32_t var_50c_1 = var_50c | &__dos_header.e_cparhdr;
        int32_t var_570_1 = var_570 | 0x20000;
        int32_t eax_31 = sub_50b4c0(var_568, var_56c);
        var_55c = eax_31;

        if (var_590 >= eax_31 - 1)
            var_590 = eax_31 - 1;
    }

    int32_t var_5b4_8 = a1[8];
    void var_52c;
    sub_50aa70(&var_52c, a1[9], *(*a1 + 0x18));
    int32_t* eax_34 = g_5ca10c;
    int32_t eax_35 = (*(*eax_34 + 0x18))(eax_34, &var_574, *a1 + 0x20, 0);
    void var_400;

    if (eax_35)
    {
        Game_DataSymbolLoad(&var_400, "Couldn't create texture surface");
        int32_t var_5b8_7 = sub_492be0(eax_35);
        void* var_5bc_5 = &var_400;
        Error_Show("%s\n\nDirectX error message: %s");

        while (true)
            /* nop */

        return;
    }

    void* edx_28 = *a1;
    int32_t var_47c = 0x7c;
    int32_t* eax_37 = *(edx_28 + 0x20);
    int32_t eax_38 = (*(*eax_37 + 0x58))(eax_37, &var_47c);

    if (!eax_38)
    {
        int32_t eax_40 = a1[0xa];
        int32_t* esi_3 = a1[6];
        int32_t* i = a1[7];

        if (!eax_40)
            sub_50b4f0(*(*a1 + 0x20), var_568, var_56c, var_578, esi_3, i);
        else
        {
            int32_t* var_58c;

            if (a1[8] & 0x40)
            {
                int32_t* eax_41 = *(*a1 + 0x20);
                var_588 = 0;
                var_594 = eax_41;
                int32_t var_584_2 = 0;
                var_588 = QTask_CreateTask;
                int32_t var_580_1 = 0;
                var_58c = var_578;
                int32_t var_57c_1 = 0;

                if (esi_3)
                {
                    while (i)
                    {
                        if (ebx_1 >= var_55c + var_590)
                            break;

                        if (ebx_1 >= var_590)
                        {
                            sub_50b4f0(var_594, esi_3, i, var_58c, esi_3, i);

                            if (ebx_1 != var_55c + var_590 - 1)
                            {
                                int32_t* eax_45 = var_594;
                                int32_t eax_46 = (*(*eax_45 + 0x30))(eax_45, &var_588, &var_594);

                                if (eax_46)
                                {
                                    Game_DataSymbolLoad(&var_400, "Couldn't get mipmap");
                                    int32_t var_5b8_10 = sub_492be0(eax_46);
                                    void* var_5bc_8 = &var_400;
                                    Error_Show("%s\n\nDirectX error message: %s");

                                    while (true)
                                        /* nop */
                                }
                            }
                        }

                        int32_t eax_48 = i * esi_3;
                        esi_3 s>>= 1;
                        i s>>= 1;
                        ebx_1 += 1;
                        var_58c = &var_58c[eax_48];

                        if (!esi_3)
                            break;
                    }
                }
            }
            else if (!eax_40)
                sub_50b4f0(*(*a1 + 0x20), var_568, var_56c, var_578, esi_3, i);
            else
            {
                int32_t* ebx_2 = var_578;
                int32_t* eax_51 = *(*a1 + 0x20);
                var_588 = 0;
                int32_t var_584_3 = 0;
                var_58c = eax_51;
                int32_t var_580_2 = 0;
                var_588 = QTask_CreateTask;
                int32_t var_57c_2 = 0;
                int32_t var_4f8 = 0x7c;
                int32_t eax_52 = (*(*eax_51 + 0x58))(eax_51, &var_4f8);

                if (!eax_52)
                {
                    var_594 = nullptr;
                    int32_t var_4e0;

                    if (var_4e0 + var_590 > 0)
                    {
                        bool cond:5_1;

                        do
                        {
                            if (var_594 >= var_590)
                            {
                                sub_50b4f0(var_58c, esi_3, i, ebx_2, esi_3, i);

                                if (var_594 != var_55c + var_590 - 1)
                                {
                                    int32_t* eax_59 = var_58c;
                                    int32_t eax_60 =
                                        (*(*eax_59 + 0x30))(eax_59, &var_588, &var_58c);

                                    if (eax_60)
                                    {
                                        Game_DataSymbolLoad(&var_400, "Couldn't get mipmap");
                                        int32_t var_5b8_14 = sub_492be0(eax_60);
                                        void* var_5bc_11 = &var_400;
                                        Error_Show("%s\n\nDirectX error message: %s");

                                        while (true)
                                            /* nop */
                                    }
                                }
                            }

                            int32_t eax_63 = &ebx_2[i * esi_3];
                            sub_517b00(eax_63, ebx_2, esi_3, i);
                            ebx_2 = eax_63;
                            esi_3 s>>= 1;
                            i s>>= 1;
                            cond:5_1 = var_594 + 1 < var_4e0 + var_590;
                            var_594 += 1;
                        } while (cond:5_1);
                    }
                }
                else
                {
                    Game_DataSymbolLoad(&var_400, "Couldn't get surface description");
                    int32_t var_5b8_11 = sub_492be0(eax_52);
                    void* var_5bc_9 = &var_400;
                    Error_Show("%s\n\nDirectX error message: %s");

                    while (true)
                        /* nop */
                }
            }
        }

        sub_4b0d10(var_578);
        g_a7ceb4 += 1;
        int32_t result = sub_50ac90(*(*a1 + 0x20));
        int32_t edx_42 = g_a7ceb4;
        int32_t ecx_53 = g_a7ceb8 + result;
        g_a7ceb8 = ecx_53;
        g_5ca124 = edx_42;
        g_5ca128 = ecx_53;
        return result;
    }

    Game_DataSymbolLoad(&var_400, "Couldn't get surface description");
    int32_t var_5b8_8 = sub_492be0(eax_38);
    void* var_5bc_6 = &var_400;
    Error_Show("%s\n\nDirectX error message: %s");

    while (true)
        /* nop */
}
