// Original IGI.EXE function: Camera_ApplyHandiCam_3 (VA 0x004A50F5; static CFG gate PASS, CFG score 1.000).
#include "Camera_ApplyHandiCam_3.h"
int32_t _start()

{
    int32_t flagP;
    int32_t v_4 = flagP;
    int32_t v_8 = 0xffffffff;
    int32_t v_c = 0x534308;
    int32_t v_10 = 0x4a67ec;
    TEB* fsbase;
    struct _EXCEPTION_REGISTRATION_RECORD* ExceptionList = fsbase->NtTib.ExceptionList;
    fsbase->NtTib.ExceptionList = &ExceptionList;
    int32_t ctxB;
    int32_t v_70 = ctxB;
    int32_t srcS;
    int32_t v_74 = srcS;
    int32_t dstD;
    int32_t v_78 = dstD;
    int32_t* v_1c = &v_78;
    uint32_t valA1 = GetVersion();
    int32_t tmpD = 0;
    tmpD = *(&valA1 + 1);
    g_93607c = tmpD;
    uint32_t objC1 = valA1;
    g_936078 = objC1;
    g_936074 = (objC1 << 8) + tmpD;
    g_936070 = valA1 >> 0x10;

    if (!Camera_ApplyPostProcess_8(0))
    {
        Camera_ResetMatrix_3(0x1c);
        /* no return */
    }

    int32_t v_8_1 = 0;
    Camera_ApplyHandiCam_8();
    g_c32554 = GetCommandLineA();
    PSTR valA5;
    int32_t objC5;
    valA5 = Camera_ApplyBandFilter_8();
    g_93604c = valA5;
    Camera_SetFieldOfView_8(objC5);
    Camera_UpdateTransform_8();
    Camera_ApplyLineFilter_6();
    STARTUPINFOA startupInfo;
    startupInfo.dwFlags = 0;
    GetStartupInfoA(&startupInfo);
    char* valA6 = Camera_ResetMatrix_7();
    uint32_t wShowWindow;

    wShowWindow = !(startupInfo.dwFlags & 1) ? 0xa : startupInfo.wShowWindow;

    uint32_t wShowWindow_1 = wShowWindow;
    int32_t v_84 = 0;
    WPARAM valA8 = FX_Igimutex(GetModuleHandleA(nullptr), valA6);
    WPARAM v_64 = valA8;
    Camera_ApplyBandFilter_6(valA8);
    int32_t* v_18;
    int32_t objC7 = **v_18;
    int32_t v_6c = objC7;
    return Camera_ApplyPostProcess_7(objC7, v_18);
}
