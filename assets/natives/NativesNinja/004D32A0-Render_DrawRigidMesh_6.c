#include "004D32A0-Render_DrawRigidMesh_6.h"
/* 0x004d32a0 Render_DrawRigidMesh_6 full linked: callers=2 callees=14 */
int32_t sub_4d32a0(int32_t a1, int32_t a2, void* a3, void* a4)

{
    void* var_14 = a4;
    int32_t* eax = sub_4d3720(a4, 0);
    int32_t* eax_1 = sub_4d3720(a4, 1);
    int32_t eax_2 = *(a4 + 0x14);

    if (!eax_2)
    {
        int32_t eax_17;

        if (*eax == 0xffffffff)
            eax_17 = a2;
        else
            eax_17 = sub_4d33d0(a1, a2, a3, eax);

        if (*eax_1 == 0xffffffff)
            return eax_17;

        return sub_4d33d0(a1, eax_17, a3, eax_1);
    }

    int32_t eax_3 = eax_2(*(a4 + 0x18));

    if (eax_3 != 0xffffffff)
        sub_4d36e0(a4);

    if (!eax_3)
    {
        sub_4d3440(a4, 0);
        return sub_4d33d0(a1, a2, a3, eax_1);
    }

    if (eax_3 == 1)
    {
        sub_4d3440(a4, 1);
        return sub_4d33d0(a1, a2, a3, eax);
    }

    if (eax_3 != 2)
    {
        *(a3 + 4) |= 0x10000;
        return sub_4d33d0(a1, sub_4d33d0(a1, a2, a3, eax), a3, eax_1);
    }

    sub_4d3440(a4, 0);
    sub_4d3440(a4, 1);
    return a2;
}
