// Original IGI.EXE function: StatusScreen_OnEvent2 (VA 0x00486D70; static CFG gate PASS, CFG score 1.000).
#include "StatusScreen_OnEvent2.h"

int32_t StatusScreen_OnEvent2(void* pThis)

{
    Sys_ReadFileBlock_18(*(pThis + 0x4dc));
    Sys_ReadFileBlock_18(*(pThis + 0x4e0));
    Sys_ReadFileBlock_17(pThis + 0xa4);
    Sys_ReadFileBlock_17(pThis + 0x8c);
    Sys_ReadFileBlock_17(pThis + 0xd4);
    Sys_ReadFileBlock_17(pThis + 0xec);
    Sys_ReadFileBlock_17(pThis + 0x104);
    Sys_ReadFileBlock_17(pThis + 0x11c);
    Sys_ReadFileBlock_17(pThis + 0x134);
    Sys_ReadFileBlock_17(pThis + 0x14c);
    Sys_ReadFileBlock_17(pThis + 0x74);
    Sys_ReadFileBlock_17(pThis + 0x1c4);
    Sys_ReadFileBlock_17(pThis + 0x1dc);
    Sys_ReadFileBlock_17(pThis + 0x1f4);
    Sys_ReadFileBlock_17(pThis + 0x20c);
    Sys_ReadFileBlock_17(pThis + 0x224);
    Sys_ReadFileBlock_17(pThis + 0x23c);
    Sys_ReadFileBlock_17(pThis + 0x254);
    Sys_ReadFileBlock_17(pThis + 0x26c);
    Sys_ReadFileBlock_17(pThis + 0x284);
    Sys_ReadFileBlock_17(pThis + 0x29c);
    Sys_ReadFileBlock_17(pThis + 0x2b4);
    Sys_ReadFileBlock_17(pThis + 0x2cc);
    Sys_ReadFileBlock_17(pThis + 0x2e4);
    Sys_ReadFileBlock_17(pThis + 0x2fc);
    Sys_ReadFileBlock_17(pThis + 0x314);
    Sys_ReadFileBlock_17(pThis + 0x32c);
    Sys_ReadFileBlock_17(pThis + 0x344);
    Sys_ReadFileBlock_17(pThis + 0x35c);
    Sys_ReadFileBlock_17(pThis + 0x374);
    int32_t* edi = pThis + 0x38c;
    int32_t i_2 = 4;
    int32_t i;

    do
    {
        Sys_ReadFileBlock_17(edi);
        edi = &edi[6];
        i = i_2;
        i_2 -= 1;
    } while (i != 1);
    int32_t* edi_1 = pThis + 0x3ec;
    int32_t i_3 = 0xa;
    int32_t i_1;

    do
    {
        Sys_ReadFileBlock_17(edi_1);
        edi_1 = &edi_1[6];
        i_1 = i_3;
        i_3 -= 1;
    } while (i_1 != 1);
    Resource_Flush(*(pThis + 0x70));
    return Display_SwapBuffers_13(pThis + 0x20);
}
