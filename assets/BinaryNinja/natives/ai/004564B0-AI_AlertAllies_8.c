#include "AI_AlertAllies_8.h"
void* AI_AlertAllies_8(void* a1, int32_t a2)

{
    void* result = Table_GetAt(a2 + 0x4c4, 0);
    int32_t objC = *(a1 + 8);

    if (!(objC & 4))
    {
        void* tmpD1 = *(a1 + 4);
        *(a1 + 0xc) = *(a1 + 0x10);
        *(a1 + 0x10) = 0xb;
        int32_t valA1 = *(tmpD1 + 0x2c);
        *(a1 + 0x14) = valA1;
        return valA1(a1, a2);
    }

    if (objC & 0x10000)
    {
        void* objC2 = *(a1 + 4);
        *(a1 + 0xc) = *(a1 + 0x10);
        *(a1 + 0x10) = 0xc;
        int32_t valA4 = *(objC2 + 0x30);
        *(a1 + 0x14) = valA4;
        return valA4(a1, a2);
    }

    if (objC & 0x20000)
    {
        void* valA6 = *(a1 + 4);
        *(a1 + 0xc) = *(a1 + 0x10);
        *(a1 + 0x10) = 0xd;
        int32_t valA7 = *(valA6 + 0x34);
        *(a1 + 0x14) = valA7;
        return valA7(a1, a2);
    }

    if (!(objC & 1))
        return result;

    Script_SpawnNewTask_13(result, 1);
    void* tmpD3 = *(a1 + 4);
    *(a1 + 0xc) = *(a1 + 0x10);
    *(a1 + 0x10) = 7;
    int32_t valA9 = *(tmpD3 + 0x1c);
    *(a1 + 0x14) = valA9;
    return valA9(a1, a2);
}
