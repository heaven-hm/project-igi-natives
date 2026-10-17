// IGI native provenance: menu_high - 0x00418FE0 - CFG score 100.0% (PASS; structural only); runtime behavior not verified.
// Evidence: 00418FE0-menu_high.md; REA/Ghidra static record; catalog: assets/BinaryNinja/IGINatives_VERIFIED.json.
#include "menu_high.h"
int32_t menu_high(void* context, int32_t param_2)

{
    int32_t result = 0;
    int32_t temp_val = *(context + 0xbc);

    if (temp_val > 0)
    {
        int32_t* entity_1 = context + 0x3c;

        while (*entity_1 != param_2)
        {
            result += 1;
            entity_1 = &entity_1[1];

            if (result >= temp_val)
                return result;
        }

        if (*(context + 0xc0) != result)
        {
            Menu_LeaveMenus_2(context, result);
            return SoundSys_AttachLipsync_8("menu_high", 0, 0);
        }
    }

    return result;
}
