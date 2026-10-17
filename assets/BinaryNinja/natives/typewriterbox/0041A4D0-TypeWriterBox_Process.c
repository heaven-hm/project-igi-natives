// Original IGI.EXE function: TypeWriterBox_Process (VA 0x0041A4D0; static CFG gate PASS, CFG score 1.000).
#include "TypeWriterBox_Process.h"
int32_t TypeWriterBox_Process(void* a1, int32_t a2)

{
    int32_t i_3 = 4;
    void* valA = *(a1 + 0x44);
    int32_t* srcS = a1 + 0x78;
    *(a1 + 0x58) = 0x539c48;
    *(a1 + 0x5c) = 0x82;
    int32_t* ctxB = srcS;
    int32_t i;

    do
    {
        int32_t* valA1 = *ctxB;

        if (valA1)
            Sys_ReadFileBlock_18(valA1);

        ctxB = &ctxB[1];
        i = i_3;
        i_3 -= 1;
    } while (i != 1);

    if (valA)
    {
        char* v_10 = "font1.fnt";
        char* v_c_1 = "font2.fnt";
        char* v_8_1 = "font3.fnt";
        char* v_4_1 = "font4.fnt";
        char** ctxB1 = &v_10;
        int32_t i_4 = 4;
        int32_t i_1;

        do
        {
            void* valA3 = Menu_HandleInput_3(valA, *ctxB1);

            if (valA3)
            {
                int32_t** valA4 = Sys_OpenFileStream_18(valA3, 0, 0, &g_567c74);
                *srcS = valA4;
                valA4[8] = 0;
            }

            ctxB1 = &ctxB1[1];
            srcS = &srcS[1];
            i_1 = i_4;
            i_4 -= 1;
        } while (i_1 != 1);
        int32_t i_2 = 0;

        if (*(a1 + 0x5c) > 0)
        {
            void* ctxB2 = nullptr;

            do
            {
                void* srcS2 = ctxB2 + *(a1 + 0x58);

                if (!*(srcS2 + 0x18))
                    *(srcS2 + 0x20) = *(srcS2 + 0x1c);
                else
                    *(srcS2 + 0x20) = Menu_LocalSS(*(a1 + 0x44), *(srcS2 + 0x1c));

                i_2 += 1;
                ctxB2 += 0x24;
            } while (i_2 < *(a1 + 0x5c));
        }
    }

    return (*(((Script_ParseEnumReal32_8() * 0x180 + Menu_PlayMusic_13()) << 2) + &g_a96ae0))(a1, a2);
}
