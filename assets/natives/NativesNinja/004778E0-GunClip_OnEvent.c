#include "004778E0-GunClip_OnEvent.h"
/* 0x004778e0 GunClip_OnEvent full linked: callers=0 callees=6 */
int32_t sub_4778e0(void* a1, int32_t a2)

{
    void* edi = *(*(a1 + 0x14) + 0x20);
    int32_t result = sub_4e75a0();

    if (*(edi + 0x138) < result - 1)
        *(a1 + 0x13c) = 0xffffffff;
    else
    {
        if (*(a1 + 0x13c) == 0xffffffff)
            *(a1 + 0x13c) = result;

        result -= *(a1 + 0x13c);

        if (!(result & 1))
        {
            uint32_t eax_2 = sub_4b47c0(Level_StartMission_5(), 3);
            int32_t var_18 = 0;
            int32_t var_14 = 4;
            int32_t var_10 = 7;
            sub_4b3640(a1 + 0x70, a1 + 0x70, (&var_18)[eax_2] * 0.0174532924f);
            int32_t var_c = a2;
            int32_t var_8 = a2 + 0x18;
            void* var_4 = a1;
            uint32_t eax_6 = MagicObj_GetEventId();
            int32_t eax_7 = 0;
            eax_7 = *(a1 + 0x1c);
            int32_t eax_8 = *(((eax_6 * 0x180 + eax_7) << 2) + &g_a96ae0);

            if (eax_8)
                eax_8(a1, &var_c);

            return (*((sub_4c48c0() << 2) + &g_a982e0))(a1, 0);
        }
    }

    return result;
}
