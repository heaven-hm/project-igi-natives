#include "004D2D60-Render_FailedToCreateBoneob.h"
/* 0x004d2d60 Render_FailedToCreateBoneob full linked: callers=1 callees=6 */
void* sub_4d2d60(int32_t* a1, int32_t a2)

{
    *a1 = a2;
    a1[1] = 0;
    void* i_1 = nullptr;
    int32_t var_8 = 0;
    int32_t ecx_1 = *(a2 * 0xc + &g_a542f0);
    int32_t var_84 = 0xffffffff;

    if (ecx_1)
    {
        int32_t ebp = QHash_ValueGet();
        int32_t eax_2 = *(a2 * 0xc + &g_a542f0);

        if (!ebp)
            QHash_ValueSet();

        a1[2] = Mem_Alloc(eax_2 * 0x84, 4);

        if (!ebp)
            sub_4b0d50();

        g_a5467c = a1[2];
        g_a54638 = a2 * 0xc + &g_a542f0;
        sub_4d2ec0(&var_84, 0xffffffff);
        void* i;

        for (i = i_1; i; i = *(i + 0x7c))
            *(i + 0x74) = 0;

        return i;
    }

    int32_t __saved_ebp = a2;
    a1[2] = 0;
    Error_Show("Failed to create boneobj of type %d, no hierarchy loaded");

    while (true)
        /* nop */
}
