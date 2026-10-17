// IGI native provenance: WeaponType_UpdateAnim - 0x00414E20 - CFG score 96.3% (PASS; structural only); runtime behavior not verified.
// Evidence: 00414E20-WeaponType_UpdateAnim.md; REA/Ghidra static record; catalog: assets/BinaryNinja/IGINatives_VERIFIED.json.
#include "WeaponType_UpdateAnim.h"
double* WeaponType_UpdateAnim(double* context, double* param_2, int32_t param_3)

{
    int32_t data_val = DynObj_LookupHashItem_5();
    int16_t item_c = data_val;
    data_val = *(param_2 + 0x1c);

    if (!TaskType_IsDerivedFrom(data_val, item_c))
    {
        int32_t data_5 = Render_DrawRigidMesh_12();
        int16_t item_c_3 = data_5;
        data_5 = *(param_2 + 0x1c);

        if (TaskType_IsDerivedFrom(data_5, item_c_3))
        {
            int32_t* data_7 = *(param_2 + 0x74);

            if (data_7 && Render_DrawLightmapMesh_2(*data_7) > param_3)
            {
                int32_t item_c_5 = param_3;
                double* item_10_3 = param_2;
                return Render_TransformVertices(context);
            }
        }
    }
    else
    {
        int32_t* data_2 = *(param_2 + 0x6c);

        if (data_2 && Render_DrawLightmapMesh_2(*data_2) > param_3)
            return Render_ClipMesh(context, param_2, param_3);
    }

    memset(context, 0, 0x18);
    return context;
}
