#include "gi_platform.h"
#include "00493580-Display_Direct3D.h"
int32_t* Display_Direct3D()

{
    g_5ca0e0 = Sys_RendermodeFailedToCr("Direct3D");
    int32_t valA1 = Display_SetDisplayMode_5();
    Sys_CheckHeap_2(g_5ca0e0, valA1, sub_493b20);
    int32_t valA3 = Display_SyncVSync_5();
    Sys_CheckHeap_2(g_5ca0e0, valA3, AIGraph_LoadParameters);
    int32_t valA4 = Display_SwapBuffers_5();
    Sys_CheckHeap_2(g_5ca0e0, valA4, Display_RestoreDevice_6);
    int32_t valA5 = Display_ClearSurfaces_5();
    Sys_CheckHeap_2(g_5ca0e0, valA5, sub_493b30);
    int32_t valA7 = Display_RestoreDevice_5();
    Sys_CheckHeap_2(g_5ca0e0, valA7, sub_492400);
    int32_t valA8 = Display_CheckCapabilities_5();
    Sys_CheckHeap_2(g_5ca0e0, valA8, sub_494700);
    int32_t valA9 = Display_SetGammaRamp_5();
    Sys_CheckHeap_2(g_5ca0e0, valA9, sub_492450);
    int32_t valA11 = Display_CreateSurface_5();
    Sys_CheckHeap_2(g_5ca0e0, valA11, sub_4924d0);
    int32_t valA12 = Display_CreateSurface_4();
    Sys_CheckHeap_2(g_5ca0e0, valA12, Display_SyncVSync_7);
    int32_t valA13 = Display_SetGammaRamp_4();
    Sys_CheckHeap_2(g_5ca0e0, valA13, Display_CouldnTSetClippingWi);
    int32_t valA15 = Display_OpenDevice_5();
    Sys_CheckHeap_2(g_5ca0e0, valA15, Display_FailedToLockFramebuf);
    int32_t valA16 = Display_CloseDevice_5();
    Sys_CheckHeap_2(g_5ca0e0, valA16, sub_4927b0);
    g_bcad78 = 1;
    g_5ca0f8 = 1;
    __builtin_memset(&g_bcad20, 0, 0x50);
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
    int32_t* valA20 = Sys_ExecuteBytecode_19(0xa);
    g_bcadc4 = valA20;
    g_bcacec = Sys_DispatchOpcode_19(valA20, sub_493a60);
    g_bcade0 = Sys_DispatchOpcode_19(g_bcadc4, sub_493ac0);
    FX_FailedToRegisterWinp(Display_SwapBuffers_7);
    return Display_CloseDevice_8(sub_493820);
}
