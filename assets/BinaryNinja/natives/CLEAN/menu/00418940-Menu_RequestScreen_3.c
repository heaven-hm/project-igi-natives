// IGI native provenance: Menu_RequestScreen_3 - 0x00418940 - CFG score 100.0% (PASS; structural only); runtime behavior not verified.
// Evidence: 00418940-Menu_RequestScreen_3.md; REA/Ghidra static record; catalog: assets/BinaryNinja/IGINatives_VERIFIED.json.
#include "Menu_RequestScreen_3.h"
void* Menu_RequestScreen_3(void* context)

{
    void* result = *(context + 0x34);

    if (result)
    {
        result = *(context + 0x30);
        *(context + 0x34) = 0;

        if (result)
        {
            void* item_c_1 = context;
            Menu_PlayMusic(result);
            return Menu_PlayMusic_2(context, *(context + 0x30));
        }
    }

    return result;
}
