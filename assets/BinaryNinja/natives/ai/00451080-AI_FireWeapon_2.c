// Original IGI.EXE function: AI_FireWeapon_2 (VA 0x00451080; static CFG gate PASS, CFG score 0.917).
#include "AI_FireWeapon_2.h"
int32_t* AI_FireWeapon_2(void* a1, void* a2)

{
    int32_t objC;
    int32_t v_4 = objC;
    int32_t* srcS = g_58a9d8;
    int32_t* result = nullptr;

    for (int32_t* i = *srcS; i; i = *i)
    {
        if (srcS[2])
        {
            void* valA3 = *srcS[3];

            if (a2 && valA3 == a2)
            {
                if (AI_UpdatePatrol_19(valA3) == AI_UpdatePatrol_19(a2))
                {
                    result = srcS;

                    if (!srcS)
                        break;

                    int32_t valA8 = *(a1 + 0x14);
                    srcS[srcS[0x4a] + 0x24] = 0xffffffff;
                    srcS[srcS[0x4a] + 4] = valA8;
                    srcS[0x4a] += 1;
                    memcpy(&srcS[0x44], DynObj_UpdateDynTree_4(a2), 0x18);
                    return result;
                }

                result = nullptr;
            }
        }

        srcS = i;
    }

    int32_t valA6 = 0;
    char* objC1 = &g_57d840;

    while (*objC1)
    {
        objC1 = &objC1[0x130];
        valA6 += 1;

        if (objC1 >= &g_57e1c0)
            return result;
    }

    *(valA6 * 0x130 + 0x57d844) = QTask_LinkEventHandler_2(a2);
    *(valA6 * 0x130 + 0x57d960) = 1;
    *(valA6 * 0x130 + 0x57d840) = 1;
    *(valA6 * 0x130 + 0x57d964) = 0;
    int32_t objC6 = *(a1 + 0x14);
    *(valA6 * 0x130 + 0x57d8c8) = 0xffffffff;
    *(valA6 * 0x130 + 0x57d848) = objC6;
    memcpy(valA6 * 0x130 + 0x57d948, DynObj_UpdateDynTree_4(a2), 0x18);
    *(valA6 * 0x130 + 0x57d83c) = 0;
    *(valA6 * 0x130 + 0x57d838) = 0;
    Camera_SetFieldOfView_33(&g_58a9d8, valA6 * 0x130 + 0x57d838);
    return valA6 * 0x130 + 0x57d838;
}
