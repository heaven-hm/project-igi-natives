// IGI native provenance: Human_Update - 0x0045F800 - CFG score 100.0% (PASS; structural only); runtime behavior not verified.
// Evidence: 0045F800-Human_Update.md; REA/Ghidra static record; catalog: assets/BinaryNinja/IGINatives_VERIFIED.json.
#include "Human_Update.h"
char* Human_Update(float context, int32_t* param_2)

{
    char data_val = param_2[2];
    double* context_val = *param_2;
    double* flagP = param_2[1];
    char* result;

    if (data_val == 0xff)
    {
    label_45f84d:
        result = AI_MoveToNode_17(context, context_val, flagP, 1);

        if (result)
        {
            AI_FireWeapon_17(context);
            return (*((Render_DrawRigidMesh_12() << 2) + &g_a99ae0))(context, param_2);
        }
    }
    else
    {
        int32_t entity_1 = 0;
        entity_1 = *(context + 0x1c);
        int32_t data_5 = *(((data_val * 0x180 + entity_1) << 2) + &g_a96ae0);

        if (!data_5)
            goto label_45f84d;

        data_5(context, param_2[3]);
        result = param_2[3];

        if (*result)
            goto label_45f84d;
    }

    return result;
}
