// IGI native provenance: PhysicsRigid_ProcessVirModelsnotavai - 0x004D9B10 - CFG score 100.0% (PASS; structural only); runtime behavior not verified.
// Evidence: 004D9B10-PhysicsRigid_ProcessVirModelsnotavai.md; Binary Ninja/Radare2 CFG record; catalog: assets/BinaryNinja/IGINatives_VERIFIED.json.
#include "PhysicsRigid_ProcessVirModelsnotavai.h"

int32_t* PhysicsRigid_ProcessVirModelsnotavai(void* arg1, float arg2)

{
    int32_t context_val;
    int32_t var_4_1 = context_val;
    int32_t* frame_ptr = arg2;
    int32_t* result = DynObj_Missing(*frame_ptr);

    if (!result)
    {
        int32_t __saved_edi_1 = *frame_ptr;
        Warning_Show("VirModel "%s" not available");
    }

    DynObj_LookupHashItem_6(frame_ptr[1], arg1, result);
    long double x87_r7 = *(arg1 + 0x9c);
    long double x87_r6 = *(arg1 + 0xa0);
    x87_r6 - x87_r7;
    long double x87_r7_1;

    if (!(*(&((x87_r6 < x87_r7 ? 1 : 0) << 8 | (FCMP_UO(x87_r6, x87_r7) ? 1 : 0) << 0xa
            | (x87_r6 == x87_r7 ? 1 : 0) << 0xe) + 1) & 1))
        x87_r7_1 = *(arg1 + 0xa0);
    else
        x87_r7_1 = *(arg1 + 0x9c);

    long double x87_r6_1 = *(arg1 + 0x98);
    x87_r6_1 - x87_r7_1;
    long double x87_r7_3;

    if (*(&((x87_r6_1 < x87_r7_1 ? 1 : 0) << 8 | (FCMP_UO(x87_r6_1, x87_r7_1) ? 1 : 0) << 0xa
        | (x87_r6_1 == x87_r7_1 ? 1 : 0) << 0xe | 0x3800) + 1) & 0x41)
    {
        long double x87_r7_4 = *(arg1 + 0x9c);
        long double x87_r6_2 = *(arg1 + 0xa0);
        x87_r6_2 - x87_r7_4;

        if (!(*(&((x87_r6_2 < x87_r7_4 ? 1 : 0) << 8 | (FCMP_UO(x87_r6_2, x87_r7_4) ? 1 : 0) << 0xa
                | (x87_r6_2 == x87_r7_4 ? 1 : 0) << 0xe) + 1) & 1))
            x87_r7_3 = *(arg1 + 0xa0);
        else
            x87_r7_3 = *(arg1 + 0x9c);
    }
    else
        x87_r7_3 = *(arg1 + 0x98);

    int32_t eax_3 = *(arg1 + 0xd4);
    long double x87_r7_6 = Render_ComputeNormals(*(arg1 + 0x6c)) * x87_r7_3;
    DynObj_LinkDynamicCube_8(frame_ptr[1], arg1, &frame_ptr[2], x87_r7_6, eax_3);
    __builtin_memcpy(arg1 + 0x70, &frame_ptr[0xe], 0x28);
    __builtin_memcpy(arg1 + 0xf0, &frame_ptr[8], 0x18);
    __builtin_memcpy(arg1 + 0x108, &frame_ptr[0x18], 0x28);
    int32_t ebp_1 = frame_ptr[0x22];
    *(arg1 + 0x130) = ebp_1;

    if (!result)
        return result;

    return Car_GunCreate(arg1, arg1, ebp_1);
}
