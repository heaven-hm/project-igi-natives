// Original IGI.EXE function: WeaponType_RegisterType_2 (VA 0x00414ED0; static CFG gate PASS, CFG score 1.000).
#include "WeaponType_RegisterType_2.h"
void** WeaponType_RegisterType_2(void** context, void* param_2, int32_t param_3)

{
    int32_t data_val = DynObj_LookupHashItem_5();
    int16_t item_8 = data_val;
    data_val = *(param_2 + 0x1c);

    if (TaskType_IsDerivedFrom(data_val, item_8))
    {
        int32_t* data_2 = *(param_2 + 0x6c);

        if (data_2 && Render_DrawLightmapMesh_2(*data_2) > param_3)
            return Render_SetupLighting(context, param_2, param_3);
    }

    *context = nullptr;
    context[1] = 0;
    context[2] = 0;
    return context;
}
