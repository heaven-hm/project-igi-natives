// IGI native provenance: AI_FireWeapon_27 - 0x0046A9F0 - CFG score 100.0% (PASS; structural only); runtime behavior not verified.
// Evidence: 0046A9F0-AI_FireWeapon_27.md; REA/Ghidra static record; catalog: assets/BinaryNinja/IGINatives_VERIFIED.json.
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
