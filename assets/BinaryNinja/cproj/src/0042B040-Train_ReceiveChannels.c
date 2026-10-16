#include "gi_platform.h"
#include "0042B040-Train_ReceiveChannels.h"
float Train_ReceiveChannels(void* a1, int32_t* a2) __location("valA")

{
    int32_t* tmpD = *a2[1];

    if (tmpD != 0xbf800000)
        (*(int32_t*)(uintptr_t)(a1 + 0x730)) = tmpD;

    if (!*a2)
    {
        (*(int32_t*)(uintptr_t)(a2[1] + 4)) = 0xc0000000;
        (*(int32_t*)(uintptr_t)(a1 + 0x768)) = (*(int32_t*)(uintptr_t)(a1 + 0x76c));
        Script_ParseEnumReal32_28(a1, nullptr);
        Script_CallNativeHandler_16(a1);
        Script_ParseEnumInt32_17(a1);
        CarGun_ConstructPath(a1);
        Menu_LeaveMenus_21(a1, 1);
        long double x87_r7_2 = (*(int32_t*)(uintptr_t)(a1 + 0x754)) * (*(int32_t*)(uintptr_t)(a1 + 0x758)) * 37.9259262.0f;
        (*(int32_t*)(uintptr_t)(a1 + 0x764)) = x87_r7_2;
        (*(int32_t*)(uintptr_t)(a1 + 0x108)) = x87_r7_2;
        (*(int32_t*)(uintptr_t)(a1 + 0x10c)) = 0;
        (*(int32_t*)(uintptr_t)(a1 + 0x110)) = 0;
        float result = SoundSys_InitSoundSys_17(a1 + 0xf0);
        long double x87_r7_3 = (*(int32_t*)(uintptr_t)(a1 + 0x758));
        (*(int32_t*)(uintptr_t)(a1 + 0x730)) = x87_r7_3;
        (*(int32_t*)(uintptr_t)(a1 + 0x720)) = x87_r7_3;
        return result;
    }

    long double x87_r7_4 = (*(int32_t*)(uintptr_t)(a1 + 0x720));
    long double f0 = (*(int32_t*)(uintptr_t)(a1 + 0x730));
    x87_r7_4 - f0;

    if (!(*(&((x87_r7_4 < f0 ? 1 : 0) << 8 | (FCMP_UO(x87_r7_4, f0) ? 1 : 0) << 0xa
        | (x87_r7_4 == f0 ? 1 : 0) << 0xe) + 1) & 1))
    {
        long double x87_r7_7 = (*(int32_t*)(uintptr_t)(a1 + 0x720));
        long double f1_1 = (*(int32_t*)(uintptr_t)(a1 + 0x730));
        x87_r7_7 - f1_1;

        if (!(*(&((x87_r7_7 < f1_1 ? 1 : 0) << 8 | (FCMP_UO(x87_r7_7, f1_1) ? 1 : 0) << 0xa
            | (x87_r7_7 == f1_1 ? 1 : 0) << 0xe) + 1) & 0x41))
        {
            long double x87_r7_9 = (*(int32_t*)(uintptr_t)(a1 + 0x720)) - (*(int32_t*)(uintptr_t)(a1 + 0x750));
            (*(int32_t*)(uintptr_t)(a1 + 0x720)) = x87_r7_9;
            long double f3_1 = (*(int32_t*)(uintptr_t)(a1 + 0x730));
            x87_r7_9 - f3_1;

            if (*(&((x87_r7_9 < f3_1 ? 1 : 0) << 8 | (FCMP_UO(x87_r7_9, f3_1) ? 1 : 0) << 0xa
                    | (x87_r7_9 == f3_1 ? 1 : 0) << 0xe) + 1) & 1)
                (*(int32_t*)(uintptr_t)(a1 + 0x720)) = (*(int32_t*)(uintptr_t)(a1 + 0x730));
        }
    }
    else
    {
        long double x87_r7_6 = (*(int32_t*)(uintptr_t)(a1 + 0x750)) + (*(int32_t*)(uintptr_t)(a1 + 0x720));
        (*(int32_t*)(uintptr_t)(a1 + 0x720)) = x87_r7_6;
        long double f2_1 = (*(int32_t*)(uintptr_t)(a1 + 0x730));
        x87_r7_6 - f2_1;

        if (!(*(&((x87_r7_6 < f2_1 ? 1 : 0) << 8 | (FCMP_UO(x87_r7_6, f2_1) ? 1 : 0) << 0xa
                | (x87_r7_6 == f2_1 ? 1 : 0) << 0xe) + 1) & 0x41))
            (*(int32_t*)(uintptr_t)(a1 + 0x720)) = (*(int32_t*)(uintptr_t)(a1 + 0x730));
    }

    long double x87_r7_13 = (*(int32_t*)(uintptr_t)(a1 + 0x754)) * (*(int32_t*)(uintptr_t)(a1 + 0x720)) * 4096000.0f * 9.25925906e-06.0f;
    (*(int32_t*)(uintptr_t)(a1 + 0x764)) = x87_r7_13;
    (*(int32_t*)(uintptr_t)(a1 + 0x108)) = x87_r7_13;
    (*(int32_t*)(uintptr_t)(a1 + 0x10c)) = 0;
    (*(int32_t*)(uintptr_t)(a1 + 0x110)) = 0;
    SoundSys_InitSoundSys_17(a1 + 0xf0);
    long double x87_r7_14 = (*(int32_t*)(uintptr_t)(a1 + 0x764));

    if ((*(int32_t*)(uintptr_t)(a1 + 0x880)))
        x87_r7_14 = -(x87_r7_14);

    (*(int32_t*)(uintptr_t)(a1 + 0x768)) = x87_r7_14 + (*(int32_t*)(uintptr_t)(a1 + 0x768));
    VehicleChild_Dispatch(a1);
    return Menu_LeaveMenus_21(a1, 0);
}
