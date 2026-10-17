// Original IGI.EXE function: Display_Direct3D (VA 0x00493580; static CFG gate PASS, CFG score 0.972).
#include "Display_Direct3D.h"
int32_t* Display_Direct3D()

{
    g_5ca0e0 = Sys_RendermodeFailedToCr("Direct3D");
    int32_t data_1 = Display_SetDisplayMode_5();
    Sys_CheckHeap_2(g_5ca0e0, data_1, sub_493b20);
    int32_t data_3 = Display_SyncVSync_5();
    Sys_CheckHeap_2(g_5ca0e0, data_3, AIGraph_LoadParameters);
    int32_t data_4 = Display_SwapBuffers_5();
    Sys_CheckHeap_2(g_5ca0e0, data_4, Display_RestoreDevice_6);
    int32_t data_5 = Display_ClearSurfaces_5();
    Sys_CheckHeap_2(g_5ca0e0, data_5, sub_493b30);
    int32_t data_7 = Display_RestoreDevice_5();
    Sys_CheckHeap_2(g_5ca0e0, data_7, sub_492400);
    int32_t data_8 = Display_CheckCapabilities_5();
    Sys_CheckHeap_2(g_5ca0e0, data_8, sub_494700);
    int32_t data_9 = Display_SetGammaRamp_5();
    Sys_CheckHeap_2(g_5ca0e0, data_9, sub_492450);
    int32_t data_11 = Display_CreateSurface_5();
    Sys_CheckHeap_2(g_5ca0e0, data_11, sub_4924d0);
    int32_t data_12 = Display_CreateSurface_4();
    Sys_CheckHeap_2(g_5ca0e0, data_12, Display_SyncVSync_7);
    int32_t data_13 = Display_SetGammaRamp_4();
    Sys_CheckHeap_2(g_5ca0e0, data_13, Display_CouldnTSetClippingWi);
    int32_t data_15 = Display_OpenDevice_5();
    Sys_CheckHeap_2(g_5ca0e0, data_15, Display_FailedToLockFramebuf);
    int32_t data_16 = Display_CloseDevice_5();
    Sys_CheckHeap_2(g_5ca0e0, data_16, sub_4927b0);
    g_bcad78 = 1;
    g_5ca0f8 = 1;
    memset(&g_bcad20, 0, 0x50);
    g_bcabec = 0x3a83126f;
    g_bcad70 = 0x4479ffff;
    g_bcada0 = 0x3ed1b718;
    memcpy(&g_bcadc8,
        "\x01\x00\xc8\x48\x00\x50\xc3\x4d\x00\x00\xc0\x45\x00\x50\xc3\x4d\x18\xb7\x51\x3e\xcd\xcc\x4c\x43",
        0x18);
    memcpy(&g_bcadb0,
        "\x01\x00\xc8\x48\x90\xc2\x75\x3d\xa6\x9b\xc4\x40\x00\x50\xc3\x4d\xcd\xcc\xcc\x43", 0x14);
    g_bcada8 = 0x48c80001;
    g_bcabf0 = 0;
    g_bcacf0 = 0x3d4ccccd;
    g_bcad8c = 0x3f800000;
    g_bcade4 = 0x3f800000;
    g_bcad9c = 0x3f800000;
    g_bcade8 = Sys_ExecuteBytecode_19(0xa);
    g_bcad7c = Sys_ExecuteBytecode_19(0xa);
    g_bcadac = Sys_ExecuteBytecode_19(0xa);
    int32_t* data_20 = Sys_ExecuteBytecode_19(0xa);
    g_bcadc4 = data_20;
    g_bcacec = Sys_DispatchOpcode_19(data_20, sub_493a60);
    g_bcade0 = Sys_DispatchOpcode_19(g_bcadc4, sub_493ac0);
    FX_FailedToRegisterWinp(Display_SwapBuffers_7);
    return Display_CloseDevice_8(sub_493820);
}
