// Original IGI.EXE function: HumanPlayerInput_LoadParameters (VA 0x0045DCF0; static CFG gate PASS, CFG score 0.917).
#include "HumanPlayerInput_LoadParameters.h"
int32_t HumanPlayerInput_LoadParameters(int80_t a1 @ fp0, void* a2)

{
    void* flagP = *(a2 + 0x14);
    void v_a0;

    if (!*(a2 + 0x81))
    {
    label_45dd48:
        void* v_c4_1 = a2;
        AI_CheckSector_16(&v_a0);

        if (*(a2 + 0x80))
        {
            int32_t valA5 = *(a2 + 0x18c);

            if (valA5 < 0x2328)
            {
                memcpy(valA5 * 0xa0 + *(a2 + 0x188), &v_a0, 0xa0);
                int32_t valA7 = *(a2 + 0x190) + 1;
                *(a2 + 0x18c) += 1;
                *(a2 + 0x190) = valA7;
            }
        }
    }
    else
    {
        int32_t objC1 = *(a2 + 0x190);

        if (!objC1)
            goto label_45dd48;

        int32_t valA1 = *(a2 + 0x18c);

        if (valA1 >= objC1)
            goto label_45dd48;

        memcpy(&v_a0, valA1 * 0xa0 + *(a2 + 0x184), 0xa0);
        *(a2 + 0x18c) = valA1 + 1;
    }

    if (!Script_FormatString_6(a2 + 0x194))
        AI_FireWeapon_29(1);
    else
    {
        Script_SpawnNewTask_7(a2 + 0x194, a2);
        AI_FireWeapon_29(a1);
    }

    int32_t v_b0 = 0xffffffff;
    void* v_ac = &v_a0;
    uint32_t valA11 = Script_ParseEnumReal32_15();
    int32_t valA12 = 0;
    valA12 = *(flagP + 0x1c);
    int32_t result = *(((valA11 * 0x180 + valA12) << 2) + &g_a96ae0);

    if (!result)
        return result;

    return result(flagP, &v_b0);
}
