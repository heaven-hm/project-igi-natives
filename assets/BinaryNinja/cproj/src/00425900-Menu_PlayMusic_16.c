#include "gi_platform.h"
#include "00425900-Menu_PlayMusic_16.h"
int32_t* Menu_PlayMusic_16(long double a1 , void* a2)

{
    double* valA = Menu_DrawWidget_16(a2);
    double* v_98 = (*(int32_t*)(uintptr_t)(a2 + 0x68));
    double v_50;
    Script_CallNativeHandler_23(&v_50, v_98);
    double v_80;
    double* v_a0 = &v_80;
    v_80 = *valA - v_50;
    double v_48;
    double v_78 = valA[1] - v_48;
    double v_40;
    double v_70 = valA[2] - v_40;
    long double fp0 = Sys_ReadFileBlock_11(v_a0);
    double v_38 = fp0;
    long double f0 = 3288334336.0;
    fp0 - f0;
    double* v_a8;
    double v_68;

    if (!(*(&((fp0 < f0 ? 1 : 0) << 8 | (FCMP_UO(fp0, f0) ? 1 : 0) << 0xa
        | (fp0 == f0 ? 1 : 0) << 0xe) + 1) & 0x41))
    {
        long double x87_r7_8 = -(v_80);
        v_80 = x87_r7_8;
        void* valA4 = (*(int32_t*)(uintptr_t)(a2 + 0x4c));
        long double x87_r6_1 = -(v_78);
        double v_78_1 = x87_r6_1;
        long double x87_r5_1 = -(v_70);
        double v_70_1 = x87_r5_1;
        v_68 =
            *(valA4 + 0x88) * x87_r5_1 + *(valA4 + 0x7c) * x87_r6_1 + *(valA4 + 0x70) * x87_r7_8;
        double v_60_1 =
            *(valA4 + 0x8c) * x87_r5_1 + *(valA4 + 0x80) * x87_r6_1 + *(valA4 + 0x74) * x87_r7_8;
        double v_58_1 =
            *(valA4 + 0x90) * x87_r5_1 + *(valA4 + 0x84) * x87_r6_1 + *(valA4 + 0x78) * x87_r7_8;
        memcpy(&v_80, &v_68, 0x18);
        memcpy(&v_a8, &v_68, 0x18);
        int32_t valA6 = WeaponType_GetConfig();
        long double f3 = 0.0;
        a1 - f3;
        valA6 = (a1 < f3 ? 1 : 0) << 8 | (FCMP_UO(a1, f3) ? 1 : 0) << 0xa
            | (a1 == f3 ? 1 : 0) << 0xe;
        (*(int32_t*)(uintptr_t)(a2 + 0x6c));
        return valA6;
    }

    double* valA8 = DynObj_UpdateDynTree_4((*(int32_t*)(uintptr_t)(a2 + 0x74)));
    void* objC = (*(int32_t*)(uintptr_t)(a2 + 0x2c));
    v_98 = valA8;
    int32_t* v_84;
    Physics_ApplyImpulse_8(&v_84, objC, v_98);
    int32_t* valA9 = v_84;
    char v_18;
    v_a8 = &v_18;
    Script_CallNativeHandler_23(v_a8, valA9);
    int32_t* valA10 = (*(int32_t*)(uintptr_t)(a2 + 0x68));
    int32_t* objC1 = v_84;

    if (objC1 == valA10)
    {
        (*(int32_t*)(uintptr_t)(a2 + 0x6c));
        return valA10;
    }

    int32_t tmpD = *objC1;
    void* objC2 = (*(int32_t*)(uintptr_t)(a2 + 0x2c));
    v_98 = *valA10;
    int32_t* valA12 = Physics_CheckHullCollision_8(objC2, v_98, tmpD);

    if (!valA12)
        memcpy(&v_68, &v_18, 0x18);
    else
    {
        int32_t tmpD1 = *valA12;
        v_98 = (*(int32_t*)(uintptr_t)(a2 + 0x2c));
        Script_CallNativeHandler_23(&v_68, Script_ExecuteLevelScript_23(v_98, tmpD1));
    }

    long double x87_r7_16 = v_68 - v_50;
    double v_30;
    double* v_94_4 = &v_30;
    v_98 = &v_80;
    v_30 = x87_r7_16;
    double v_60;
    double v_28 = v_60 - v_48;
    double v_58;
    double v_20 = v_58 - v_40;
    int32_t valA15;
    long double fp0_1;
    fp0_1 = Sys_ExecuteBytecode_11(v_98, v_94_4);
    long double x87_r6_5 = (*(int32_t*)(uintptr_t)(a2 + 0x6c));
    long double f1 = 5.0f;
    x87_r6_5 - f1;
    valA15 = (x87_r6_5 < f1 ? 1 : 0) << 8 | (FCMP_UO(x87_r6_5, f1) ? 1 : 0) << 0xa
        | (x87_r6_5 == f1 ? 1 : 0) << 0xe | 0x3800;

    if (*(&valA15 + 1) & 1)
    {
        (*(int32_t*)(uintptr_t)(a2 + 0x6c));
        return valA15;
    }

    long double f2 = 0.17453293005625406;
    fp0_1 - f2;
    valA15 = (fp0_1 < f2 ? 1 : 0) << 8 | (FCMP_UO(fp0_1, f2) ? 1 : 0) << 0xa
        | (fp0_1 == f2 ? 1 : 0) << 0xe | 0x3800;

    if (!(*(&valA15 + 1) & 1))
        return valA15;

    (*(int32_t*)(uintptr_t)(a2 + 0x6c));
    return valA15;
}
