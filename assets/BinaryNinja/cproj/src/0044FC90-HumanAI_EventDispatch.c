#include "gi_platform.h"
#include "0044FC90-HumanAI_EventDispatch.h"
int32_t HumanAI_EventDispatch(void* a1, int32_t a2, int32_t a3)

{
    int32_t v_8;
    int32_t* i_2 = &v_8;
    int32_t** v_4 = &i_2;
    g_5bda5c = &i_2;
    g_5bda60 = a1 + ((a2 * 3 + 0x1bc) << 2);
    g_5bda64 = a3;
    g_5bda58 = a1;
    void* tmpD1 = (*(int32_t*)(uintptr_t)(a1 + 0x3c70));
    char ctxB = 0;
    v_8 = 0;
    Qvm_Execute(tmpD1);
    int32_t valA2 = Camera_ApplyPostProcess_33(&i_2);

    if (valA2 > 1)
    {
        int32_t valA3 = AI_UpdatePatrol_2(g_5bda58, &i_2);
        valA3 = 1;
        return valA3;
    }

    if (valA2 == 1)
    {
        int32_t* i_1 = i_2;
        int32_t* i = *i_1;

        if (i)
        {
            ctxB = 1;

            do
            {
                Camera_ApplyHandiCam_33(i_1);
                valA2 = AI_UpdateSensors(g_5bda58, i_1);
                i_1 = i;
                i = *i;
            } while (i);
        }
    }

    valA2 = ctxB;
    return valA2;
}
