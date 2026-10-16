#include "gi_platform.h"
#include "0043F3D0-Wire_Process.h"
int32_t Wire_Process(float a1)

{
    double v_58 = (*(int32_t*)(uintptr_t)(a1 + 0x108)) - (*(int32_t*)(uintptr_t)(a1 + 0xf0));
    double v_50 = (*(int32_t*)(uintptr_t)(a1 + 0x110)) - (*(int32_t*)(uintptr_t)(a1 + 0xf8));
    double v_48 = (*(int32_t*)(uintptr_t)(a1 + 0x118)) - (*(int32_t*)(uintptr_t)(a1 + 0x100));
    double v_6c = Sys_OpenFileStream_11(&v_58);
    Sys_FreeMemory_11(&v_58);
    float v_64 = v_58;
    float v_60 = v_50;
    float v_5c = v_48;
    float v_28[0xa];
    WeaponType_SetCategory(&v_28, &v_64);
    memcpy(a1 + 0x70, &v_28, 0x28);
    (*(int32_t*)(uintptr_t)(a1 + 0x9c)) = v_6c * 0.000244140625;
    DynObj_CreateMagicObject_5(a1, DynObj_Missing(a1 + 0x120));
    double v_38 = (*(int32_t*)(uintptr_t)(a1 + 0xf8)) + (*(int32_t*)(uintptr_t)(a1 + 0x110));
    double v_30 = (*(int32_t*)(uintptr_t)(a1 + 0x100)) + (*(int32_t*)(uintptr_t)(a1 + 0x118));
    double v_40 = ((*(int32_t*)(uintptr_t)(a1 + 0x108)) + (*(int32_t*)(uintptr_t)(a1 + 0xf0))) * 0.5;
    double v_38_1 = v_38 * 0.5;
    double v_30_1 = v_30 * 0.5;
    long double x87_r7_19 = (*(int32_t*)(uintptr_t)(a1 + 0x9c));
    long double x87_r6_4 = (*(int32_t*)(uintptr_t)(a1 + 0xa0));
    x87_r6_4 - x87_r7_19;
    long double x87_r7_20;

    if (!(*(&((x87_r6_4 < x87_r7_19 ? 1 : 0) << 8 | (FCMP_UO(x87_r6_4, x87_r7_19) ? 1 : 0) << 0xa
            | (x87_r6_4 == x87_r7_19 ? 1 : 0) << 0xe) + 1) & 1))
        x87_r7_20 = (*(int32_t*)(uintptr_t)(a1 + 0xa0));
    else
        x87_r7_20 = (*(int32_t*)(uintptr_t)(a1 + 0x9c));

    long double x87_r6_5 = (*(int32_t*)(uintptr_t)(a1 + 0x98));
    x87_r6_5 - x87_r7_20;
    long double x87_r7_22;

    if (*(&((x87_r6_5 < x87_r7_20 ? 1 : 0) << 8 | (FCMP_UO(x87_r6_5, x87_r7_20) ? 1 : 0) << 0xa
        | (x87_r6_5 == x87_r7_20 ? 1 : 0) << 0xe | 0x3800) + 1) & 0x41)
    {
        long double x87_r7_23 = (*(int32_t*)(uintptr_t)(a1 + 0x9c));
        long double x87_r6_6 = (*(int32_t*)(uintptr_t)(a1 + 0xa0));
        x87_r6_6 - x87_r7_23;

        if (!(*(&((x87_r6_6 < x87_r7_23 ? 1 : 0) << 8
                | (FCMP_UO(x87_r6_6, x87_r7_23) ? 1 : 0) << 0xa
                | (x87_r6_6 == x87_r7_23 ? 1 : 0) << 0xe) + 1) & 1))
            x87_r7_22 = (*(int32_t*)(uintptr_t)(a1 + 0xa0));
        else
            x87_r7_22 = (*(int32_t*)(uintptr_t)(a1 + 0x9c));
    }
    else
        x87_r7_22 = (*(int32_t*)(uintptr_t)(a1 + 0x98));

    long double x87_r7_25 = Render_ComputeNormals((*(int32_t*)(uintptr_t)(a1 + 0x6c))) * x87_r7_22;
    return WorldObject_CommitTransform((*(int32_t*)(uintptr_t)(a1 + 0x68)), a1, &v_40, x87_r7_25);
}
