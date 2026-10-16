#include "004E9AA0-SoundDefTriggerOnce_Setup.h"
/* 0x004e9aa0 SoundDefTriggerOnce_Setup full linked: callers=0 callees=4 */
int32_t sub_4e9aa0(int32_t a1)

{
    int32_t* esi = a1;

    if (esi[0x49])
        return QTask_FindType(esi);

    int32_t result;

    if (!*(esi + 0x123))
        result = sub_4ea040(esi);
    else
    {
        sub_4ea040(esi);
        result = sub_4e6050();
        esi[0x4a] = 1f / result + esi[0x4a];
    }

    int32_t* i = esi[2];

    if (*i && i)
    {
        int32_t edx_1 = g_afa7e0;

        do
        {
            int32_t* esi_1 = *i;
            void* eax_5;

            if (!esi_1)
                eax_5 = nullptr;
            else
            {
                int32_t eax_2 = *esi_1;
                int32_t eax_3 = -(eax_2);
                eax_5 = (eax_3 - eax_3) & esi_1;
            }

            *((edx_1 << 2) + &g_afa6e0) = eax_5;
            int32_t edx_2 = edx_1 + 1;
            int32_t eax_6 = 0;
            g_afa7e0 = edx_2;
            eax_6 = i[7];
            result = *((eax_6 << 2) + &g_a970e0);

            if (result)
            {
                result = result(i);
                edx_2 = g_afa7e0;
            }

            i = *((edx_2 << 2) + &g_afa6dc);
            edx_1 = edx_2 - 1;
            g_afa7e0 = edx_1;
        } while (i);
    }

    return result;
}
