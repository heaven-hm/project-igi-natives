#include "gi_platform.h"
#include "0046D990-AmmoPickup_OnEvent.h"
int32_t AmmoPickup_OnEvent(void* a1, int32_t* a2)

{
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

    int32_t* valA1 = (*(int32_t*)(uintptr_t)(a1 + 0x6c));
    float v_30 = x87_r7_3;
    long double x87_r7_6 = Render_ComputeNormals(valA1) * v_30;
    v_30 = x87_r7_6;
    long double f0 = 2867.1999999999998;
    x87_r7_6 - f0;

    if (*(&((x87_r7_6 < f0 ? 1 : 0) << 8 | (FCMP_UO(x87_r7_6, f0) ? 1 : 0) << 0xa
        | (x87_r7_6 == f0 ? 1 : 0) << 0xe) + 1) & 1)
    {
        __builtin_strncpy(&v_30, "ffff", 4);
        int32_t v_2c_1 = 0x40a66666;
    }

    double v_20 = (*(int32_t*)(uintptr_t)(a1 + 0x20)) - (*(int32_t*)(uintptr_t)(a2 + 8));
    double v_18 = (*(int32_t*)(uintptr_t)(a1 + 0x28)) - (*(int32_t*)(uintptr_t)(a2 + 0x10));
    long double x87_r7_12 = (*(int32_t*)(uintptr_t)(a1 + 0x30)) - (*(int32_t*)(uintptr_t)(a2 + 0x18));
    long double f1 = 0.0;
    x87_r7_12 - f1;

    if (*(&((x87_r7_12 < f1 ? 1 : 0) << 8 | (FCMP_UO(x87_r7_12, f1) ? 1 : 0) << 0xa
            | (x87_r7_12 == f1 ? 1 : 0) << 0xe | 0x3800) + 1) & 1)
        x87_r7_12 = -(x87_r7_12);

    double v_28 = x87_r7_12;
    int32_t v_10 = 0;
    int32_t v_c = 0;
    long double fp0_1 = Sys_OpenFileStream_11(&v_20);
    long double f2 = v_30;
    fp0_1 - f2;
    int16_t result = (fp0_1 < f2 ? 1 : 0) << 8 | (FCMP_UO(fp0_1, f2) ? 1 : 0) << 0xa
        | (fp0_1 == f2 ? 1 : 0) << 0xe;

    if (*(&result + 1) & 1)
    {
        long double x87_r7_14 = v_28;
        long double f3_1 = 4096.0;
        x87_r7_14 - f3_1;
        result = (x87_r7_14 < f3_1 ? 1 : 0) << 8 | (FCMP_UO(x87_r7_14, f3_1) ? 1 : 0) << 0xa
            | (x87_r7_14 == f3_1 ? 1 : 0) << 0xe;

        if (*(&result + 1) & 1)
        {
            int32_t tmpD1 = (*(int32_t*)(uintptr_t)(a1 + 0x10c));
            void* objC1 = *a2;
            *(&v_28 + 4) = (*(int32_t*)(uintptr_t)(a1 + 0x130));
            uint32_t valA6 = *g_53fe28;
            v_28 = tmpD1;
            int32_t tmpD2 = 0;
            tmpD2 = *(objC1 + 0x1c);
            int32_t valA9 = *(((tmpD2 + valA6 * 0x180) << 2) + &g_a96ae0);

            if (valA9)
                valA9(objC1, &v_28);

            (*(int32_t*)(uintptr_t)(a1 + 0x109)) = 1;
            return StatusMessage_ShowFull(Script_FormatString(), "PICKEDUPAMMO", "STATUSSCREEN:ammo.spr",
                &g_567c74);
        }
    }

    return result;
}
