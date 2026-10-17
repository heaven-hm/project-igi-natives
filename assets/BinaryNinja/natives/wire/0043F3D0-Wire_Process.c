// Original IGI.EXE function: Wire_Process (VA 0x0043F3D0; static CFG gate PASS, CFG score 0.958).
#include "Wire_Process.h"
int32_t Wire_Process(float context)

{
    double item_58 = *(context + 0x108) - *(context + 0xf0);
    double item_50 = *(context + 0x110) - *(context + 0xf8);
    double item_48 = *(context + 0x118) - *(context + 0x100);
    double item_6c = Sys_OpenFileStream_11(&item_58);
    Sys_FreeMemory_11(&item_58);
    float item_64 = item_58;
    float item_60 = item_50;
    float item_5c = item_48;
    float item_28[0xa];
    WeaponType_SetCategory(&item_28, &item_64);
    memcpy(context + 0x70, &item_28, 0x28);
    *(context + 0x9c) = item_6c * 0.000244140625;
    DynObj_CreateMagicObject_5(context, DynObj_Missing(context + 0x120));
    double item_38 = *(context + 0xf8) + *(context + 0x110);
    double item_30 = *(context + 0x100) + *(context + 0x118);
    double item_40 = (*(context + 0x108) + *(context + 0xf0)) * 0.5;
    double item_38_1 = item_38 * 0.5;
    double item_30_1 = item_30 * 0.5;
    long double fpu_val_7_19 = *(context + 0x9c);
    long double fpu_val_6_4 = *(context + 0xa0);
    fpu_val_6_4 - fpu_val_7_19;
    long double fpu_val_7_20;

    if (!(*(&((fpu_val_6_4 < fpu_val_7_19 ? 1 : 0) << 8 | (FCMP_UO(fpu_val_6_4, fpu_val_7_19) ? 1 : 0) << 0xa
            | (fpu_val_6_4 == fpu_val_7_19 ? 1 : 0) << 0xe) + 1) & 1))
        fpu_val_7_20 = *(context + 0xa0);
    else
        fpu_val_7_20 = *(context + 0x9c);

    long double fpu_val_6_5 = *(context + 0x98);
    fpu_val_6_5 - fpu_val_7_20;
    long double fpu_val_7_22;

    if (*(&((fpu_val_6_5 < fpu_val_7_20 ? 1 : 0) << 8 | (FCMP_UO(fpu_val_6_5, fpu_val_7_20) ? 1 : 0) << 0xa
        | (fpu_val_6_5 == fpu_val_7_20 ? 1 : 0) << 0xe | 0x3800) + 1) & 0x41)
    {
        long double fpu_val_7_23 = *(context + 0x9c);
        long double fpu_val_6_6 = *(context + 0xa0);
        fpu_val_6_6 - fpu_val_7_23;

        if (!(*(&((fpu_val_6_6 < fpu_val_7_23 ? 1 : 0) << 8
                | (FCMP_UO(fpu_val_6_6, fpu_val_7_23) ? 1 : 0) << 0xa
                | (fpu_val_6_6 == fpu_val_7_23 ? 1 : 0) << 0xe) + 1) & 1))
            fpu_val_7_22 = *(context + 0xa0);
        else
            fpu_val_7_22 = *(context + 0x9c);
    }
    else
        fpu_val_7_22 = *(context + 0x98);

    long double fpu_val_7_25 = Render_ComputeNormals(*(context + 0x6c)) * fpu_val_7_22;
    return WorldObject_CommitTransform(*(context + 0x68), context, &item_40, fpu_val_7_25);
}
