// IGI native provenance: Camera_ApplyHandiCam_3 - 0x004A50F5 - CFG score 100.0% (PASS; structural only); runtime behavior not verified.
// Evidence: 004A50F5-Camera_ApplyHandiCam_3.md; REA/Ghidra static record; catalog: assets/BinaryNinja/IGINatives_VERIFIED.json.
#include "Camera_ApplyHandiCam_3.h"
int32_t _start()

{
    int32_t flagP;
    int32_t item_4 = flagP;
    int32_t item_8 = 0xffffffff;
    int32_t item_c = 0x534308;
    int32_t item_10 = 0x4a67ec;
    TEB* fsbase;
    struct _EXCEPTION_REGISTRATION_RECORD* ExceptionList = fsbase->NtTib.ExceptionList;
    fsbase->NtTib.ExceptionList = &ExceptionList;
    int32_t context_val;
    int32_t item_70 = context_val;
    int32_t source_val;
    int32_t item_74 = source_val;
    int32_t dest_val;
    int32_t item_78 = dest_val;
    int32_t* item_1c = &item_78;
    uint32_t data_1 = GetVersion();
    int32_t temp_val = 0;
    temp_val = *(&data_1 + 1);
    g_93607c = temp_val;
    uint32_t entity_1 = data_1;
    g_936078 = entity_1;
    g_936074 = (entity_1 << 8) + temp_val;
    g_936070 = data_1 >> 0x10;

    if (!Camera_ApplyPostProcess_8(0))
    {
        Camera_ResetMatrix_3(0x1c);
        /* no return */
    }

    int32_t item_8_1 = 0;
    Camera_ApplyHandiCam_8();
    g_c32554 = GetCommandLineA();
    PSTR data_5;
    int32_t entity_5;
    data_5 = Camera_ApplyBandFilter_8();
    g_93604c = data_5;
    Camera_SetFieldOfView_8(entity_5);
    Camera_UpdateTransform_8();
    Camera_ApplyLineFilter_6();
    STARTUPINFOA startupInfo;
    startupInfo.dwFlags = 0;
    GetStartupInfoA(&startupInfo);
    char* data_6 = Camera_ResetMatrix_7();
    uint32_t wShowWindow;

    wShowWindow = !(startupInfo.dwFlags & 1) ? 0xa : startupInfo.wShowWindow;

    uint32_t wShowWindow_1 = wShowWindow;
    int32_t item_84 = 0;
    WPARAM data_8 = FX_Igimutex(GetModuleHandleA(nullptr), data_6);
    WPARAM item_64 = data_8;
    Camera_ApplyBandFilter_6(data_8);
    int32_t* item_18;
    int32_t entity_7 = **item_18;
    int32_t item_6c = entity_7;
    return Camera_ApplyPostProcess_7(entity_7, item_18);
}
