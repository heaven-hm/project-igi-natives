// Original IGI.EXE function: Mission_Open (VA 0x00484E60; static CFG gate PASS, CFG score 0.933).
#include "Mission_Open.h"
int32_t Mission_Open(int32_t* context)

// Sig: void Mission_Open(char **ptr_file)
// Note: Name from igi.exe error string inside function: "Mission_Open():
// Couldn't load script: %s". Opens a mission definition script and builds its
// task tree.
{
    if (context[2])
        return Sys_IllegalDeviceNameInP(*context, Mission_Open, nullptr);

    int32_t dest_1 = *context;
    int32_t i = 0xffffffff;

    while (i)
    {
        bool flag_0_1 = 0 != *dest_1;
        dest_1 += 1;
        i -= 1;

        if (!flag_0_1)
            break;
    }

    int32_t entity_val = ~i;
    char item_104[0x104];
    int32_t source_2;
    int32_t dest_3;
    dest_3 = memcpy(&item_104, dest_1 - entity_val, entity_val & 0xfffffffc);
    memcpy(dest_3, source_2, entity_val & 3);
    Terrain_RenderWaterSurface_3(&item_104);
    char* dest_4 = "mission.qvm";

    if (!FX_FireBallUpdate_27())
        dest_4 = "mission.qsc";

    int32_t result = Sys_ResolveSymbol(nullptr, nullptr, nullptr, dest_4, &item_104, 1);

    if (!result)
        return result;

    int32_t* data_4 = Qvm_Load(*context);

    if (data_4)
    {
        Qvm_Execute(data_4);
        return Qvm_Cleanup(data_4);
    }

    char* item_114_4 = dest_4;
    Error_Show("Mission_Open(): Couldn't load script: %s");

    while (true)
        /* nop */
}
