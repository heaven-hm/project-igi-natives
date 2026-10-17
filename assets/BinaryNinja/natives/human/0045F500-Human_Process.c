// Original IGI.EXE function: Human_Process (VA 0x0045F500; static CFG gate PASS, CFG score 1.000).
#include "Human_Process.h"
char* Human_Process(float context, int32_t* param_2)

{
    char data_val = param_2[3];
    double* context_val = *param_2;
    double* flagP = param_2[1];
    char* result;

    if (data_val == 0xff)
    {
    label_45f54f:
        result = AI_MoveToNode_17(context, context_val, flagP, param_2[2]);

        if (result)
        {
            AI_FireWeapon_17(context);
            return (*((Render_DrawRigidMesh_12() << 2) + &g_a9a0e0))(context, param_2);
        }
    }
    else
    {
        int32_t entity_1 = 0;
        entity_1 = *(context + 0x1c);
        int32_t data_5 = *(((data_val * 0x180 + entity_1) << 2) + &g_a96ae0);

        if (!data_5)
            goto label_45f54f;

        data_5(context, param_2[4]);
        result = param_2[4];

        if (*result)
            goto label_45f54f;
    }

    return result;
}
