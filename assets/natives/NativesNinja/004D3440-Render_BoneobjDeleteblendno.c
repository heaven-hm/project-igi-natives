#include "004D3440-Render_BoneobjDeleteblendno.h"
/* 0x004d3440 Render_BoneobjDeleteblendno full linked: callers=8 callees=4 */
int32_t sub_4d3440(int32_t a1, int32_t a2)

{
    int32_t* eax = sub_4d3720(a1, a2);
    int32_t eax_1 = *eax;

    if (eax_1 != 0xffffffff)
    {
        if (!eax_1)
            eax_1 = sub_4d34a0(eax[1]);
        else
        {
            if (eax_1 == 1)
            {
                int32_t eax_2 = sub_4d3660(eax[1]);
                *eax = 0xffffffff;
                return eax_2;
            }

            Error_Show("BoneObj_DeleteBlendNodeBranch: Illegal child type");

            while (true)
                /* nop */
        }
    }

    *eax = 0xffffffff;
    return eax_1;
}
