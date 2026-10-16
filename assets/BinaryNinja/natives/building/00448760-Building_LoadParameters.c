#include "Building_LoadParameters.h"
int32_t Building_LoadParameters(int32_t* a1, int32_t a2)

{
    int32_t v_20;
    __builtin_memset(&v_20, 0, 0x18);
    (*((Render_ComputeNormals_15() << 2) + &g_a96ae0))(a1, a2);
    DynObj_LinkDynamicCube_8(Level_StartMission_4(), a1, &v_20, 1f, 8);
    __builtin_memset(&a1[0x76], 0, 0x18);
    a1[0x72] = 0;
    a1[0x68] = 0x3f800000;
    a1[0x69] = 0;
    a1[0x6a] = 0;
    a1[0x6b] = 0;
    a1[0x6c] = 0x3f800000;
    a1[0x6d] = 0;
    a1[0x6e] = 0;
    a1[0x6f] = 0;
    a1[0x70] = 0x3f800000;
    a1[0x71] = 0;
    return 0;
}
