// Original IGI.EXE function: MovieSubtitle_RegisterMedia (VA 0x004150E0; static CFG gate PASS, CFG score 1.000).
#include "MovieSubtitle_RegisterMedia.h"

int32_t MovieSubtitle_RegisterMedia(void* pThis, int32_t* param)

{
    int32_t eax;
    void* ecx;
    int32_t edx;
    eax = Sys_AllocateMemory_16("LANGUAGE:movies.res");
    void* pThis_1;

    if (!eax)
    {
        pThis_1 = pThis;
        *(pThis_1 + 0x30) = 0;
    }
    else
    {
        char* index = "LANGUAGE:movies.res";
        pThis_1 = pThis;
        *(pThis_1 + 0x30) = Resource_Load(eax, edx, ecx, nullptr);
    }

    void* eax_2 = Config_GetActivePlayerProfileRecord();

    if (eax_2)
        Display_CloseDevice_3(eax_2 + 0x11f, eax_2 + 0x1f);

    *(pThis_1 + 0x24) = 0;
    *(pThis_1 + 0x20) = *param;
    *(pThis_1 + 0x34) = param[2];
    int32_t* eax_5 = param[1];
    *(pThis_1 + 0x28) = eax_5;
    void* eax_6 = *eax_5;
    *(pThis_1 + 0x24) = 1;
    int32_t result_1 = Display_OpenDevice_2(eax_6, IntroScreen_Update, 0);
    *(pThis_1 + 0x2c) = result_1;
    return result_1;
}
