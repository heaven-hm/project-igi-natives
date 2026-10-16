#include "gi_platform.h"
#include "0046C490-GenericPickup_Process.h"
void* GenericPickup_Process(float a1)

{
    void* result = DynObj_Missing(a1 + 0x108);

    if (result)
        result = DynObj_CreateMagicObject_5(a1, result);

    result = (*(int32_t*)(uintptr_t)(a1 + 0x11a));

    if (!result)
        return result;

    long double x87_r7_1 = (*(int32_t*)(uintptr_t)(a1 + 0x9c));
    long double x87_r6_1 = (*(int32_t*)(uintptr_t)(a1 + 0xa0));
    x87_r6_1 - x87_r7_1;
    long double x87_r7_2;

    if (!(*(&((x87_r6_1 < x87_r7_1 ? 1 : 0) << 8 | (FCMP_UO(x87_r6_1, x87_r7_1) ? 1 : 0) << 0xa
            | (x87_r6_1 == x87_r7_1 ? 1 : 0) << 0xe) + 1) & 1))
        x87_r7_2 = (*(int32_t*)(uintptr_t)(a1 + 0xa0));
    else
        x87_r7_2 = (*(int32_t*)(uintptr_t)(a1 + 0x9c));

    long double x87_r6_2 = (*(int32_t*)(uintptr_t)(a1 + 0x98));
    x87_r6_2 - x87_r7_2;
    long double x87_r7_4;

    if (*(&((x87_r6_2 < x87_r7_2 ? 1 : 0) << 8 | (FCMP_UO(x87_r6_2, x87_r7_2) ? 1 : 0) << 0xa
        | (x87_r6_2 == x87_r7_2 ? 1 : 0) << 0xe | 0x3800) + 1) & 0x41)
    {
        long double x87_r7_5 = (*(int32_t*)(uintptr_t)(a1 + 0x9c));
        long double x87_r6_3 = (*(int32_t*)(uintptr_t)(a1 + 0xa0));
        x87_r6_3 - x87_r7_5;

        if (!(*(&((x87_r6_3 < x87_r7_5 ? 1 : 0) << 8 | (FCMP_UO(x87_r6_3, x87_r7_5) ? 1 : 0) << 0xa
                | (x87_r6_3 == x87_r7_5 ? 1 : 0) << 0xe) + 1) & 1))
            x87_r7_4 = (*(int32_t*)(uintptr_t)(a1 + 0xa0));
        else
            x87_r7_4 = (*(int32_t*)(uintptr_t)(a1 + 0x9c));
    }
    else
        x87_r7_4 = (*(int32_t*)(uintptr_t)(a1 + 0x98));

    float v_8_3 = Render_ComputeNormals((*(int32_t*)(uintptr_t)(a1 + 0x6c))) * x87_r7_4;
    WorldObject_CommitTransform(Level_StartMission_4(), a1, a1 + 0xf0, v_8_3);
    double* valA3 = DynObj_UpdateDynTree_4(a1);
    return Render_BindTexture_14(Level_StartMission_4(), a1, valA3);
}
