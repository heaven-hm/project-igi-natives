// Original IGI.EXE function: EditorMagicObj_Create (VA 0x0051B850; static CFG gate PASS, CFG score 1.000).
#include "EditorMagicObj_Create.h"

int32_t* EditorMagicObj_Create(void* pThis, float param)

{
    void* eax_1 = DynObj_Missing(*param);
    DynObj_LookupHashItem_6(*(param + 4), pThis, eax_1);
    long double x87_r7 = *(pThis + 0x9c);
    long double x87_r6 = *(pThis + 0xa0);
    x87_r6 - x87_r7;
    long double x87_r7_1;

    if (!(*(&((x87_r6 < x87_r7 ? 1 : 0) << 8 | (FCMP_UO(x87_r6, x87_r7) ? 1 : 0) << 0xa
            | (x87_r6 == x87_r7 ? 1 : 0) << 0xe) + 1) & 1))
        x87_r7_1 = *(pThis + 0xa0);
    else
        x87_r7_1 = *(pThis + 0x9c);

    long double x87_r6_1 = *(pThis + 0x98);
    x87_r6_1 - x87_r7_1;
    long double x87_r7_3;

    if (*(&((x87_r6_1 < x87_r7_1 ? 1 : 0) << 8 | (FCMP_UO(x87_r6_1, x87_r7_1) ? 1 : 0) << 0xa
        | (x87_r6_1 == x87_r7_1 ? 1 : 0) << 0xe | 0x3800) + 1) & 0x41)
    {
        long double x87_r7_4 = *(pThis + 0x9c);
        long double x87_r6_2 = *(pThis + 0xa0);
        x87_r6_2 - x87_r7_4;

        if (!(*(&((x87_r6_2 < x87_r7_4 ? 1 : 0) << 8 | (FCMP_UO(x87_r6_2, x87_r7_4) ? 1 : 0) << 0xa
                | (x87_r6_2 == x87_r7_4 ? 1 : 0) << 0xe) + 1) & 1))
            x87_r7_3 = *(pThis + 0xa0);
        else
            x87_r7_3 = *(pThis + 0x9c);
    }
    else
        x87_r7_3 = *(pThis + 0x98);

    int32_t edx = *(pThis + 0xd4);
    long double x87_r7_6 = Render_ComputeNormals(*(pThis + 0x6c)) * x87_r7_3;
    DynObj_LinkDynamicCube_8(*(param + 4), pThis, param + 8, x87_r7_6, edx);
    __builtin_memcpy(pThis + 0x70, param + 0x38, 0x28);
    __builtin_memcpy(pThis + 0x108, param + 0x60, 0x28);
    *(pThis + 0x138) = *(param + 0x8c);
    int32_t ebp_1 = *(param + 0x88);
    *(pThis + 0x130) = ebp_1;
    return Car_GunCreate(pThis, pThis, ebp_1);
}
