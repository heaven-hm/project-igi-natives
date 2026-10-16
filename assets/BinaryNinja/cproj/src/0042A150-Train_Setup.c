#include "gi_platform.h"
#include "0042A150-Train_Setup.h"
int32_t Train_Setup(void* a1, char* a2)

{
    int32_t srcS;

    if (!a2 || !*a2)
        srcS = 0;
    else
        srcS = 1;

    (*(int32_t*)(uintptr_t)(a1 + 0x768)) = (*(int32_t*)(uintptr_t)(a1 + 0x76c));
    DynObj_CreateMagicObject_5(a1, DynObj_Missing(a1 + 0x780));
    float v_18;
    WeaponType_RegisterType_2(&v_18, a1, 0);
    float v_c;
    WeaponType_RegisterType_2(&v_c, a1, 1);
    long double x87_r7_1 = v_18 - v_c;
    long double f0 = 0.0f;
    x87_r7_1 - f0;

    if (*(&((x87_r7_1 < f0 ? 1 : 0) << 8 | (FCMP_UO(x87_r7_1, f0) ? 1 : 0) << 0xa
            | (x87_r7_1 == f0 ? 1 : 0) << 0xe | 0x3800) + 1) & 1)
        x87_r7_1 = -(x87_r7_1);

    (*(int32_t*)(uintptr_t)(a1 + 0x74c)) = x87_r7_1;
    long double fpu6 = v_18;
    long double f1 = 0.0f;
    fpu6 - f1;
    long double x87_r6_1 = v_18;

    if (*(&((fpu6 < f1 ? 1 : 0) << 8 | (FCMP_UO(fpu6, f1) ? 1 : 0) << 0xa
            | (fpu6 == f1 ? 1 : 0) << 0xe | 0x3000) + 1) & 1)
        x87_r6_1 = -(x87_r6_1);

    (*(int32_t*)(uintptr_t)(a1 + 0x748)) = x87_r6_1 / x87_r7_1;
    Script_ParseEnumReal32_28(a1, nullptr);
    Script_CallNativeHandler_16(a1);
    Script_ParseEnumInt32_17(a1);
    CarGun_ConstructPath(a1);
    void* valA4 = (*(int32_t*)(uintptr_t)(a1 + 0x14));
    void* v_2c_2;

    if (*(valA4 + 0x1c) == g_57bcb8)
        v_2c_2 = valA4;
    else
        v_2c_2 = a1;

    Menu_LeaveMenus_21(v_2c_2, srcS);
    int32_t* i = (*(int32_t*)(uintptr_t)(*(a1 + 0xe8) + 8));

    if (*i && i)
    {
        int32_t objC3 = g_afa7e0;

        do
        {
            int32_t* tmpD1 = *i;
            void* valA8;

            if (!tmpD1)
                valA8 = nullptr;
            else
            {
                int32_t valA5 = *tmpD1;
                int32_t valA6 = -(valA5);
                valA8 = (valA6 - valA6) & tmpD1;
            }

            *((objC3 << 2) + &g_afa6e0) = valA8;
            g_afa7e0 = objC3 + 1;
            uint32_t valA10 = Script_ParseEnumReal32_8();
            int32_t objC5 = 0;
            objC5 = i[7];
            int32_t valA14 = *(((valA10 * 0x180 + objC5) << 2) + &g_a96ae0);

            if (valA14)
                valA14(i, a2);

            objC3 = g_afa7e0 - 1;
            g_afa7e0 = objC3;
            i = *((objC3 << 2) + &g_afa6e0);
        } while (i);
    }

    Script_Isexists(a1 + 0x890, a1);
    return 0;
}
