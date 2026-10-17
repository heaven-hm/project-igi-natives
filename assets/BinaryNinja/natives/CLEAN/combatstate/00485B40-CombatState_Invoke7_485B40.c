// IGI native provenance: CombatState_Invoke7_485B40 - 0x00485B40 - CFG score 100.0% (PASS; structural only); runtime behavior not verified.
// Evidence: 00485B40-CombatState_Invoke7_485B40.md; Binary Ninja/Radare2 CFG record; catalog: assets/BinaryNinja/IGINatives_VERIFIED.json.
#include "CombatState_Invoke7_485B40.h"

int32_t CombatState_Invoke7_485B40(void* arg1)

{
    char result = Level_LoadObjects_7();

    if (!result)
    {
        int32_t i = 0;
        char* edi_1 = arg1 + 0x40;

        do
        {
            if (*edi_1)
                result = StatusMessageScreen_OnEvent(arg1, i);

            i += 1;
            edi_1 = &edi_1[0x102c];
        } while (i < 0x18);
    }

    return result;
}
