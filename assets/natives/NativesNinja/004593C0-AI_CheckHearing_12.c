#include "004593C0-AI_CheckHearing_12.h"
/* 0x004593c0 AI_CheckHearing_12 full linked: callers=0 callees=15 */
void* sub_4593c0(void* a1, int32_t* a2)

{
    void* esi = a2;
    void* ebp = *(esi + 0x800);
    int32_t var_8 = 0x1a;
    int32_t var_4 = 0x18;
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
    label_45945a:
        uint32_t eax_3 = sub_4b47c0(Level_SetMission_5(), 2);
        int32_t ecx_1 = *(esi + 0xd1c);

        if (ecx_1 >= 0)
        {
            if (ecx_1 <= 1)
            {
                long double x87_r0;
                int32_t eax_5 = sub_45daa0(x87_r0, esi, esi + 0xd20);
                char temp0_1 = eax_5;
                eax_5 = -(eax_5);
                a2 = eax_5 - eax_5 + 0x1c;
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
            goto label_45945a;

        a2 = ebp_1;

        if (ebp_1 == 0xffffffff)
            goto label_45945a;
    }

    sub_4d61d0(esi + 0x68, 0, a2, 0, 0f);
    sub_45d5b0(esi + 0xd38, esi, *(esi + 0xcf8), a2);
    Human_ViewCam(esi, 3);
    sub_464700(*(esi + 0x4ec));
    sub_4635f0(esi);
    sub_4638a0(esi, "ai_death_", 4);
    void* result = sub_48a330(esi);
    *(a1 + 0x14) = sub_459680;
    return result;
}
