// IGI native provenance: Gun_Update - 0x00478970 - CFG score 100.0% (PASS; structural only); runtime behavior not verified.
// Evidence: 00478970-Gun_Update.md; REA/Ghidra static record; catalog: assets/BinaryNinja/IGINatives_VERIFIED.json.
#include "Gun_Update.h"
void* Gun_Update(void* context)

{
    if (!*(context + 0x144))
    {
        void* result = *(context + 0x128);

        if (*(result + 0x618) == 5)
            return result;
    }

    return (*((DynObj_LookupHashItem_5() << 2) + &g_a982e0))(context, 0);
}
