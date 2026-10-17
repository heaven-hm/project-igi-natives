// Original IGI.EXE function: Mission_Open (VA 0x00484E60; static CFG gate PASS, CFG score 0.933).
#include "Mission_Open.h"
int32_t Mission_Open(int32_t* a1)

// Sig: void Mission_Open(char **ptr_file)
// Note: Name from igi.exe error string inside function: "Mission_Open():
// Couldn't load script: %s". Opens a mission definition script and builds its
// task tree.
{
    if (a1[2])
        return Sys_IllegalDeviceNameInP(*a1, Mission_Open, nullptr);

    int32_t dstD1 = *a1;
    int32_t i = 0xffffffff;

    while (i)
    {
        bool cond_0_1 = 0 != *dstD1;
        dstD1 += 1;
        i -= 1;

        if (!cond_0_1)
            break;
    }

    int32_t objC = ~i;
    char v_104[0x104];
    int32_t srcS2;
    int32_t dstD3;
    dstD3 = memcpy(&v_104, dstD1 - objC, objC & 0xfffffffc);
    memcpy(dstD3, srcS2, objC & 3);
    Terrain_RenderWaterSurface_3(&v_104);
    char* dstD4 = "mission.qvm";

    if (!FX_FireBallUpdate_27())
        dstD4 = "mission.qsc";

    int32_t result = Sys_ResolveSymbol(nullptr, nullptr, nullptr, dstD4, &v_104, 1);

    if (!result)
        return result;

    int32_t* valA4 = Qvm_Load(*a1);

    if (valA4)
    {
        Qvm_Execute(valA4);
        return Qvm_Cleanup(valA4);
    }

    char* v_114_4 = dstD4;
    Error_Show("Mission_Open(): Couldn't load script: %s");

    while (true)
        /* nop */
}
