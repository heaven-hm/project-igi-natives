// Original IGI.EXE function: EditRigidObjAttachedToBone_LoadParameters (VA 0x00504AD0; static CFG gate PASS, CFG score 0.917).
#include "EditRigidObjAttachedToBone_LoadParameters.h"
int32_t EditRigidObjAttachedToBone_LoadParameters(int32_t* a1)

{
    a1[0x3c] = 0;
    a1[0x3d] = 0;
    a1[0x3e] = 0;
    a1[0x3f] = 0x3f800000;
    a1[0x40] = 0;
    a1[0x41] = 0;
    a1[0x42] = 0;
    a1[0x43] = 0x3f800000;
    a1[0x44] = 0;
    a1[0x45] = 0;
    a1[0x46] = 0;
    a1[0x47] = 0x3f800000;
    a1[0x48] = 0;
    a1[0x49] = 0;
    a1[0x4a] = g_54e6e8;
    int32_t tmpD = g_a44344;
    int32_t v_18;
    __builtin_memset(&v_18, 0, 0x18);
    DynObj_LookupHashItem_6(tmpD, a1, 0);
    float v_24_2 = Render_ComputeNormals(a1[0x1b]);
    return DynObj_LinkDynamicCube_8(a1[0x1a], a1, &v_18, v_24_2, 2);
}
