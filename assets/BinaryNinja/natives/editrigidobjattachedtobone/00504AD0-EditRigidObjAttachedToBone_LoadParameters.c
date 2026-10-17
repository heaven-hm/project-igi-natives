// Original IGI.EXE function: EditRigidObjAttachedToBone_LoadParameters (VA 0x00504AD0; static CFG gate PASS, CFG score 0.917).
#include "EditRigidObjAttachedToBone_LoadParameters.h"
int32_t EditRigidObjAttachedToBone_LoadParameters(int32_t* context)

{
    context[0x3c] = 0;
    context[0x3d] = 0;
    context[0x3e] = 0;
    context[0x3f] = 0x3f800000;
    context[0x40] = 0;
    context[0x41] = 0;
    context[0x42] = 0;
    context[0x43] = 0x3f800000;
    context[0x44] = 0;
    context[0x45] = 0;
    context[0x46] = 0;
    context[0x47] = 0x3f800000;
    context[0x48] = 0;
    context[0x49] = 0;
    context[0x4a] = g_54e6e8;
    int32_t temp_val = g_a44344;
    int32_t item_18;
    memset(&item_18, 0, 0x18);
    DynObj_LookupHashItem_6(temp_val, context, 0);
    float item_24_2 = Render_ComputeNormals(context[0x1b]);
    return DynObj_LinkDynamicCube_8(context[0x1a], context, &item_18, item_24_2, 2);
}
