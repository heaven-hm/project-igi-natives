#include "0043AF90-Radio_LoadParameters.h"
/* 0x0043af90 Radio_LoadParameters full linked: callers=0 callees=15 */
int32_t* Radio_LoadParameters(int80_t a1 @ st0, void* a2)

{
    int32_t ebp = *(a2 + 0x240);
    (*((sub_481340() << 2) + &g_a970e0))(a2);

    if (*(a2 + 0x190))
        *(a2 + 0x240) = 0;
    else if (sub_4f16c0(a2 + 0x244))
    {
        sub_4f16e0(a2 + 0x244, a2);
        *(a2 + 0x240) = a1;
    }

    int32_t* result = *(a2 + 0x238);

    if (!*(a2 + 0x240))
    {
        if (result)
        {
            int32_t eax_19 = *result;

            if (eax_19)
                sub_4e6c00(eax_19);

            result = Qtask_UpdateList(*(a2 + 0x238));
            *(a2 + 0x238) = 0;
        }

        if (ebp)
        {
            result = sub_4e6b00(a2, a2 + 0x2d4);

            if (result)
                return sub_4e6c30(result, a2 + 0x20);
        }
    }
    else if (!result)
    {
    label_43b02e:
        int32_t eax_9 = *(a2 + 0x23c);

        if (eax_9)
        {
            *(a2 + 0x23c) = eax_9 - 1;
            return eax_9 - 1;
        }

        struct status_msg* eax_14 =
            sub_4e6b00(a2, (sub_4b47c0(Level_SetMission_5(), 4) << 4) + a2 + 0x294);
        result = sub_4b47c0(Level_SetMission_5(), 0x96) + 0x96;
        *(a2 + 0x23c) = result;

        if (eax_14)
        {
            *(a2 + 0x238) = QTask_LinkEventHandler_2(eax_14);
            return sub_4e6c30(eax_14, a2 + 0x20);
        }
    }
    else if (!*result)
    {
        if (result)
        {
            Qtask_UpdateList(result);
            *(a2 + 0x238) = 0;
        }

        goto label_43b02e;
    }

    return result;
}
