// IGI native provenance: AI_AnimationDNotFound - 0x00453A30 - CFG score 100.0% (PASS; structural only); runtime behavior not verified.
// Evidence: 00453A30-AI_AnimationDNotFound.md; REA/Ghidra static record; catalog: assets/BinaryNinja/IGINatives_VERIFIED.json.
#include "AI_AnimationDNotFound.h"
int32_t AI_AnimationDNotFound(void* context, void* param_2)

{
    int32_t data_val = *(param_2 + 0xcfc);
    *(param_2 + 0x33d) = 0;
    *(param_2 + 0x696) = 0;

    if (data_val == 0xffffffff)
    {
        int32_t data_6 = Human_StateAnimation(param_2, *(context + 0x10), 0.0f);
        *(context + 0x14) = sub_453ae0;
        return data_6;
    }

    if (Render_BindTexture_11(param_2 + 0x68, 0, data_val))
    {
        int32_t data_3 = Bones_PlayAnimation(param_2 + 0x68, 0, *(param_2 + 0xcfc), 0, 0.0f);
        *(context + 0x14) = sub_453ae0;
        return data_3;
    }

    int32_t item_c_1 = *(param_2 + 0xcfc);
    Warning_Show("Animation #%d not found");
    int32_t data_5 = Human_StateAnimation(param_2, *(context + 0x10), 0.0f);
    *(context + 0x14) = sub_453ae0;
    return data_5;
}
