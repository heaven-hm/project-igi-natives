// IGI native provenance: MenuUI_Invoke8 - 0x00419C50 - CFG score 100.0% (PASS; structural only); runtime behavior not verified.
// Evidence: 00419C50-MenuUI_Invoke8.md; Binary Ninja/Radare2 CFG record; catalog: assets/BinaryNinja/IGINatives_VERIFIED.json.
#include "MenuUI_Invoke8.h"

int32_t MenuUI_Invoke8(int32_t arg1, int32_t arg2)

{
    return (*(((Script_ParseEnumReal32_8() * 0x180 + Menu_PlayMusic_13()) << 2) + &g_a96ae0))(arg1,
        arg2);
}
