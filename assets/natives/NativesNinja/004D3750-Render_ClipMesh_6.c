#include "004D3750-Render_ClipMesh_6.h"
/* 0x004d3750 Render_ClipMesh_6 full linked: callers=6 callees=12 */
int32_t* sub_4d3750(int32_t* a1)

{
    int32_t ecx;
    int32_t var_4_1 = ecx;
    int32_t* ebp = a1;
    int32_t* var_4 = ebp;
    int32_t* ebx = *ebp;

    if (!ebx)
        a1 = nullptr;
    else
    {
        int32_t* eax_1 = sub_4d3720(ebx, 0);
        a1 = eax_1;

        if (*eax_1 || eax_1[1] != ebp)
            a1 = sub_4d3720(ebx, 1);
    }

    int32_t* eax_3 = sub_4d3720(ebp, 0);
    int32_t* eax_4 = sub_4d3720(ebp, 1);
    int32_t eax_5 = *eax_3;

    if (eax_5 == 0xffffffff)
    {
        if (*eax_4 != 0xffffffff)
        {
            *eax_3 = *eax_4;
            eax_3[1] = eax_4[1];
            *eax_4 = 0xffffffff;
            return sub_4d3750(ebp);
        }

        sub_4d34a0(ebp);

        if (ebx)
        {
            sub_4d36e0(ebx);
            *a1 = 0xffffffff;
        }

        return ebx;
    }

    if (*eax_4 != 0xffffffff)
    {
        if (!eax_5)
            sub_4d3750(eax_3[1]);

        if (!*eax_4)
            sub_4d3750(eax_4[1]);

        if (*eax_3 == 0xffffffff || *eax_4 == 0xffffffff)
            return sub_4d3750(ebp);
    }
    else if (!eax_5 || ebx)
    {
        void** edi_1 = nullptr;

        if (ebx)
        {
            var_4 = ebx;
            *a1 = *eax_3;
            a1[1] = eax_3[1];
        }

        if (!*eax_3)
        {
            edi_1 = eax_3[1];
            *edi_1 = ebx;
        }

        *eax_3 = 0xffffffff;
        sub_4d34a0(ebp);

        if (edi_1)
            return sub_4d3750(edi_1);
    }

    return var_4;
}
