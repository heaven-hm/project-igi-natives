#include "gi_platform.h"
#include "0042B500-Train_Process.h"
int32_t Train_Process(float a1, void* a2)

{
    memcpy(a2, a1 + 0x20, 0x18);
    (*(int32_t*)(uintptr_t)(a2 + 0x18)) = 0;
    (*(int32_t*)(uintptr_t)(a2 + 0x1c)) = 0;
    (*(int32_t*)(uintptr_t)(a2 + 0x20)) = 0;
    memcpy(a2 + 0x24, a1 + 0x70, 0x28);
    float v_50;
    Sys_DispatchOpcode_12(&v_50, -1.57079637.0f);
    float v_44;
    float v_38;
    float v_28 = v_44 * (*(int32_t*)(uintptr_t)(a2 + 0x28)) + v_38 * (*(int32_t*)(uintptr_t)(a2 + 0x2c)) + v_50 * (*(int32_t*)(uintptr_t)(a2 + 0x24));
    float v_4c;
    float v_40;
    float v_34;
    float v_24 = v_40 * (*(int32_t*)(uintptr_t)(a2 + 0x28)) + v_34 * (*(int32_t*)(uintptr_t)(a2 + 0x2c)) + v_4c * (*(int32_t*)(uintptr_t)(a2 + 0x24));
    float v_48;
    float v_3c;
    float v_30;
    float v_20 = v_3c * (*(int32_t*)(uintptr_t)(a2 + 0x28)) + v_30 * (*(int32_t*)(uintptr_t)(a2 + 0x2c)) + v_48 * (*(int32_t*)(uintptr_t)(a2 + 0x24));
    float v_1c = v_44 * (*(int32_t*)(uintptr_t)(a2 + 0x34)) + v_38 * (*(int32_t*)(uintptr_t)(a2 + 0x38)) + v_50 * (*(int32_t*)(uintptr_t)(a2 + 0x30));
    float v_18 = v_40 * (*(int32_t*)(uintptr_t)(a2 + 0x34)) + v_34 * (*(int32_t*)(uintptr_t)(a2 + 0x38)) + v_4c * (*(int32_t*)(uintptr_t)(a2 + 0x30));
    float v_14 = v_3c * (*(int32_t*)(uintptr_t)(a2 + 0x34)) + v_30 * (*(int32_t*)(uintptr_t)(a2 + 0x38)) + v_48 * (*(int32_t*)(uintptr_t)(a2 + 0x30));
    int32_t v_2c;
    int32_t v_4 = (*(int32_t*)(uintptr_t)(a2 + 0x48)) + v_2c + 1;
    float v_10 = v_38 * (*(int32_t*)(uintptr_t)(a2 + 0x44)) + v_50 * (*(int32_t*)(uintptr_t)(a2 + 0x3c)) + v_44 * (*(int32_t*)(uintptr_t)(a2 + 0x40));
    float v_c = v_34 * (*(int32_t*)(uintptr_t)(a2 + 0x44)) + v_4c * (*(int32_t*)(uintptr_t)(a2 + 0x3c)) + v_40 * (*(int32_t*)(uintptr_t)(a2 + 0x40));
    float v_8 = v_30 * (*(int32_t*)(uintptr_t)(a2 + 0x44)) + v_48 * (*(int32_t*)(uintptr_t)(a2 + 0x3c)) + v_3c * (*(int32_t*)(uintptr_t)(a2 + 0x40));
    memcpy(a2 + 0x24, &v_28, 0x28);
    long double x87_r7_36 = (*(int32_t*)(uintptr_t)(a1 + 0x9c));
    long double x87_r6_36 = (*(int32_t*)(uintptr_t)(a1 + 0xa0));
    x87_r6_36 - x87_r7_36;
    long double x87_r7_37;

    if (!(*(&((x87_r6_36 < x87_r7_36 ? 1 : 0) << 8 | (FCMP_UO(x87_r6_36, x87_r7_36) ? 1 : 0) << 0xa
            | (x87_r6_36 == x87_r7_36 ? 1 : 0) << 0xe) + 1) & 1))
        x87_r7_37 = (*(int32_t*)(uintptr_t)(a1 + 0xa0));
    else
        x87_r7_37 = (*(int32_t*)(uintptr_t)(a1 + 0x9c));

    long double x87_r6_37 = (*(int32_t*)(uintptr_t)(a1 + 0x98));
    x87_r6_37 - x87_r7_37;
    long double x87_r7_39;

    if (*(&((x87_r6_37 < x87_r7_37 ? 1 : 0) << 8 | (FCMP_UO(x87_r6_37, x87_r7_37) ? 1 : 0) << 0xa
        | (x87_r6_37 == x87_r7_37 ? 1 : 0) << 0xe | 0x3800) + 1) & 0x41)
    {
        long double x87_r7_40 = (*(int32_t*)(uintptr_t)(a1 + 0x9c));
        long double x87_r6_38 = (*(int32_t*)(uintptr_t)(a1 + 0xa0));
        x87_r6_38 - x87_r7_40;

        if (!(*(&((x87_r6_38 < x87_r7_40 ? 1 : 0) << 8
                | (FCMP_UO(x87_r6_38, x87_r7_40) ? 1 : 0) << 0xa
                | (x87_r6_38 == x87_r7_40 ? 1 : 0) << 0xe) + 1) & 1))
            x87_r7_39 = (*(int32_t*)(uintptr_t)(a1 + 0xa0));
        else
            x87_r7_39 = (*(int32_t*)(uintptr_t)(a1 + 0x9c));
    }
    else
        x87_r7_39 = (*(int32_t*)(uintptr_t)(a1 + 0x98));

    int16_t result;
    long double fp0;
    fp0 = Render_ComputeNormals((*(int32_t*)(uintptr_t)(a1 + 0x6c)));
    (*(int32_t*)(uintptr_t)(a2 + 0x4c)) = fp0 * x87_r7_39;
    int32_t* ctxB1 = (*(int32_t*)(uintptr_t)(a2 + 0x50));

    if (ctxB1)
    {
        *ctxB1 = g_53bd1c[0];
        result = g_53bd1c[4][0];
        ctxB1[1] = result;
    }

    return result;
}
