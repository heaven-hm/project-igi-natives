#include "00505AD0-Physics_MenuitemMoveCalledWi.h"
/* 0x00505ad0 Physics_MenuitemMoveCalledWi full linked: callers=4 callees=9 */
int32_t sub_505ad0(void* a1, int32_t a2)

{
    void* eax = sub_505a30(a1);
    void* esi;

    if (a2 > 0)
    {
        esi = sub_5059d0(a1, a2);

        if (!*(esi + 0x4c))
        {
        label_505b79:

            if (esi)
            {
                int32_t var_1c;
                __builtin_memset(&var_1c, 0, 0x1c);
                var_1c = *(esi + 0x38);
                uint32_t eax_11 = sub_505c60();
                int32_t edx = 0;
                edx = *(esi + 0x1c);
                (*(((eax_11 * 0x180 + edx) << 2) + &g_a96ae0))(esi, &var_1c);

                if (eax)
                {
                    uint32_t eax_14 = sub_505c60();
                    int32_t eax_15 = 0;
                    eax_15 = *(eax + 0x1c);
                    (*(((eax_14 * 0x180 + eax_15) << 2) + &g_a96ae0))(eax, &var_1c);
                }

                return 1;
            }
        }

        return 0;
    }

    esi = sub_505a30(a1);

    if (!esi)
        esi = sub_505a80(a1);
    else
    {
        int32_t eax_5 = a2 + 4;

        if (a2 + 4 > 3)
        {
        label_505b64:
            Error_Show("MenuItem_Move() called with illegal direction parameter.");

            while (true)
                /* nop */
        }
        else
        {
            while (true)
            {
                int32_t esi_1;

                switch (eax_5)
                {
                    case 0:
                    {
                        esi_1 = *(esi + 0x40);
                        break;
                    }
                    case 1:
                    {
                        esi_1 = *(esi + 0x3c);
                        break;
                    }
                    case 2:
                    {
                        esi_1 = *(esi + 0x48);
                        break;
                    }
                    case 3:
                    {
                        esi_1 = *(esi + 0x44);
                        break;
                    }
                }

                if (!esi_1)
                    return 0;

                esi = sub_5059d0(a1, esi_1);

                if (!*(esi + 0x4c))
                    break;

                if (!esi)
                    return 0;

                eax_5 = a2 + 4;

                if (a2 + 4 > 3)
                    goto label_505b64;
            }
        }
    }

    goto label_505b79;
}
