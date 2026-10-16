#include "00418580-Menu_RequestScreen_2.h"
/* 0x00418580 Menu_RequestScreen_2 full linked: callers=1 callees=6 */
int32_t Menu_RequestScreen_2(void* a1)

{
    int32_t ebp = *(a1 + 0xc0);
    *(a1 + 0x27d0) = 0;
    *(a1 + 0x27d1) = 0;
    int32_t i = *g_c28f8c;

    if (*(&i + 1) & 1)
        *(a1 + 0x27d4) = 0xffffffff;
    else if (!(*(&i + 1) & 2))
        *(a1 + 0x27d4) = 0;
    else
        *(a1 + 0x27d4) = 1;

    i = *(a1 + 0x26c2);

    if (i)
    {
        for (i = sub_48a910(); i; i = sub_48a910())
        {
            int32_t edi_1 = sub_48a8d0();
            void* eax_1 = *(a1 + 0x34);

            if (eax_1 && Menu_DrawWidget_6(eax_1) && edi_1 + 4 <= 3)
                switch (edi_1)
                {
                    case 0xfffffffc:
                    {
                        edi_1 = 0xfffffffe;
                        break;
                    }
                    case 0xfffffffd:
                    {
                        edi_1 = 0xffffffff;
                        break;
                    }
                    case 0xfffffffe:
                    {
                        edi_1 = 0xfffffffc;
                        break;
                    }
                    case 0xffffffff:
                    {
                        edi_1 = 0xfffffffd;
                        break;
                    }
                }

            if (edi_1 + 0xb <= 0xa)
                switch (edi_1)
                {
                    case 0xfffffff5:
                    {
                        *(a1 + 0x27d1) = 1;
                        break;
                    }
                    case 0xfffffff8:
                    {
                        *(a1 + 0x27d0) = 1;
                        break;
                    }
                    case 0xfffffff9:
                    case 0xfffffffe:
                    case 0xffffffff:
                    {
                        void* eax_6 = *(a1 + 0x38);

                        if (eax_6)
                            *(eax_6 + 0x50) = edi_1;
                        break;
                    }
                    case 0xfffffffc:
                    {
                        ebp += 1;

                        if (ebp >= *(a1 + 0xbc))
                            ebp = 0;

                        Menu_LeaveMenus_2(a1, ebp);
                        sub_4e7180("menu_high", 0, 0);
                        break;
                    }
                    case 0xfffffffd:
                    {
                        int32_t temp0_1 = ebp;
                        ebp -= 1;

                        if (temp0_1 - 1 < 0)
                            ebp = *(a1 + 0xbc) - 1;

                        Menu_LeaveMenus_2(a1, ebp);
                        sub_4e7180("menu_high", 0, 0);
                        break;
                    }
                }
        }
    }

    return i;
}
