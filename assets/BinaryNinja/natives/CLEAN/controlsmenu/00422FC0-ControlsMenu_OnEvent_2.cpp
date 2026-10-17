// IGI native provenance: ControlsMenu_OnEvent_2 - 0x00422FC0 - CFG score 100.0% (PASS; structural only); runtime behavior not verified.
// Evidence: 00422FC0-ControlsMenu_OnEvent_2.md; Binary Ninja/Radare2 CFG record; catalog: assets/BinaryNinja/IGINatives_VERIFIED.json.
#include "ControlsMenu_OnEvent_2.h"

void* ControlsMenu_OnEvent_2(void* pThis)

{
    if (*(pThis + 0x54))
        return pThis;

    *(pThis + 0x54) = 1;
    void local_c0;
    Script_ParseEnumString_6(&local_c0, pThis);
    void* buf_cc = &local_c0;
    void local_80;
    return Game_DataSymbolLoad(&local_80, "%s.isOn");
}
