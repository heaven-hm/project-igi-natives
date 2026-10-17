// IGI native provenance: Camera_SetFieldOfView_8 - 0x004A60E8 - CFG score 100.0% (PASS; structural only); runtime behavior not verified.
// Evidence: 004A60E8-Camera_SetFieldOfView_8.md; REA/Ghidra static record; catalog: assets/BinaryNinja/IGINatives_VERIFIED.json.
#include "Camera_SetFieldOfView_8.h"
int32_t __fastcall Camera_SetFieldOfView_8(int32_t context)

{
    int32_t item_8 = context;
    int32_t item_c = context;

    if (!g_c32548)
        Camera_SetFieldOfView_20();

    GetModuleFileNameA(nullptr, &g_9360b4, 0x104);
    char* data_val = g_c32554;
    g_93609c = &g_9360b4;
    char* dest_val = &g_9360b4;

    if (*data_val)
        dest_val = data_val;

    Camera_ApplyLineFilter_8(dest_val, nullptr, nullptr, &item_8, &item_c);
    int32_t* data_3 = Camera_ApplyHandiCam_20(item_c + (item_8 << 2));

    if (!data_3)
        Camera_UpdateViewCone_3(8);

    Camera_ApplyLineFilter_8(dest_val, data_3, &data_3[item_8], &item_8, &item_c);
    int32_t result = item_8 - 1;
    g_936084 = data_3;
    g_936080 = result;
    return result;
}
