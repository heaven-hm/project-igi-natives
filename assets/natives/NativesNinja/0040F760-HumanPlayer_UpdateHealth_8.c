#include "0040F760-HumanPlayer_UpdateHealth_8.h"
/* 0x0040f760 HumanPlayer_UpdateHealth_8 full linked: callers=3 callees=8 */
int32_t HumanPlayer_UpdateHealth_8(void* a1 @ ebp, int32_t a2 @ esi, int32_t a3 @ edi, int32_t a4, int32_t a5)

{
    int32_t esi = a4;
    int32_t ebp = 0;
    struct collision_set* a = Table_GetAt(esi + 0x4c4, 0);

    if (!a)
        a4 = 0xffffffff;
    else
        a4 = HumanPlayer_LoadParameters_13(a, a3, a2, a1)->c67c;

    if (*(esi + 0xd48) == 0xffffffff || a5)
        ebp = 1;
    else
    {
        long double x87_r7_1 = *(esi + 0x204);
        long double temp1_1 = 0f;
        x87_r7_1 - temp1_1;

        if (!(*(&((x87_r7_1 < temp1_1 ? 1 : 0) << 8 | (FCMP_UO(x87_r7_1, temp1_1) ? 1 : 0) << 0xa
            | (x87_r7_1 == temp1_1 ? 1 : 0) << 0xe) + 1) & 0x40))
        {
            long double x87_r7_2 = *(esi + 0x164);
            long double temp3_1 = 0f;
            x87_r7_2 - temp3_1;

            if (*(&((x87_r7_2 < temp3_1 ? 1 : 0) << 8 | (FCMP_UO(x87_r7_2, temp3_1) ? 1 : 0) << 0xa
                    | (x87_r7_2 == temp3_1 ? 1 : 0) << 0xe) + 1) & 0x40)
                ebp = 1;
        }
    }

    long double x87_r7_3 = *(esi + 0x208);
    long double temp0 = 0f;
    x87_r7_3 - temp0;
    long double x87_r7_4;
    long double temp2_1;

    if (!(*(&((x87_r7_3 < temp0 ? 1 : 0) << 8 | (FCMP_UO(x87_r7_3, temp0) ? 1 : 0) << 0xa
        | (x87_r7_3 == temp0 ? 1 : 0) << 0xe) + 1) & 0x40))
    {
        x87_r7_4 = *(esi + 0x168);
        temp2_1 = 0f;
        x87_r7_4 - temp2_1;
    }

    int32_t i;
    int32_t edi;

    if (*(&((x87_r7_3 < temp0 ? 1 : 0) << 8 | (FCMP_UO(x87_r7_3, temp0) ? 1 : 0) << 0xa
        | (x87_r7_3 == temp0 ? 1 : 0) << 0xe) + 1) & 0x40 || !(*(&((x87_r7_4 < temp2_1 ? 1 : 0) << 8
        | (FCMP_UO(x87_r7_4, temp2_1) ? 1 : 0) << 0xa | (x87_r7_4 == temp2_1 ? 1 : 0) << 0xe) + 1)
        & 0x40))
    {
        if (ebp)
            goto label_40f805;

    label_40f837:
        edi = *(esi + 0x1e4);
        i = HumanPlayer_UpdateMotion_11(esi, edi, esi, edi);

        if (i)
        {
            i = HumanPlayer_PlayFootstep(esi, i);

            if (!i)
                edi = 0xffffffff;
            else
            {
                i = 0;

                if (g_56df18 > 0)
                {
                    int32_t* ecx_3 = &g_56df1c;

                    do
                    {
                        if (*ecx_3 == edi)
                            *(esi + 0xd48) = i;

                        i += 1;
                        ecx_3 = &ecx_3[1];
                    } while (i < g_56df18);
                }
            }
        }
    }
    else
    {
        ebp = 0xffffffff;
    label_40f805:
        void* a_1 = *(esi + 0xde4);

        if (!a_1)
        {
            int32_t ebx_1 = g_56df18;

            if (!ebx_1)
                goto label_40f837;

            while (true)
            {
                ebx_1 -= 1;
                int32_t edi_2 = *(esi + 0xd48) + ebp;
                *(esi + 0xd48) = edi_2;
                int32_t ecx_4 = g_56df18;

                if (edi_2 >= ecx_4)
                    *(esi + 0xd48) = 0;
                else if (edi_2 < 0)
                    *(esi + 0xd48) = ecx_4 - 1;

                edi = *((*(esi + 0xd48) << 2) + &g_56df1c);
                int32_t* eax_5 = HumanPlayer_UpdateMotion_11(esi, edi, esi, edi);

                if (eax_5)
                {
                    i = HumanPlayer_PlayFootstep(esi, eax_5);

                    if (i)
                        break;
                }

                if (!ebx_1)
                    goto label_40f837;
            }

            goto label_40f824;
        }

        i = HumanPlayer_LoadParameters_13(a_1, a3, a2, a1);
        edi = *i;
        *(esi + 0xde4) = 0;
    label_40f824:

        if (edi == 0xffffffff)
            goto label_40f837;
    }

    if (edi != a4)
    {
        i = HumanPlayer_UpdateMotion_11(esi, edi, esi, edi);

        if (i)
            *(esi + 0xd4c) = edi;
    }

    return i;
}
