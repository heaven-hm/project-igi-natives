// IGI native provenance: MenuUI_Invoke14 - 0x004215D0 - CFG score 100.0% (PASS; structural only); runtime behavior not verified.
// Evidence: 004215D0-MenuUI_Invoke14.md; Binary Ninja/Radare2 CFG record; catalog: assets/BinaryNinja/IGINatives_VERIFIED.json.
#include "MenuUI_Invoke14.h"

char* MenuUI_Invoke14(void* arg1)

{
    return Menu_UpdateLanguage_14(arg1, *(arg1 + 0x20), *(arg1 + 0x24), *(arg1 + 0x28),
        *(arg1 + 0x2c), nullptr, nullptr);
}
