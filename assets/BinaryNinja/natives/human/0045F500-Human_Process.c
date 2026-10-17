// Original IGI.EXE function: Human_Process (VA 0x0045F500; static CFG gate PASS, CFG score 1.000).
#include "Human_Process.h"
char* Human_Process(float a1, int32_t* a2)

{
    char valA = a2[3];
    double* ctxB = *a2;
    double* flagP = a2[1];
    char* result;

    if (valA == 0xff)
    {
    label_45f54f:
        result = AI_MoveToNode_17(a1, ctxB, flagP, a2[2]);

        if (result)
        {
            AI_FireWeapon_17(a1);
            return (*((Render_DrawRigidMesh_12() << 2) + &g_a9a0e0))(a1, a2);
        }
    }
    else
    {
        int32_t objC1 = 0;
        objC1 = *(a1 + 0x1c);
        int32_t valA5 = *(((valA * 0x180 + objC1) << 2) + &g_a96ae0);

        if (!valA5)
            goto label_45f54f;

        valA5(a1, a2[4]);
        result = a2[4];

        if (*result)
            goto label_45f54f;
    }

    return result;
}
