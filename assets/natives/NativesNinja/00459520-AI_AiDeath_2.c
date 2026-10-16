#include "00459520-AI_AiDeath_2.h"
/* 0x00459520 AI_AiDeath_2 full linked: callers=0 callees=11 */
void* sub_459520(void* a1, void* a2)

{
    void* eax = Table_GetAt(a2 + 0x4c4, 0);

    if (eax)
    {
        sub_4f2390(eax);
        sub_4f2070(a2 + 0x4c4, nullptr, nullptr);
    }

    sub_4f2290(a2);
    *(a2 + 0x33d) = 0;
    *(a2 + 0x696) = 1;
    sub_4d61d0(a2 + 0x68, 0, 0x1d, 0, 0f);
    sub_45d5b0(a2 + 0xd38, a2, *(a2 + 0xcf8), 0x1d);
    Human_ViewCam(a2, 3);
    sub_464700(*(a2 + 0x4ec));
    sub_4635f0(a2);
    sub_4638a0(a2, "ai_death_", 4);
    void* result = sub_48a330(a2);
    *(a1 + 0x14) = sub_459680;
    return result;
}
