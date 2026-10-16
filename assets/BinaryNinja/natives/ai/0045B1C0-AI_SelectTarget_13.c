#include "AI_SelectTarget_13.h"
void* AI_SelectTarget_13(void* a1, int32_t a2)

{
    void* result = Table_GetAt(a2 + 0x4c4, 0);
    int32_t ctxB = *(a1 + 8);

    if (!(ctxB & 4))
    {
        void* tmpD = *(a1 + 4);
        *(a1 + 0xc) = *(a1 + 0x10);
        *(a1 + 0x10) = 0x1d;
        int32_t valA1 = *(tmpD + 0x74);
        *(a1 + 0x14) = valA1;
        return valA1(a1, a2);
    }

    if (ctxB & 0x10000)
    {
        void* objC2 = *(a1 + 4);
        *(a1 + 0xc) = *(a1 + 0x10);
        *(a1 + 0x10) = 0x1e;
        int32_t valA4 = *(objC2 + 0x78);
        *(a1 + 0x14) = valA4;
        return valA4(a1, a2);
    }

    if (ctxB & 0x20000)
    {
        void* valA6 = *(a1 + 4);
        *(a1 + 0xc) = *(a1 + 0x10);
        *(a1 + 0x10) = 0x20;
        int32_t valA7 = *(valA6 + 0x80);
        *(a1 + 0x14) = valA7;
        return valA7(a1, a2);
    }

    if (!(ctxB & 1))
        return result;

    Script_SpawnNewTask_13(result, 1);

    if (!(ctxB & 0x2000000))
    {
        int32_t* objC4 = *(a1 + 4);
        *(a1 + 0xc) = *(a1 + 0x10);
        *(a1 + 0x10) = 0;
        int32_t valA12 = *objC4;
        *(a1 + 0x14) = valA12;
        return valA12(a1, a2);
    }

    void* tmpD2 = *(a1 + 4);
    *(a1 + 0xc) = *(a1 + 0x10);
    *(a1 + 0x10) = 0xa;
    int32_t valA9 = *(tmpD2 + 0x28);
    *(a1 + 0x14) = valA9;
    return valA9(a1, a2);
}
