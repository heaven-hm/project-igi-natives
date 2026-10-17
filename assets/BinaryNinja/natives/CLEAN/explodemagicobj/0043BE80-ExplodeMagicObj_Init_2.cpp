// IGI native provenance: ExplodeMagicObj_Init_2 - 0x0043BE80 - CFG score 100.0% (PASS; structural only); runtime behavior not verified.
// Evidence: 0043BE80-ExplodeMagicObj_Init_2.md; Binary Ninja/Radare2 CFG record; catalog: assets/BinaryNinja/IGINatives_VERIFIED.json.
#include "ExplodeMagicObj_Init_2.h"

int32_t* ExplodeMagicObj_Init_2(float pThis, int32_t* param)

{
    DynObj_QtasklistIsFull(Level_InitTextures_4(), pThis);
    void* result_val_2 = DynObj_Missing(*param);

    if (result_val_2)
    {
        memcpy(pThis + 0xf0, &param[8], 0x18);
        memcpy(pThis + 0x108, &param[0x18], 0x28);
        DynObj_LookupHashItem_6(param[1], pThis, result_val_2);
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

            if (!(*(&((fpu_val_6_2 < fpu_val_7_4 ? 1 : 0) << 8
                    | (FCMP_UO(fpu_val_6_2, fpu_val_7_4) ? 1 : 0) << 0xa
                    | (fpu_val_6_2 == fpu_val_7_4 ? 1 : 0) << 0xe) + 1) & 1))
                fpu_val_7_3 = *(pThis + 0xa0);
            else
                fpu_val_7_3 = *(pThis + 0x9c);
        }
        else
            fpu_val_7_3 = *(pThis + 0x98);

        long double fpu_val_7_6 = Render_ComputeNormals(*(pThis + 0x6c)) * fpu_val_7_3;
        DynObj_LinkDynamicCube_8(param[1], pThis, &param[2], fpu_val_7_6, 2);
        memcpy(pThis + 0x70, &param[0xe], 0x28);
        void* result_val_6 = param[0x23];
        *(pThis + 0x13c) = 0;
        *(pThis + 0x138) = result_val_6;
        int32_t counter_val_2 = *(result_val_6 + 0x10);
        *(pThis + 0x148) = 0;
        *(pThis + 0x140) = counter_val_2;
        *(pThis + 0x144) = *(result_val_6 + 0x1c);
        int32_t base_ptr_1 = param[0x22];
        *(pThis + 0x130) = base_ptr_1;
        return Car_GunCreate(pThis, pThis, base_ptr_1);
    }

    int32_t saved_esi_1 = *param;
    Error_Show("VirModel "%s" not available");

    while (true)
        /* nop */
}
