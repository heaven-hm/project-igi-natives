#include "004546C0-AI_AiDeath.h"
/* 0x004546c0 AI_AiDeath full linked: callers=0 callees=12 */
void* sub_4546c0(void* a1, void* a2)

{
    void* ebp = *(a2 + 0x800);
    void* eax = Table_GetAt(a2 + 0x4c4, 0);

    if (eax)
    {
        sub_4f2390(eax);
        sub_4f2070(a2 + 0x4c4, nullptr, nullptr);
    }

    sub_4f2290(a2);
    *(a2 + 0x33d) = 0;
    *(a2 + 0x696) = 1;
    void* eax_2 = sub_489e10(a2 + 0x254, *(a2 + 0x2e8));
    int32_t* edi_1;

    if (!ebp)
        edi_1 = *(eax_2 + 8);
    else
    {
        int32_t* ebp_1 = *(ebp + 0x3ad0);

        if (ebp_1 == 0xffffffff)
            edi_1 = *(eax_2 + 8);
        else
        {
            edi_1 = ebp_1;

            if (edi_1 == 0xffffffff)
                edi_1 = *(eax_2 + 8);
        }
    }

    sub_4d61d0(a2 + 0x68, 0, edi_1, 0, 0f);
    sub_45d5b0(a2 + 0xd38, a2, *(a2 + 0xcf8), edi_1);
    Human_ViewCam(a2, 3);
    sub_464700(*(a2 + 0x4ec));
    sub_4635f0(a2);
    sub_4638a0(a2, "ai_death_", 4);
    void* result = sub_48a330(a2);
    *(a1 + 0x14) = sub_4547b0;
    return result;
}
