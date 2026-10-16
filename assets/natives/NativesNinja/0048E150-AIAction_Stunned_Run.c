#include "0048E150-AIAction_Stunned_Run.h"
/* 0x0048e150 AIAction_Stunned_Run full linked: callers=0 callees=6 */
int32_t* sub_48e150(void* a1, int32_t* a2)

{
    char* var_18 = "Stunned";
    int32_t var_1c = 0xffffffff;
    void* var_20 = a1;
    float* esi_1 = a2[0xa] + 8;

    if (esi_1[1] < 0)
        esi_1[1] = Frames_GetUpdateCounter() - *esi_1 * -30f;

    if (Frames_GetUpdateCounter() > esi_1[1])
        return sub_450ff0(a1, a2);

    void* result = sub_48efe0(a1, 3);

    if (result)
        return result;

    return sub_48ef70(a1, 3, 38f);
}
