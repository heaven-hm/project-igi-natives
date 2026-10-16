#include "gi_platform.h"
#include "0041EA70-ListBox_Update.h"
int32_t ListBox_Update(void* a1, int32_t a2)

{
    void* valA = (*(int32_t*)(uintptr_t)(a1 + 0xd8));
    void* flagP = (*(int32_t*)(uintptr_t)(a1 + 0xd4));
    void* valA1 = Menu_HandleInput_3((*(int32_t*)(uintptr_t)(a1 + 0x44)), a1 + 0x94);
    int32_t* valA2 = (*(int32_t*)(uintptr_t)(a1 + 0xbf4));

    if (valA2)
    {
        Sys_ReadFileBlock_18(valA2);
        (*(int32_t*)(uintptr_t)(a1 + 0xbf4)) = 0;
    }

    if (valA1)
    {
        int32_t** valA3 = Sys_OpenFileStream_18(valA1, 0, 0, &g_567c74);
        (*(int32_t*)(uintptr_t)(a1 + 0xbf4)) = valA3;
        valA3[8] = 0;
    }

    Script_Isexists(a1 + 0xbf8, a1);
    Script_Isexists(a1 + 0xc48, a1);
    Script_Isexists(a1 + 0xc98, a1);
    Script_Isexists(a1 + 0xce8, a1);

    if ((*(int32_t*)(uintptr_t)(a1 + 0x44)))
    {
        void* v_54_3 = a1 + 0x54;
        char v_40;
        Game_DataSymbolLoad(&v_40, "%s_1.spr");
        void* dstD1 = &v_40;
        int32_t i = 0xffffffff;

        while (i)
        {
            bool cond_0_1 = 0 != *dstD1;
            dstD1 += 1;
            i -= 1;

            if (!cond_0_1)
                break;
        }

        int32_t objC2 = ~i;
        int32_t srcS2;
        int32_t dstD4;
        dstD4 = memcpy((*(int32_t*)(uintptr_t)(a1 + 0xd4)) + 0x54, dstD1 - objC2, objC2 & 0xfffffffc);
        void* v_60_3 = a1 + 0x54;
        memcpy(dstD4, srcS2, objC2 & 3);
        Game_DataSymbolLoad(&v_40, "%s_2.spr");
        void* dstD5 = &v_40;
        int32_t i_1 = 0xffffffff;

        while (i_1)
        {
            bool cond_1_1 = 0 != *dstD5;
            dstD5 += 1;
            i_1 -= 1;

            if (!cond_1_1)
                break;
        }

        int32_t objC6 = ~i_1;
        int32_t srcS4;
        int32_t dstD8;
        dstD8 = memcpy((*(int32_t*)(uintptr_t)(a1 + 0xd8)) + 0x54, dstD5 - objC6, objC6 & 0xfffffffc);
        memcpy(dstD8, srcS4, objC6 & 3);
    }

    (*(int32_t*)(uintptr_t)(*(a1 + 0xd4) + 0x44)) = (*(int32_t*)(uintptr_t)(a1 + 0x44));
    (*(int32_t*)(uintptr_t)(*(a1 + 0xd8) + 0x44)) = (*(int32_t*)(uintptr_t)(a1 + 0x44));
    void* srcS5 = (*(int32_t*)(uintptr_t)(a1 + 0xd4));
    uint32_t valA13 = Script_ParseEnumReal32_8();
    int32_t valA14 = 0;
    valA14 = *(srcS5 + 0x1c);
    ((int(*)())(uintptr_t)(*(((valA13 * 0x180 + valA14) << 2) + &g_a96ae0)))(srcS5, a2);
    void* srcS6 = (*(int32_t*)(uintptr_t)(a1 + 0xd8));
    uint32_t valA17 = Script_ParseEnumReal32_8();
    int32_t tmpD10 = 0;
    tmpD10 = *(srcS6 + 0x1c);
    ((int(*)())(uintptr_t)(*(((valA17 * 0x180 + tmpD10) << 2) + &g_a96ae0)))(srcS6, a2);
    int32_t objC16 = (*(int32_t*)(uintptr_t)(valA + 0x2c));
    int32_t valA21 = *(flagP + 0x2c);

    if (valA21 <= objC16)
        valA21 = objC16;

    (*(int32_t*)(uintptr_t)(a1 + 0x28)) = (*(int32_t*)(uintptr_t)(a1 + 0xbec)) + (*(int32_t*)(uintptr_t)(valA + 0x28)) + *(flagP + 0x28) + 6;
    (*(int32_t*)(uintptr_t)(a1 + 0x2c)) = valA21 + 4;
    return ((int(*)())(uintptr_t)(*(((Script_ParseEnumReal32_8() * 0x180 + Menu_PlayMusic_13()) << 2) + &g_a96ae0)))(a1, a2);
}
