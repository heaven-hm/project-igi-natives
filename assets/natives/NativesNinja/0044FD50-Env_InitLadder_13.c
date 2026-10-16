#include "0044FD50-Env_InitLadder_13.h"
/* 0x0044fd50 Env_InitLadder_13 full linked: callers=1 callees=5 */
int32_t sub_44fd50(int32_t* a1)

{
    int32_t* esi = a1;
    int32_t var_4 = 0x18;
    char var_5 = 0;
    int32_t result = esi[0xf1c];

    if (result)
    {
        if (sub_450dc0(esi))
            var_4 = *(sub_450dc0(esi) + 8);

        result = esi[0x237];
        int32_t ebx_1 = 0;

        if (result > 0)
        {
            a1 = &esi[0x207];

            do
            {
                int32_t ebp_1 = *a1;

                if (ebx_1 < var_4 && sub_4af9b0(&esi[ebp_1 * 3 + 0x1bc]) && !var_5)
                    var_5 = sub_44fc90(esi, ebp_1, ebx_1);

                esi[ebp_1 + 0x21f] = 0;
                void** i_1 = esi[ebp_1 * 3 + 0x1bc];

                for (void** i = *i_1; i; i = *i)
                {
                    sub_44fe50(esi, i_1);
                    i_1 = i;
                    esi[ebp_1 + 0x21f] += 1;
                }

                result = esi[0x237];
                ebx_1 += 1;
                a1 = &a1[1];
            } while (ebx_1 < result);
        }
    }

    return result;
}
