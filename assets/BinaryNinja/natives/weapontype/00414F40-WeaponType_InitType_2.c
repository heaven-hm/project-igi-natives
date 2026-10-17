// Original IGI.EXE function: WeaponType_InitType_2 (VA 0x00414F40; static CFG gate PASS, CFG score 0.958).
#include "WeaponType_InitType_2.h"
int32_t WeaponType_InitType_2(int32_t context, void* param_2, int32_t param_3, char* param_4)

{
    int32_t data_val = DynObj_LookupHashItem_5();
    int16_t item_10 = data_val;
    data_val = *(param_2 + 0x1c);
    char data_1;
    int32_t entity_val;
    data_1 = TaskType_IsDerivedFrom(data_val, item_10);

    if (!data_1)
    {
        int16_t data_2 = Render_DrawRigidMesh_12();
        entity_val = *(param_2 + 0x1c);

        if (TaskType_IsDerivedFrom(entity_val, data_2))
        {
            int32_t* data_4 = DynObj_Missing(param_4);

            if (data_4 && Render_DrawLightmapMesh_2(*data_4) > param_3)
            {
                char* item_10_4 = param_4;
                int32_t item_14_2 = param_3;
                void* item_18 = param_2;
                return Render_TransformVertices(context);
            }
        }
    }

    memset(context, 0, 0x18);
    return context;
}
