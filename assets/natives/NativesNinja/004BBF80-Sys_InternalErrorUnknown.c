#include "004BBF80-Sys_InternalErrorUnknown.h"
/* 0x004bbf80 Sys_InternalErrorUnknown full linked: callers=6 callees=56 */
int32_t sub_4bbf80(int32_t* a1, int32_t* a2)

{
    int32_t eax_1 = a2[2] - 1;
    void var_40;

    switch (eax_1)
    {
        case 0:
        {
            int32_t* i_3 = a2[3];
            int32_t* i = *i_3;

            if (!i)
                return eax_1;

            int32_t eax_2;

            do
            {
                eax_2 = sub_4bbf80(a1, i_3);
                i_3 = i;
                i = *i;
            } while (i);

            return eax_2;
            break;
        }
        case 1:
        {
            sub_4bc2f0(a1, a2[3]);
            sub_4bbf40(0x15, a1);
            sub_4bc2a0(&var_40, 0x5479f0, a2);
            sub_4bc2c0(a1, &var_40);
            sub_4bbf60(a1);
            sub_4bbf80(a1, a2[4]);
            sub_4bbf40(0x14, a1);
            sub_4bc2a0(&var_40, 0x5479ec, a2);
            sub_4bc2c0(a1, &var_40);
            sub_4bbf60(a1);
            int32_t* i_2 = a2[5];
            int32_t* i_4 = a2;

            for (int32_t* i_1 = *i_2; i_1; i_1 = *i_1)
            {
                sub_4bc2a0(&var_40, 0x5479f0, i_4);
                sub_4bc2c0(a1, &var_40);
                sub_4bc2c0(a1, 0x5479e8);
                sub_4bbf60(a1);
                sub_4bc2f0(a1, i_2[3]);
                sub_4bbf40(0x15, a1);
                sub_4bc2a0(&var_40, 0x5479f0, i_2);
                sub_4bc2c0(a1, &var_40);
                sub_4bbf60(a1);
                sub_4bbf80(a1, i_2[4]);
                sub_4bbf40(0x14, a1);
                sub_4bc2a0(&var_40, 0x5479ec, a2);
                sub_4bc2c0(a1, &var_40);
                sub_4bbf60(a1);
                i_4 = i_2;
                i_2 = i_1;
            }

            sub_4bc2a0(&var_40, 0x5479f0, i_4);
            sub_4bc2c0(a1, &var_40);
            sub_4bc2c0(a1, 0x5479e8);
            sub_4bbf60(a1);
            int32_t* eax_5 = a2[8];

            if (eax_5)
                sub_4bbf80(a1, eax_5);

            sub_4bc2a0(&var_40, 0x5479ec, a2);
            sub_4bc2c0(a1, &var_40);
            sub_4bc2c0(a1, 0x5479e8);
            return sub_4bbf60(a1);
            break;
        }
        case 3:
        {
            sub_4bc2a0(&var_40, 0x5479e4, a2);
            sub_4bc2c0(a1, &var_40);
            sub_4bc2c0(a1, 0x5479e8);
            sub_4bbf60(a1);
            sub_4bc2f0(a1, a2[3]);
            sub_4bbf40(0x15, a1);
            sub_4bc2a0(&var_40, 0x5479e0, a2);
            sub_4bc2c0(a1, &var_40);
            sub_4bbf60(a1);
            sub_4bbf80(a1, a2[4]);
            sub_4bbf40(0x14, a1);
            sub_4bc2a0(&var_40, 0x5479e4, a2);
            sub_4bc2c0(a1, &var_40);
            sub_4bbf60(a1);
            sub_4bc2a0(&var_40, 0x5479e0, a2);
            sub_4bc2c0(a1, &var_40);
            sub_4bc2c0(a1, 0x5479e8);
            return sub_4bbf60(a1);
            break;
        }
        case 6:
        {
            char* edi_1 = a2[3];

            if (!edi_1)
                return eax_1;

            sub_4bc2f0(a1, edi_1);
            sub_4bbf40(0x12, a1);
            return sub_4bbf60(a1);
            break;
        }
    }

    Error_Show("Internal error: Unknown statement block type.");

    while (true)
        /* nop */
}
