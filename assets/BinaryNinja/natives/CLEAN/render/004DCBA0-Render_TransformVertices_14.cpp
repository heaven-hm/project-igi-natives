// IGI native provenance: Render_TransformVertices_14 - 0x004DCBA0 - CFG score 100.0% (PASS; structural only); runtime behavior not verified.
// Evidence: 004DCBA0-Render_TransformVertices_14.md; REA/Ghidra static record; catalog: assets/BinaryNinja/IGINatives_VERIFIED.json.
#include "Render_TransformVertices_14.h"
void* Render_TransformVertices_14(int32_t* context, void* param_2)

{
    void* result = param_2;
    int32_t* i = *(result + 8);

    if (*i && i)
    {
        do
        {
            int32_t temp_2 = context[2];
            void* entity_2 = *(*(*i[0x1b] + 0xc) + 0xc);
            int32_t* data_4 = *(context[1] + (temp_2 << 2)) * context[4] + *context;
            *(context[5] + data_4) = temp_2;
            context[2] += 1;
            *data_4 = *(entity_2 + 0x50);
            data_4[1] = *(entity_2 + 0x54);
            data_4[2] = *(entity_2 + 0x58);
            data_4[3] = *(entity_2 + 0x5c);
            result = Render_TransformVertices_14(context, i);
            i = *i;

            if (!i)
                break;

            if (!*i)
                break;
        } while (i);
    }

    return result;
}
