// IGI native provenance: MenuFrame_Update - 0x004225F0 - CFG score 83.3% (FAIL; structural only); runtime behavior not verified.
// Evidence: 004225F0-MenuFrame_Update.md; REA/Ghidra static record; catalog: assets/BinaryNinja/IGINatives_VERIFIED.json.
#include "MenuFrame_Update.h"
int32_t MenuFrame_Update(void* context, int32_t param_2)

{
    (*((Menu_PlayMusic_13() << 2) + &g_a96ae0))(context, param_2);
    memset(context + 0x94, 0, 0x20);
    *(context + 0x54) = 0;
    *(context + 0x20) = 0xdc;
    *(context + 0x24) = 0xdc;
    *(context + 0x28) = 0xc8;
    *(context + 0x2c) = 0x28;
    return 0xdc;
}
