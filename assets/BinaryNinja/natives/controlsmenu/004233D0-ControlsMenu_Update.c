// Original IGI.EXE function: ControlsMenu_Update (VA 0x004233D0; static CFG gate PASS, CFG score 1.000).
#include "ControlsMenu_Update.h"
int32_t ControlsMenu_Update(void* a1, int32_t a2)

{
    void* dstD = a1;
    int32_t* srcS1 = dstD + 0x154;
    int32_t i_2 = 0x1b;
    int32_t i;

    do
    {
        int32_t* valA1 = srcS1[-0x40];

        if (valA1)
        {
            Sys_ReadFileBlock_18(valA1);
            srcS1[-0x40] = 0;
        }

        int32_t* valA2 = *srcS1;

        if (valA2)
        {
            Sys_ReadFileBlock_18(valA2);
            *srcS1 = 0;
        }

        srcS1 = &srcS1[1];
        i = i_2;
        i_2 -= 1;
    } while (i != 1);
    void* valA3 = *(dstD + 0x44);
    void* ctxB1;

    if (!valA3)
        ctxB1 = a1;
    else
        ctxB1 = Menu_HandleInput_3(valA3, "font1.fnt");

    if (ctxB1)
    {
        int32_t i_1 = 0;
        int32_t*** dstD1 = dstD + 0x154;

        do
        {
            int32_t v_4;
            Config_Moveleft(i_1, nullptr, &v_4);
            int32_t** valA7 = Sys_OpenFileStream_18(ctxB1, 0, 0, Menu_LocalSS(*(a1 + 0x44), v_4));
            dstD1[-0x40] = valA7;
            valA7[8] = 0;
            int32_t** valA8 = Sys_OpenFileStream_18(ctxB1, 0, 0, &g_567c74);
            *dstD1 = valA8;
            valA8[8] = 0;
            i_1 += 1;
            dstD1 = &dstD1[1];
        } while (i_1 < 0x1b);

        dstD = a1;
    }

    return (*(((Script_ParseEnumReal32_8() * 0x180 + Menu_PlayMusic_13()) << 2) + &g_a96ae0))(dstD, a2);
}
