// Original IGI.EXE function: Wire_Process (VA 0x0043F3D0; static CFG gate PASS, CFG score 0.958).
#include "Wire_Process.h"
int32_t Wire_Process(float a1)

{
    double v_58 = *(a1 + 0x108) - *(a1 + 0xf0);
    double v_50 = *(a1 + 0x110) - *(a1 + 0xf8);
    double v_48 = *(a1 + 0x118) - *(a1 + 0x100);
    double v_6c = Sys_OpenFileStream_11(&v_58);
    Sys_FreeMemory_11(&v_58);
    float v_64 = v_58;
    float v_60 = v_50;
    float v_5c = v_48;
    float v_28[0xa];
    WeaponType_SetCategory(&v_28, &v_64);
    memcpy(a1 + 0x70, &v_28, 0x28);
    *(a1 + 0x9c) = v_6c * 0.000244140625;
    DynObj_CreateMagicObject_5(a1, DynObj_Missing(a1 + 0x120));
    double v_38 = *(a1 + 0xf8) + *(a1 + 0x110);
    double v_30 = *(a1 + 0x100) + *(a1 + 0x118);
    double v_40 = (*(a1 + 0x108) + *(a1 + 0xf0)) * 0.5;
    double v_38_1 = v_38 * 0.5;
    double v_30_1 = v_30 * 0.5;
    long double x87_r7_19 = *(a1 + 0x9c);
    long double x87_r6_4 = *(a1 + 0xa0);
    x87_r6_4 - x87_r7_19;
    long double x87_r7_20;

    if (!(*(&((x87_r6_4 < x87_r7_19 ? 1 : 0) << 8 | (FCMP_UO(x87_r6_4, x87_r7_19) ? 1 : 0) << 0xa
            | (x87_r6_4 == x87_r7_19 ? 1 : 0) << 0xe) + 1) & 1))
        x87_r7_20 = *(a1 + 0xa0);
    else
        x87_r7_20 = *(a1 + 0x9c);

    long double x87_r6_5 = *(a1 + 0x98);
    x87_r6_5 - x87_r7_20;
    long double x87_r7_22;

    if (*(&((x87_r6_5 < x87_r7_20 ? 1 : 0) << 8 | (FCMP_UO(x87_r6_5, x87_r7_20) ? 1 : 0) << 0xa
        | (x87_r6_5 == x87_r7_20 ? 1 : 0) << 0xe | 0x3800) + 1) & 0x41)
    {
        long double x87_r7_23 = *(a1 + 0x9c);
        long double x87_r6_6 = *(a1 + 0xa0);
        x87_r6_6 - x87_r7_23;

        if (!(*(&((x87_r6_6 < x87_r7_23 ? 1 : 0) << 8
                | (FCMP_UO(x87_r6_6, x87_r7_23) ? 1 : 0) << 0xa
                | (x87_r6_6 == x87_r7_23 ? 1 : 0) << 0xe) + 1) & 1))
            x87_r7_22 = *(a1 + 0xa0);
        else
            x87_r7_22 = *(a1 + 0x9c);
    }
    else
        x87_r7_22 = *(a1 + 0x98);

    long double x87_r7_25 = Render_ComputeNormals(*(a1 + 0x6c)) * x87_r7_22;
    return WorldObject_CommitTransform(*(a1 + 0x68), a1, &v_40, x87_r7_25);
}
