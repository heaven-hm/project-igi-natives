#include "0047B690-GunShot_Setup.h"
/* 0x0047b690 GunShot_Setup full linked: callers=0 callees=8 */
int32_t sub_47b690(int32_t* a1)

{
    if (a1[0x25])
    {
        int32_t eax_1 = a1[0x1b];
        int32_t ecx_1 = a1[0x1c];
        int32_t* var_c = a1;
        int32_t var_8_1 = eax_1;
        int32_t var_4_1 = ecx_1;
        int32_t i = 0;

        if (*sub_460c60() > 0)
        {
            int32_t esi_1 = 8;
            int32_t* eax_9;

            do
            {
                int32_t eax_4 = 0;
                eax_4 = *(*(sub_460c60() + esi_1) + 0x1c);
                uint32_t eax_6 = sub_460c30();
                (*(((eax_4 + eax_6 * 0x180) << 2) + &g_a96ae0))(*(sub_460c60() + esi_1), &var_c);
                i += 1;
                esi_1 += 4;
                eax_9 = sub_460c60();
            } while (i < *eax_9);
        }
    }

    sub_47b750(a1);
    sub_47c560(a1);
    int32_t result = a1[0x25];

    if (!result)
    {
        result = a1[0x1a];

        if (result)
        {
            result = a1[0x27];

            if (!result)
                return QTask_FindType(a1);
        }
    }

    return result;
}
