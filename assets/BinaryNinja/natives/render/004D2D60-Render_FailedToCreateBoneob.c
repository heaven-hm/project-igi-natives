// Original IGI.EXE function: Render_FailedToCreateBoneob (VA 0x004D2D60; static CFG gate PASS, CFG score 1.000).
#include "Render_FailedToCreateBoneob.h"
void* Render_FailedToCreateBoneob(int32_t* context, int32_t param_2)

{
    *context = param_2;
    context[1] = 0;
    void* i_1 = nullptr;
    int32_t item_8 = 0;
    int32_t entity_1 = *(param_2 * 0xc + &g_a542f0);
    int32_t item_84 = 0xffffffff;

    if (entity_1)
    {
        int32_t flagP = QHash_ValueGet();
        int32_t data_2 = *(param_2 * 0xc + &g_a542f0);

        if (!flagP)
            QHash_ValueSet();

        context[2] = Mem_Alloc(data_2 * 0x84, 4);

        if (!flagP)
            Sys_DispatchOpcode_2();

        g_a5467c = context[2];
        g_a54638 = param_2 * 0xc + &g_a542f0;
        Render_DrawLightmapMesh_5(&item_84, 0xffffffff);
        void* i;

        for (i = i_1; i; i = *(i + 0x7c))
            *(i + 0x74) = 0;

        return i;
    }

    int32_t saved_frame = param_2;
    context[2] = 0;
    Error_Show("Failed to create boneobj of type %d, no hierarchy loaded");

    while (true)
        /* nop */
}
