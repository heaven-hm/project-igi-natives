#include "004567C0-AI_CombatTarget_9.h"
/* 0x004567c0 AI_CombatTarget_9 full linked: callers=0 callees=14 */
struct status_msg* sub_4567c0(void* a1, int32_t* a2)

{
    void* esi = a2;
    void* ebp = *(esi + 0x800);
    int32_t var_8 = 0xe;
    int32_t var_4 = 0xc;
    a2 = 0xffffffff;
    void* eax = Table_GetAt(esi + 0x4c4, 0);

    if (eax)
    {
        sub_4f2390(eax);
        sub_4f2070(esi + 0x4c4, nullptr, nullptr);
    }

    sub_4f2290(esi);
    *(esi + 0x33d) = 0;
    *(esi + 0x696) = 1;
    int32_t ebx_1 = *(esi + 0x2e8);
    int32_t eax_1 = sub_489e10(esi + 0x254, ebx_1);

    if (!ebp)
    {
    label_45685a:
        uint32_t eax_3 = sub_4b47c0(Level_SetMission_5(), 2);
        int32_t ecx_1 = *(esi + 0xd08);

        if (ecx_1 >= 0)
        {
            if (ecx_1 <= 1)
            {
                long double x87_r0;
                int32_t eax_5 = sub_45daa0(x87_r0, esi, esi + 0xd10);
                char temp0_1 = eax_5;
                eax_5 = -(eax_5);
                a2 = eax_5 - eax_5 + 0x10;
            }
            else if (ecx_1 == 2)
            {
                if (ebx_1 == 0xf || ebx_1 == 0x10)
                    a2 = *(eax_1 + (eax_3 << 2) + 8);
                else
                    a2 = (&var_8)[eax_3];
            }
        }
    }
    else
    {
        int32_t* ebp_1 = *(ebp + 0x3ad0);

        if (ebp_1 == 0xffffffff)
            goto label_45685a;

        a2 = ebp_1;

        if (ebp_1 == 0xffffffff)
            goto label_45685a;
    }

    sub_4d61d0(esi + 0x68, 0, a2, 0, 0f);
    sub_45d5b0(esi + 0xd28, esi, *(esi + 0xcf8), a2);
    Human_ViewCam(esi, 3);
    sub_464700(*(esi + 0x4ec));
    sub_4635f0(esi);
    struct status_msg* result = sub_4638a0(esi, "ai_death_", 4);
    *(a1 + 0x14) = sub_456920;
    return result;
}
