#include "Smoke_Process.h"
void* Smoke_Process(void* a1)

{
    memcpy(a1 + 0x40, a1 + 0x28, 0x18);
    int32_t* objC = *(a1 + 0xf4);

    if (objC)
    {
        long double x87_r7_1 = *(a1 + 0x124);
        long double f0_1 = *(a1 + 0x128);
        x87_r7_1 - f0_1;

        if (*(&((x87_r7_1 < f0_1 ? 1 : 0) << 8 | (FCMP_UO(x87_r7_1, f0_1) ? 1 : 0) << 0xa
            | (x87_r7_1 == f0_1 ? 1 : 0) << 0xe) + 1) & 0x40)
        {
            QTask_FindType(objC);
            *(a1 + 0xf4) = 0;
        }
    }

    int32_t valA2 = *(a1 + 0x124);
    *(a1 + 0x171) = 0;
    *(a1 + 0x128) = valA2;

    if (!*(a1 + 0xf4))
    {
        float objC1 = *(a1 + 0x80);
        float v_78 = 1f;
        int32_t v_74_1 = 0;
        int32_t v_70_1 = 0;
        int32_t v_6c_1 = 0;
        int32_t v_68_1 = 0x3f800000;
        int32_t v_64_1 = 0;
        int32_t v_60_1 = 0;
        int32_t v_5c_1 = 0;
        int32_t v_58_1 = 0x3f800000;
        int32_t v_54_1 = 0;
        float v_28[0xa];
        Sys_OpenFileStream_12(&v_28, &v_78, objC1);
        void v_50;
        Sys_AllocateMemory_12(&v_50, &v_28, *(a1 + 0x7c));
        int32_t v_30;
        *(a1 + 0x78) = v_30;
        int32_t valA5 = *(a1 + 0x110);
        int32_t v_48;
        *(a1 + 0x70) = v_48;
        int32_t v_3c;
        *(a1 + 0x74) = v_3c;
        float v_98;
        float objC4;

        if (!valA5)
            objC4 = 2.4979255e-38f;
        else if (valA5 == 1)
            objC4 = 2.35099094e-38f;
        else if (valA5 != 2)
            objC4 = v_98;
        else
            objC4 = 2.35099319e-38f;

        int32_t valA9 = *(a1 + 0x118);
        uint32_t valA13;

        if (!valA9)
            valA13 = g_57bdc8 + 0x18;
        else if (valA9 == 1)
            valA13 = g_57be44 + 0x18;
        else if (valA9 == 2)
            valA13 = g_57be48 + 0x18;
        else
            valA13 = g_57be4c + 0x18;

        long double x87_r7_3 = *(a1 + 0x84) * 4096f;
        int32_t tmpD4 = *(a1 + 0xf8);
        float v_b4_2 = objC4;
        v_98 = x87_r7_3;
        float v_94_1 = x87_r7_3;
        long double x87_r7_5 = *(a1 + 0x104) * 63f;
        int32_t v_90 = 0;
        int32_t v_8c_1 = 0;
        int32_t v_88_1 = 0;
        float v_84 = x87_r7_5;
        float v_80_1 = *(a1 + 0x108) * 63f;
        float v_7c_1 = *(a1 + 0x10c) * 63f;
        float v_b4_3 = *(a1 + 0x114) * 0.0333333351f;
        void* valA15 = Level_StartMission_4();
        struct status_msg* valA17 = Script_FormatString_30(Script_FormatString(), valA15, valA13, &v_90, &v_84,
            &v_98, 0x48c80000, objC4, 0, v_b4_3, 0, tmpD4, 0);
        *(a1 + 0xf4) = valA17;
        Script_ParseEnumReal32_31(valA17, 0);
    }

    Script_Isexists(a1 + 0xa4, a1);
    return Vehicle_DeployGear_6(a1);
}
