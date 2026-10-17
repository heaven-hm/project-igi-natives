// Original IGI.EXE function: AI_FireWeapon_27 (VA 0x0046A9F0; static CFG gate PASS, CFG score 1.000).
#include "AI_FireWeapon_27.h"
int32_t* AI_FireWeapon_27(void* context, void* param_2)

{
    void* dest_val = context;
    AI_CheckSector_26(dest_val);
    int32_t* result = nullptr;
    result = *(param_2 + 0x1c);

    if (*((result << 2) + &g_a994e0))
    {
        uint32_t data_1 = AI_AlertAllies_27();
        int32_t temp_1 = 0;
        temp_1 = *(param_2 + 0x1c);
        result = *(((data_1 * 0x180 + temp_1) << 2) + &g_a96ae0);

        if (result)
        {
            uint32_t data_3 = AI_AlertAllies_27();
            int32_t entity_4 = 0;
            entity_4 = *(param_2 + 0x1c);
            result = (*(((data_3 * 0x180 + entity_4) << 2) + &g_a96ae0))(param_2, &context);
            result = context;

            if (result)
            {
                result = QTask_LinkEventHandler_2(param_2);
                *(dest_val + 0x90) = result;
            }
        }
    }

    return result;
}
