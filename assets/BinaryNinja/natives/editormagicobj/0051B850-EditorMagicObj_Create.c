// Original IGI.EXE function: EditorMagicObj_Create (VA 0x0051B850; static CFG gate PASS, CFG score 1.000).
#include "EditorMagicObj_Create.h"

int32_t* EditorMagicObj_Create(void* pThis, float param)

{
    void* result_val_1 = DynObj_Missing(*param);
    DynObj_LookupHashItem_6(*(param + 4), pThis, result_val_1);
    long double fpu_val_7 = *(pThis + 0x9c);
    long double fpu_val_6 = *(pThis + 0xa0);
    fpu_val_6 - fpu_val_7;
    long double fpu_val_7_1;

    if (!(*(&((fpu_val_6 < fpu_val_7 ? 1 : 0) << 8 | (FCMP_UO(fpu_val_6, fpu_val_7) ? 1 : 0) << 0xa
            | (fpu_val_6 == fpu_val_7 ? 1 : 0) << 0xe) + 1) & 1))
        fpu_val_7_1 = *(pThis + 0xa0);
    else
        fpu_val_7_1 = *(pThis + 0x9c);

    long double fpu_val_6_1 = *(pThis + 0x98);
    fpu_val_6_1 - fpu_val_7_1;
    long double fpu_val_7_3;

    if (*(&((fpu_val_6_1 < fpu_val_7_1 ? 1 : 0) << 8 | (FCMP_UO(fpu_val_6_1, fpu_val_7_1) ? 1 : 0) << 0xa
        | (fpu_val_6_1 == fpu_val_7_1 ? 1 : 0) << 0xe | 0x3800) + 1) & 0x41)
    {
        long double fpu_val_7_4 = *(pThis + 0x9c);
        long double fpu_val_6_2 = *(pThis + 0xa0);
        fpu_val_6_2 - fpu_val_7_4;

        if (!(*(&((fpu_val_6_2 < fpu_val_7_4 ? 1 : 0) << 8 | (FCMP_UO(fpu_val_6_2, fpu_val_7_4) ? 1 : 0) << 0xa
                | (fpu_val_6_2 == fpu_val_7_4 ? 1 : 0) << 0xe) + 1) & 1))
            fpu_val_7_3 = *(pThis + 0xa0);
        else
            fpu_val_7_3 = *(pThis + 0x9c);
    }
    else
        fpu_val_7_3 = *(pThis + 0x98);

    int32_t scratch_val = *(pThis + 0xd4);
    long double fpu_val_7_6 = Render_ComputeNormals(*(pThis + 0x6c)) * fpu_val_7_3;
    DynObj_LinkDynamicCube_8(*(param + 4), pThis, param + 8, fpu_val_7_6, scratch_val);
    memcpy(pThis + 0x70, param + 0x38, 0x28);
    memcpy(pThis + 0x108, param + 0x60, 0x28);
    *(pThis + 0x138) = *(param + 0x8c);
    int32_t frame_ptr_1 = *(param + 0x88);
    *(pThis + 0x130) = frame_ptr_1;
    return Car_GunCreate(pThis, pThis, frame_ptr_1);
}
