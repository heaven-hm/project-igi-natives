#include "gi_platform.h"
#include "00447830-Door_Process.h"
int32_t* Door_Process(uint32_t a1, char* a2)

{
    char* dstD = a1 + 0x148;
    void* valA = DynObj_Missing(dstD);

    if (!valA && dstD && (*(int32_t*)(uintptr_t)(a1 + 0x149)) != 0x2a)
    {
        char* v_114_1 = dstD;
        char v_80;
        Game_DataSymbolLoad(&v_80, "Model "%s" not available");
        int32_t i = 0xffffffff;

        while (i)
        {
            bool cond_0_1 = 0 != *dstD;
            dstD = &dstD[1];
            i -= 1;

            if (!cond_0_1)
                break;
        }

        int32_t objC1 = ~i;
        char v_100;
        int32_t srcS2;
        int32_t dstD2;
        dstD2 = memcpy(&v_100, dstD - objC1, objC1 & 0xfffffffc);
        memcpy(dstD2, srcS2, objC1 & 3);
        void* v_120_1 = &v_100;
        Game_DataSymbolLoad(a1 + 0x148, "** %s **");
    }

    DynObj_CreateMagicObject_5(a1, valA);
    Env_ActivateEntity_7(a1);
    memcpy(a1 + 0x70, a1 + 0x110, 0x28);
    char* dstD6 = a2;

    if (dstD6 && *dstD6)
    {
        memcpy(a1 + 0x2c8, a1 + 0x20, 0x18);
        memcpy(a1 + 0x29c, a1 + 0x110, 0x28);
        dstD6 = a2;
    }

    Script_Isexists(a1 + 0x1a0, a1);
    Script_Isexists(a1 + 0x1f0, a1);
    Script_Isexists(a1 + 0x240, a1);
    long double fpu7 = (*(int32_t*)(uintptr_t)(a1 + 0x10c));
    long double fpu6 = (*(int32_t*)(uintptr_t)(a1 + 0x108));
    (*(int32_t*)(uintptr_t)(a1 + 0x19a)) = 1;
    (*(int32_t*)(uintptr_t)(a1 + 0x19c)) = 1;
    (*(int32_t*)(uintptr_t)(a1 + 0x199)) = 0;
    (*(int32_t*)(uintptr_t)(a1 + 0x290)) = 0;
    (*(int32_t*)(uintptr_t)(a1 + 0x19b)) = 0;
    long double x87_r7_1 = sqrtl(fpu6 * fpu6 + fpu7 * fpu7);
    long double f0 = 0.0f;
    x87_r7_1 - f0;

    if (*(&((x87_r7_1 < f0 ? 1 : 0) << 8 | (FCMP_UO(x87_r7_1, f0) ? 1 : 0) << 0xa
            | (x87_r7_1 == f0 ? 1 : 0) << 0xe | 0x3800) + 1) & 1)
        x87_r7_1 = -(x87_r7_1);

    (*(int32_t*)(uintptr_t)(a1 + 0x194)) = x87_r7_1;
    Env_UpdateCameraLens_8(a1);
    void* valA7 = (*(int32_t*)(uintptr_t)(a1 + 0x2e0));

    if (valA7)
    {
        SoundSys_SetFrequency_7(valA7);
        (*(int32_t*)(uintptr_t)(a1 + 0x2e0)) = 0;
    }

    int32_t* valA8 = (*(int32_t*)(uintptr_t)(a1 + 0xe8));

    if (valA8)
        QTask_FindType(valA8);

    struct status_msg* valA9 = CarGun_Create(nullptr, a1);
    (*(int32_t*)(uintptr_t)(a1 + 0xe8)) = valA9;
    int32_t* result = Car_GunCreate(valA9, a1, a1);
    int32_t* i_1 = (*(int32_t*)(uintptr_t)(a1 + 8));

    if (*i_1 && i_1)
    {
        int32_t objC6 = g_afa7e0;

        do
        {
            int32_t* tmpD1 = *i_1;
            void* valA13;

            if (!tmpD1)
                valA13 = nullptr;
            else
            {
                int32_t valA10 = *tmpD1;
                int32_t valA11 = -(valA10);
                valA13 = (valA11 - valA11) & tmpD1;
            }

            *((objC6 << 2) + &g_afa6e0) = valA13;
            g_afa7e0 = objC6 + 1;
            uint32_t valA15 = Script_ParseEnumReal32_8();
            int32_t valA16 = 0;
            valA16 = i_1[7];
            result = *(((valA15 * 0x180 + valA16) << 2) + &g_a96ae0);

            if (result)
                result = result(i_1, dstD6);

            objC6 = g_afa7e0 - 1;
            g_afa7e0 = objC6;
            i_1 = *((objC6 << 2) + &g_afa6e0);
        } while (i_1);
    }

    memcpy(a1 + 0x2c8, a1 + 0x20, 0x18);
    memcpy(a1 + 0x29c, a1 + 0x70, 0x28);
    return result;
}
