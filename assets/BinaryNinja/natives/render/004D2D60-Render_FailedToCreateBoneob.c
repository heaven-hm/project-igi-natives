// Original IGI.EXE function: Render_FailedToCreateBoneob (VA 0x004D2D60; static CFG gate PASS, CFG score 1.000).
#include "Render_FailedToCreateBoneob.h"
void* Render_FailedToCreateBoneob(int32_t* a1, int32_t a2)

{
    *a1 = a2;
    a1[1] = 0;
    void* i_1 = nullptr;
    int32_t v_8 = 0;
    int32_t objC1 = *(a2 * 0xc + &g_a542f0);
    int32_t v_84 = 0xffffffff;

    if (objC1)
    {
        int32_t flagP = QHash_ValueGet();
        int32_t valA2 = *(a2 * 0xc + &g_a542f0);

        if (!flagP)
            QHash_ValueSet();

        a1[2] = Mem_Alloc(valA2 * 0x84, 4);

        if (!flagP)
            Sys_DispatchOpcode_2();

        g_a5467c = a1[2];
        g_a54638 = a2 * 0xc + &g_a542f0;
        Render_DrawLightmapMesh_5(&v_84, 0xffffffff);
        void* i;

        for (i = i_1; i; i = *(i + 0x7c))
            *(i + 0x74) = 0;

        return i;
    }

    int32_t saved_frame = a2;
    a1[2] = 0;
    Error_Show("Failed to create boneobj of type %d, no hierarchy loaded");

    while (true)
        /* nop */
}
