// IGI native provenance: Render_CallbackNotFound - 0x004D2BD0 - CFG score 100.0% (PASS; structural only); runtime behavior not verified.
// Evidence: 004D2BD0-Render_CallbackNotFound.md; REA/Ghidra static record; catalog: assets/BinaryNinja/IGINatives_VERIFIED.json.
#include "Render_CallbackNotFound.h"
void** Render_CallbackNotFound(int32_t context)

{
    void** i = g_a538e4;
    int32_t* i_1 = nullptr;

    for (; i; i = *i)
    {
        if (i[1] == context)
        {
            if (!i_1)
            {
                g_a538e4 = *i;
                i[1] = 0;
                return i;
            }

            *i_1 = *i;
            i[1] = 0;
            return i;
        }

        i_1 = i;
    }

    Error_Show("Callback not found");

    while (true)
        /* nop */
}
