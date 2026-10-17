// IGI native provenance: Menu_HandleInput_22 - 0x0042F7C0 - CFG score 100.0% (PASS; structural only); runtime behavior not verified.
// Evidence: 0042F7C0-Menu_HandleInput_22.md; REA/Ghidra static record; catalog: assets/BinaryNinja/IGINatives_VERIFIED.json.
#include "Menu_HandleInput_22.h"
void* Menu_HandleInput_22(void* context)

{
    void* result = *(*(context + 0x1b4) + 0x2d4);
    *(context + 0x758) = 0;
    *(context + 0x754) = 0;

    if (!*(result + 0x260))
        *(context + 0x750) = *(result + 0x118);

    int32_t i = 0;

    if (*(result + 0x118) > 0)
    {
        int32_t context_val;
        int32_t item_c_1 = context_val;
        bool* entity_3 = context + 0x75c;
        char* source_1 = result + 0x11c;

        do
        {
            if (source_1[1])
                *(context + 0x758) += 1;

            if (*source_1)
                *(context + 0x754) += 1;

            *entity_3 = !*(result + 0x260);
            i += 1;
            source_1 = &source_1[0x14];
            entity_3 = &entity_3[0x1c];
        } while (i < *(result + 0x118));
    }

    return result;
}
