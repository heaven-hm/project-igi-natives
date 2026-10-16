#include "HumanPlayer_ApplyRecoil_7.h"
int32_t HumanPlayer_ApplyRecoil_7(void* a1, void* a2)

{
    if (*(a2 + 0xd4c) != 0xffffffff)
    {
        void* tmpD1 = *(a1 + 4);
        *(a1 + 0xc) = *(a1 + 0x10);
        *(a1 + 0x10) = 4;
        int32_t objC2 = *(tmpD1 + 0x10);
        *(a1 + 0x14) = objC2;
        return objC2(a1, a2);
    }

    char result = AI_CheckSector_22(*(a2 + 0x4ec));

    if (!result)
        return result;

    *(a2 + 0x4d0) = 1;
    int32_t tmpD2 = *(a1 + 0x10);
    *(a1 + 0x10) = 1;
    void* objC3 = *(a1 + 4);
    *(a1 + 0xc) = tmpD2;
    int32_t objC4 = *(objC3 + 4);
    *(a1 + 0x14) = objC4;
    return objC4(a1, a2);
}
