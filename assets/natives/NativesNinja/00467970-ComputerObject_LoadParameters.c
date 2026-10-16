#include "00467970-ComputerObject_LoadParameters.h"
/* 0x00467970 ComputerObject_LoadParameters full linked: callers=0 callees=35 */
int32_t* sub_467970(void* a1)

{
    void* eax_1 = sub_4e8210(sub_46c070());
    void* var_2c = eax_1 + 0x28;
    void* var_28 = eax_1;
    int32_t* result = 0xffffffff;
    int32_t var_10 = 0xffffffff;
    int32_t var_c = 0xffffffff;
    result = *(a1 + 0x20);
    int32_t i = 0;
    int32_t var_24 = *(eax_1 + 0x40);
    int32_t var_14 = 0;
    int32_t var_20 = 0;
    int32_t var_18 = 0;
    int32_t var_8 = 0;
    int32_t var_4 = 0;

    if (result & 1)
    {
        result = sub_460c60();

        if (*result > 0)
        {
            int32_t esi_1 = 8;

            do
            {
                int32_t ecx_1 = 0;
                ecx_1 = *(*(sub_460c60() + esi_1) + 0x1c);
                uint32_t eax_5 = sub_467d90();
                (*(((ecx_1 + eax_5 * 0x180) << 2) + &g_a96ae0))(*(sub_460c60() + esi_1),
                    &var_2c);
                i += 1;
                esi_1 += 4;
                result = sub_460c60();
            } while (i < *result);
        }
    }

    if (*(a1 + 0x20) & 2)
    {
        int32_t i_1 = 0;
        result = Level_InitSprites_4();

        if (*result > 0)
        {
            int32_t esi_2 = 8;

            do
            {
                int32_t eax_8 = 0;
                eax_8 = *(*(Level_InitSprites_4() + esi_2) + 0x1c);
                uint32_t eax_10 = sub_467d90();
                (*(((eax_8 + eax_10 * 0x180) << 2) + &g_a96ae0))(
                    *(Level_InitSprites_4() + esi_2), &var_2c);
                i_1 += 1;
                esi_2 += 4;
                result = Level_InitSprites_4();
            } while (i_1 < *result);
        }
    }

    if (*(a1 + 0x20) & 4)
    {
        int32_t i_2 = 0;
        result = sub_4688a0();

        if (*result > 0)
        {
            int32_t esi_3 = 8;

            do
            {
                int32_t edx_4 = 0;
                edx_4 = *(*(sub_4688a0() + esi_3) + 0x1c);
                uint32_t eax_15 = sub_467d90();
                (*(((edx_4 + eax_15 * 0x180) << 2) + &g_a96ae0))(*(sub_4688a0() + esi_3),
                    &var_2c);
                i_2 += 1;
                esi_3 += 4;
                result = sub_4688a0();
            } while (i_2 < *result);
        }
    }

    if (*(a1 + 0x20) & 8)
    {
        result = sub_46ab30();

        if (result >= 1)
        {
            int32_t i_3 = 0;

            if (*sub_443660() > 0)
            {
                int32_t esi_4 = 8;
                int32_t* eax_25;

                do
                {
                    int32_t ecx_6 = 0;
                    ecx_6 = *(*(sub_443660() + esi_4) + 0x1c);
                    uint32_t eax_23 = sub_467d90();
                    (*(((ecx_6 + eax_23 * 0x180) << 2) + &g_a96ae0))(*(sub_443660() + esi_4),
                        &var_2c);
                    i_3 += 1;
                    esi_4 += 4;
                    eax_25 = sub_443660();
                } while (i_3 < *eax_25);
            }

            result = sub_46ab10();
            void* ecx_8 = result[0x29];

            if (ecx_8)
            {
                uint32_t eax_27 = sub_467db0();
                int32_t eax_28 = 0;
                eax_28 = *(ecx_8 + 0x1c);
                result = (*(((eax_27 * 0x180 + eax_28) << 2) + &g_a96ae0))(ecx_8, &var_2c);
            }
        }
    }

    if (*(a1 + 0x20) & 0x10)
    {
        int32_t i_4 = 0;

        if (*Level_LoadLevel_4() > 0)
        {
            int32_t ebx = 8;
            int32_t* eax_37;

            do
            {
                int32_t eax_32 = 0;
                eax_32 = *(*(Level_LoadLevel_4() + ebx) + 0x1c);
                int32_t esi_8 = *(((eax_32 + sub_467d90() * 0x180) << 2) + &g_a96ae0);

                if (esi_8)
                    esi_8(*(Level_LoadLevel_4() + ebx), &var_2c);

                i_4 += 1;
                ebx += 4;
                eax_37 = Level_LoadLevel_4();
            } while (i_4 < *eax_37);
        }

        int32_t i_5 = 0;
        result = sub_46ead0();

        if (*result > 0)
        {
            int32_t esi_9 = 8;

            do
            {
                int32_t edx_12 = 0;
                edx_12 = *(*(sub_46ead0() + esi_9) + 0x1c);
                uint32_t eax_40 = sub_467d90();
                (*(((edx_12 + eax_40 * 0x180) << 2) + &g_a96ae0))(*(sub_46ead0() + esi_9),
                    &var_2c);
                i_5 += 1;
                esi_9 += 4;
                result = sub_46ead0();
            } while (i_5 < *result);
        }
    }

    return result;
}
