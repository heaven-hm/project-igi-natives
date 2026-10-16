#include "gi_platform.h"
#include "0046EAE0-AIStationaryGun_LoadParameters.h"
int32_t* AIStationaryGun_LoadParameters(double* a1, float a2)

{
    int32_t* ctxB = a2;
    void* valA1 = DynObj_Missing(*ctxB);

    if (valA1)
    {
        memcpy(&a1[0x1e], &ctxB[8], 0x18);
        memcpy(&a1[0x21], &ctxB[0x18], 0x28);
        a1[0x26] = ctxB[0x22];
        DynObj_LookupHashItem_6(ctxB[1], a1, valA1);
        long double fpu7 = (*(int32_t*)(uintptr_t)(a1 + 0x9c));
        long double fpu6 = a1[0x14];
        fpu6 - fpu7;
        long double x87_r7_1;

        if (!(*(&((fpu6 < fpu7 ? 1 : 0) << 8 | (FCMP_UO(fpu6, fpu7) ? 1 : 0) << 0xa
                | (fpu6 == fpu7 ? 1 : 0) << 0xe) + 1) & 1))
            x87_r7_1 = a1[0x14];
        else
            x87_r7_1 = (*(int32_t*)(uintptr_t)(a1 + 0x9c));

        long double x87_r6_1 = a1[0x13];
        x87_r6_1 - x87_r7_1;
        long double x87_r7_3;

        if (*(&((x87_r6_1 < x87_r7_1 ? 1 : 0) << 8 | (FCMP_UO(x87_r6_1, x87_r7_1) ? 1 : 0) << 0xa
            | (x87_r6_1 == x87_r7_1 ? 1 : 0) << 0xe | 0x3800) + 1) & 0x41)
        {
            long double x87_r7_4 = (*(int32_t*)(uintptr_t)(a1 + 0x9c));
            long double x87_r6_2 = a1[0x14];
            x87_r6_2 - x87_r7_4;

            if (!(*(&((x87_r6_2 < x87_r7_4 ? 1 : 0) << 8
                    | (FCMP_UO(x87_r6_2, x87_r7_4) ? 1 : 0) << 0xa
                    | (x87_r6_2 == x87_r7_4 ? 1 : 0) << 0xe) + 1) & 1))
                x87_r7_3 = a1[0x14];
            else
                x87_r7_3 = (*(int32_t*)(uintptr_t)(a1 + 0x9c));
        }
        else
            x87_r7_3 = a1[0x13];

        long double x87_r7_6 = Render_ComputeNormals((*(int32_t*)(uintptr_t)(a1 + 0x6c))) * x87_r7_3;
        DynObj_LinkDynamicCube_8(ctxB[1], a1, &ctxB[2], x87_r7_6, 1);
        memcpy(&a1[0xe], &ctxB[0xe], 0x28);
        a1[0x37] = ctxB[0x23];
        memcpy(&a1[0x27], &ctxB[2], 0x18);
        memcpy(&a1[0x2a], &ctxB[0xe], 0x28);
        (*(int32_t*)(uintptr_t)(a1 + 0x1bc)) = 0;
        a1[0x38] = 0;
        Script_ParseEnumReal32_12(a1 + 0x1c4);
        Weapon_EntityCreate(a1, 0, *HumanPlayer_ApplyRecoil_10(a1[0x37]), (*(int32_t*)(uintptr_t)(a1[0x37] + 0x2c)),
            0);
        double* v_4c = a1;
        Script_CallNativeHandler_12(a1 + 0x1c4, nullptr);
        AI_FireWeapon_30(a1, a1[0x26] + 0x70);
        int32_t* result = Car_GunCreate(a1, a1, a1[0x26]);
        a1[0x3a] = 0;
        (*(int32_t*)(uintptr_t)(a1 + 0x1d4)) = 0;
        (*(int32_t*)(uintptr_t)(a1 + 0x1e4)) = 0;
        a1[0x3b] = 0;
        return result;
    }

    int32_t __saved_ebp_1 = *ctxB;
    Error_Show("VirModel "%s" not available");

    while (true)
        /* nop */
}
