#include "gi_platform.h"
#include "004769B0-Grenade_LoadParameters.h"
int32_t* Grenade_LoadParameters(float a1)

{
    int32_t v_18;
    __builtin_memset(&v_18, 0, 0x18);
    (*(int32_t*)(uintptr_t)(a1 + 0x728)) = 0;
    (*(int32_t*)(uintptr_t)(a1 + 0x724)) = Frames_GetUpdateCounter();
    (*(int32_t*)(uintptr_t)(a1 + 0x72c)) = 0;
    (*(int32_t*)(uintptr_t)(a1 + 0x730)) = 0;
    DynObj_LookupHashItem_6(Level_StartMission_4(), a1, 0);
    long double fpu7 = (*(int32_t*)(uintptr_t)(a1 + 0x9c));
    long double fpu6 = (*(int32_t*)(uintptr_t)(a1 + 0xa0));
    fpu6 - fpu7;
    long double x87_r7_1;

    if (!(*(&((fpu6 < fpu7 ? 1 : 0) << 8 | (FCMP_UO(fpu6, fpu7) ? 1 : 0) << 0xa
            | (fpu6 == fpu7 ? 1 : 0) << 0xe) + 1) & 1))
        x87_r7_1 = (*(int32_t*)(uintptr_t)(a1 + 0xa0));
    else
        x87_r7_1 = (*(int32_t*)(uintptr_t)(a1 + 0x9c));

    long double x87_r6_1 = (*(int32_t*)(uintptr_t)(a1 + 0x98));
    x87_r6_1 - x87_r7_1;
    long double x87_r7_3;

    if (*(&((x87_r6_1 < x87_r7_1 ? 1 : 0) << 8 | (FCMP_UO(x87_r6_1, x87_r7_1) ? 1 : 0) << 0xa
        | (x87_r6_1 == x87_r7_1 ? 1 : 0) << 0xe | 0x3800) + 1) & 0x41)
    {
        long double x87_r7_4 = (*(int32_t*)(uintptr_t)(a1 + 0x9c));
        long double x87_r6_2 = (*(int32_t*)(uintptr_t)(a1 + 0xa0));
        x87_r6_2 - x87_r7_4;

        if (!(*(&((x87_r6_2 < x87_r7_4 ? 1 : 0) << 8 | (FCMP_UO(x87_r6_2, x87_r7_4) ? 1 : 0) << 0xa
                | (x87_r6_2 == x87_r7_4 ? 1 : 0) << 0xe) + 1) & 1))
            x87_r7_3 = (*(int32_t*)(uintptr_t)(a1 + 0xa0));
        else
            x87_r7_3 = (*(int32_t*)(uintptr_t)(a1 + 0x9c));
    }
    else
        x87_r7_3 = (*(int32_t*)(uintptr_t)(a1 + 0x98));

    float v_24_2 = Render_ComputeNormals((*(int32_t*)(uintptr_t)(a1 + 0x6c))) * x87_r7_3;
    DynObj_LinkDynamicCube_8(Level_StartMission_4(), a1, &v_18, v_24_2, 2);
    return DynObj_QtasklistIsFull(Level_CheckQTaskID_4(), a1);
}
