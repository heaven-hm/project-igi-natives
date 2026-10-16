#include "gi_platform.h"
#include "0047EBD0-Weapon_UpdateRecoil_9.h"
int32_t Weapon_UpdateRecoil_9(void* a1, float a2)

{
    long double x87_r7_1 = a2 * 0.5.0f;
    int32_t result = (*(int32_t*)(uintptr_t)(a1 + 0x104));
    int32_t v_4 = 0x3f8eb90c;
    float v_20 = x87_r7_1;
    float v_1c = x87_r7_1;
    long double x87_r7_3 = (*(int32_t*)(uintptr_t)(a1 + 0x110)) * 15.0f;
    int32_t v_18;
    __builtin_strncpy(&v_18, "33KA33KA33KA", 0x14);
    int32_t v_c;

    if (result == 2)
    {
        a2 = 1.0f / x87_r7_3;
        struct status_msg* valA3 = Script_FormatString_30(a1, Level_StartMission_4(), g_5c1158 + 0x18,
            &v_c, &v_18, &v_20, 0x49480000, 8, 0, a2, 0, 0xc8, 0);
        (*(int32_t*)(uintptr_t)(a1 + 0x108)) = valA3;
        Script_ParseEnumReal32_31(valA3, 0);
        uint32_t objC2 = g_5c1160 + 0x18;
        void* valA4 = Level_StartMission_4();
        struct status_msg* valA6 = Script_FormatString_30(Script_FormatString(), valA4, objC2, &v_c, &v_18, &v_20,
            0x49480000, 0x10, 0, a2, 0, 0xc8, 0);
        (*(int32_t*)(uintptr_t)(a1 + 0x10c)) = valA6;
        return Script_ParseEnumReal32_31(valA6, 0);
    }

    if (result != 1)
        return result;

    int32_t objC;
    int32_t v_34 = objC;
    uint32_t tmpD1 = g_5c1160 + 0x18;
    void* valA8 = Level_StartMission_4();
    struct status_msg* valA10 = Script_FormatString_30(Script_FormatString(), valA8, tmpD1, &v_c, &v_18, &v_20,
        0x49480000, 8, 0, 1.0f / x87_r7_3, 0, 0xc8, 0);
    (*(int32_t*)(uintptr_t)(a1 + 0x10c)) = valA10;
    return Script_ParseEnumReal32_31(valA10, 0);
}
