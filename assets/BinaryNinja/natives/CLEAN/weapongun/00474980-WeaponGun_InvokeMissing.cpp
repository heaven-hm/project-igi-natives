// IGI native provenance: WeaponGun_InvokeMissing - 0x00474980 - CFG score 100.0% (PASS; structural only); runtime behavior not verified.
// Evidence: 00474980-WeaponGun_InvokeMissing.md; Binary Ninja/Radare2 CFG record; catalog: assets/BinaryNinja/IGINatives_VERIFIED.json.
#include "WeaponGun_InvokeMissing.h"

float* WeaponGun_InvokeMissing(float arg1)

{
    double* frame_ptr = arg1;
    DynObj_CreateMagicObject_5(frame_ptr, DynObj_Missing(&frame_ptr[0x36]));
    long double x87_r7 = *(frame_ptr + 0x9c);
    long double x87_r6 = frame_ptr[0x14];
    x87_r6 - x87_r7;
    long double x87_r7_1;

    if (!(*(&((x87_r6 < x87_r7 ? 1 : 0) << 8 | (FCMP_UO(x87_r6, x87_r7) ? 1 : 0) << 0xa
            | (x87_r6 == x87_r7 ? 1 : 0) << 0xe) + 1) & 1))
        x87_r7_1 = frame_ptr[0x14];
    else
        x87_r7_1 = *(frame_ptr + 0x9c);

    long double x87_r6_1 = frame_ptr[0x13];
    x87_r6_1 - x87_r7_1;
    long double x87_r7_3;

    if (*(&((x87_r6_1 < x87_r7_1 ? 1 : 0) << 8 | (FCMP_UO(x87_r6_1, x87_r7_1) ? 1 : 0) << 0xa
        | (x87_r6_1 == x87_r7_1 ? 1 : 0) << 0xe | 0x3800) + 1) & 0x41)
    {
        long double x87_r7_4 = *(frame_ptr + 0x9c);
        long double x87_r6_2 = frame_ptr[0x14];
        x87_r6_2 - x87_r7_4;

        if (!(*(&((x87_r6_2 < x87_r7_4 ? 1 : 0) << 8 | (FCMP_UO(x87_r6_2, x87_r7_4) ? 1 : 0) << 0xa
                | (x87_r6_2 == x87_r7_4 ? 1 : 0) << 0xe) + 1) & 1))
            x87_r7_3 = frame_ptr[0x14];
        else
            x87_r7_3 = *(frame_ptr + 0x9c);
    }
    else
        x87_r7_3 = frame_ptr[0x13];

    float var_14_2 = Render_ComputeNormals(*(frame_ptr + 0x6c)) * x87_r7_3;
    WorldObject_CommitTransform(Level_StartMission_4(), frame_ptr, &frame_ptr[0x1e], var_14_2);
    __builtin_memcpy(&frame_ptr[0xe], &frame_ptr[0x21], 0x28);
    __builtin_memset(&frame_ptr[0x3e], 0, 0x1c);
    frame_ptr[0x43] = 0xffffffff;
    *(frame_ptr + 0x21c) = 0;
    Script_ParseEnumReal32_12(frame_ptr + 0x20c);
    Script_EvaluateCondition_12(frame_ptr);
    Qhash_Init(1);
    int32_t eax_6 = Sys_CheckHeap_22(&frame_ptr[0x38]);
    Qhash_Reset();

    if (HumanPlayer_CheckCollision_10(eax_6))
    {
        Weapon_EntityCreate(frame_ptr, 0, eax_6, *(frame_ptr + 0x1ec), 0);
        double* var_30_1 = frame_ptr;
        Script_CallNativeHandler_12(frame_ptr + 0x20c, nullptr);
        void* var_34_1 = &frame_ptr[0xe];
        Weapon_ComputeAccuracy_3(frame_ptr);
    }

    return Weapon_UpdateRecoil_3(frame_ptr);
}
