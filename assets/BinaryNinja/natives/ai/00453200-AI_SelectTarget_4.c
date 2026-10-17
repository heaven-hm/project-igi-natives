// IGI native provenance: AI_SelectTarget_4 - 0x00453200 - CFG score 100.0% (PASS; structural only); runtime behavior not verified.
// Evidence: 00453200-AI_SelectTarget_4.md; REA/Ghidra static record; catalog: assets/BinaryNinja/IGINatives_VERIFIED.json.
#include "AI_SelectTarget_4.h"
int32_t* AI_SelectTarget_4(int32_t* context)

{
    int32_t* i_1 = g_58aa18;

    for (int32_t* i = *i_1; i; i = *i)
    {
        if (i_1[2] == context[0xedb])
        {
            int32_t* i_2 = i_1;
            return AI_HumanmonitorNoTarget(context);
        }

        i_1 = i;
    }

    int32_t* source_val = g_57c748;

    if (!*source_val)
        return 0;

    Camera_ApplyHandiCam_33(source_val);
    Camera_SetFieldOfView_33(&g_58aa18, source_val);
    int32_t* item_18 = source_val;
    source_val[2] = context[0xedb];
    return AI_HumanmonitorNoTarget(context);
}
