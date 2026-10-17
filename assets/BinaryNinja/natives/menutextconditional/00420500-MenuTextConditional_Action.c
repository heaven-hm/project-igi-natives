// IGI native provenance: MenuTextConditional_Action - 0x00420500 - CFG score 100.0% (PASS; structural only); runtime behavior not verified.
// Evidence: 00420500-MenuTextConditional_Action.md; REA/Ghidra static record; catalog: assets/BinaryNinja/IGINatives_VERIFIED.json.
#include "MenuTextConditional_Action.h"
int32_t MenuTextConditional_Action(void* context, int32_t param_2)

{
    int32_t result = *(context + 0x214);

    if (!result)
        return result;

    return (*(((Menu_RequestScreen_15() * 0x180 + Menu_PlayMusic_13()) << 2) + &g_a96ae0))(context,
        param_2);
}
