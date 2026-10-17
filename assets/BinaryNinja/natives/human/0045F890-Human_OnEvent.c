// Original IGI.EXE function: Human_OnEvent (VA 0x0045F890; static CFG gate PASS, CFG score 1.000).
#include "Human_OnEvent.h"
float* Human_OnEvent(float context)

{
    int32_t* data_1 = DynObj_Missing(context + 0x100);

    if (data_1)
    {
        Render_VirmodelIsNull(context, data_1);
        Render_DrawBoneMesh_7(context + 0x78, context + 0x68);
    }

    WorldObject_CommitTransform(Level_StartMission_4(), context, context + 0xe0, *(context + 0xa0));
    long double fpu7 = *(context + 0xf8);
    *(context + 0x50c) = fpu7;
    *(context + 0x508) = fpu7;
    return Sys_DispatchOpcode_12(context + 0x78, fpu7);
}
