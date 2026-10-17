// Original IGI.EXE function: Menu_UpdateLanguage_22 (VA 0x0042E180; static CFG gate PASS, CFG score 0.974).
#include "Menu_UpdateLanguage_22.h"
int32_t* Menu_UpdateLanguage_22(float context)

{
    int32_t* source_val = context;
    int32_t item_18;
    memset(&item_18, 0, 0x18);
    DynObj_LookupHashItem_6(Level_StartMission_4(), source_val, 0);
    long double fpu7 = source_val[0x27];
    long double fpu6 = source_val[0x28];
    fpu6 - fpu7;
    long double fpu_val_7_1;

    if (!(*(&((fpu6 < fpu7 ? 1 : 0) << 8 | (FCMP_UO(fpu6, fpu7) ? 1 : 0) << 0xa
            | (fpu6 == fpu7 ? 1 : 0) << 0xe) + 1) & 1))
        fpu_val_7_1 = source_val[0x28];
    else
        fpu_val_7_1 = source_val[0x27];

    long double fpu_val_6_1 = source_val[0x26];
    fpu_val_6_1 - fpu_val_7_1;
    long double fpu_val_7_3;

    if (*(&((fpu_val_6_1 < fpu_val_7_1 ? 1 : 0) << 8 | (FCMP_UO(fpu_val_6_1, fpu_val_7_1) ? 1 : 0) << 0xa
        | (fpu_val_6_1 == fpu_val_7_1 ? 1 : 0) << 0xe | 0x3800) + 1) & 0x41)
    {
        long double fpu_val_7_4 = source_val[0x27];
        long double fpu_val_6_2 = source_val[0x28];
        fpu_val_6_2 - fpu_val_7_4;

        if (!(*(&((fpu_val_6_2 < fpu_val_7_4 ? 1 : 0) << 8 | (FCMP_UO(fpu_val_6_2, fpu_val_7_4) ? 1 : 0) << 0xa
                | (fpu_val_6_2 == fpu_val_7_4 ? 1 : 0) << 0xe) + 1) & 1))
            fpu_val_7_3 = source_val[0x28];
        else
            fpu_val_7_3 = source_val[0x27];
    }
    else
        fpu_val_7_3 = source_val[0x26];

    float item_28_2 = Render_ComputeNormals(source_val[0x1b]) * fpu_val_7_3;
    DynObj_LinkDynamicCube_8(Level_StartMission_4(), source_val, &item_18, item_28_2, 2);
    source_val[0x1d3] = SoundSys_Update3DPosition_7(3);
    source_val[0x1d2] = 0;
    source_val[0x55] = 0;
    source_val[0x1d5] = 0;
    source_val[0x1d4] = 0;
    source_val[0x1d6] = 0;
    Script_FormatString_16(source_val);
    source_val[0x1d0] = 0;
    *(source_val + 0x91d) = 0;
    source_val[0x249] = 0xffffffff;
    DynObj_QtasklistIsFull(Level_InitSprites_4(), source_val);
    source_val[0x247] = 0;
    *(source_val + 0x2ed5) = 0;
    source_val[0x248] = 0xffffffff;
    Script_ExecuteLevelScript_6(&source_val[0x24a]);
    Script_ExecuteLevelScript_6(&source_val[0x25e]);
    int32_t* result = Script_ExecuteLevelScript_6(&source_val[0x272]);
    source_val[0xbb0] = 0x43340000;
    source_val[0xbb1] = 0x43b40000;
    source_val[0xbb2] = 0x41f00000;
    source_val[0xbb3] = 1;
    source_val[0xbb4] = 0;
    source_val[0xbb5] = 0;
    return result;
}
