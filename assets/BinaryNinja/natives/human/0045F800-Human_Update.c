#include "Human_Update.h"
char* Human_Update(float a1, int32_t* a2)

{
    char valA = a2[2];
    double* ctxB = *a2;
    double* flagP = a2[1];
    char* result;

    if (valA == 0xff)
    {
    label_45f84d:
        result = AI_MoveToNode_17(a1, ctxB, flagP, 1);

        if (result)
        {
            AI_FireWeapon_17(a1);
            return (*((Render_DrawRigidMesh_12() << 2) + &g_a99ae0))(a1, a2);
        }
    }
    else
    {
        int32_t objC1 = 0;
        objC1 = *(a1 + 0x1c);
        int32_t valA5 = *(((valA * 0x180 + objC1) << 2) + &g_a96ae0);

        if (!valA5)
            goto label_45f84d;

        valA5(a1, a2[3]);
        result = a2[3];

        if (*result)
            goto label_45f84d;
    }

    return result;
}
