// IGI native provenance: FX_HumancameraHumanlist - 0x00484CF0 - CFG score 100.0% (PASS; structural only); runtime behavior not verified.
// Evidence: 00484CF0-FX_HumancameraHumanlist.md; REA/Ghidra static record; catalog: assets/BinaryNinja/IGINatives_VERIFIED.json.
#include "FX_HumancameraHumanlist.h"
char* FX_HumancameraHumanlist()

{
    QTask_InitContext(g_540992);
    QTask_CloseEvent_2(g_540990);
    char* result = &g_5c118d;

    while (!*result)
    {
        result = &result[8];

        if (result >= 0x5c158d)
            return result;
    }

    Error_Show("HumanCamera humanlist not empty");

    while (true)
        /* nop */
}
