// IGI native provenance: MenuUI_Invoke5 - 0x00424260 - CFG score 100.0% (PASS; structural only); runtime behavior not verified.
// Evidence: 00424260-MenuUI_Invoke5.md; Binary Ninja/Radare2 CFG record; catalog: assets/BinaryNinja/IGINatives_VERIFIED.json.
#include "MenuUI_Invoke5.h"

char* MenuUI_Invoke5(void* arg1, char* arg2)

{
    char* result = arg2;

    if (!result || !*result)
    {
        result = *(arg1 + 0x44);

        if (result)
            result = Menu_RequestScreen_5(result);
    }

    return result;
}
