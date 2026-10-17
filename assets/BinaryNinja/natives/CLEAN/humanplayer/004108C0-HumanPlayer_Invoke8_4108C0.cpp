// IGI native provenance: HumanPlayer_Invoke8_4108C0 - 0x004108C0 - CFG score 100.0% (PASS; structural only); runtime behavior not verified.
// Evidence: 004108C0-HumanPlayer_Invoke8_4108C0.md; Binary Ninja/Radare2 CFG record; catalog: assets/BinaryNinja/IGINatives_VERIFIED.json.
#include "HumanPlayer_Invoke8_4108C0.h"

int32_t HumanPlayer_Process(int32_t arg1, int32_t arg2)

{
    return (*(((Script_ParseEnumReal32_8() * 0x180 + AI_UpdateOrders_17()) << 2) + &g_a96ae0))(
        arg1, arg2);
}
