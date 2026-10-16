#include "Menu_RequestScreen_2.h"
int32_t Menu_RequestScreen_2(void* a1)

{
    int32_t flagP = *(a1 + 0xc0);
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
        for (i = FX_FragmentSimulate_17(); i; i = FX_FragmentSimulate_17())
        {
            int32_t dstD1 = FX_FireBallUpdate_17();
            void* valA1 = *(a1 + 0x34);

            if (valA1 && Menu_DrawWidget_6(valA1) && dstD1 + 4 <= 3)
                switch (dstD1)
                {
                    case 0xfffffffc:
                    {
                        dstD1 = 0xfffffffe;
                        break;
                    }
                    case 0xfffffffd:
                    {
                        dstD1 = 0xffffffff;
                        break;
                    }
                    case 0xfffffffe:
                    {
                        dstD1 = 0xfffffffc;
                        break;
                    }
                    case 0xffffffff:
                    {
                        dstD1 = 0xfffffffd;
                        break;
                    }
                }

            if (dstD1 + 0xb <= 0xa)
                switch (dstD1)
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
                        void* valA6 = *(a1 + 0x38);

                        if (valA6)
                            *(valA6 + 0x50) = dstD1;
                        break;
                    }
                    case 0xfffffffc:
                    {
                        flagP += 1;

                        if (flagP >= *(a1 + 0xbc))
                            flagP = 0;

                        Menu_LeaveMenus_2(a1, flagP);
                        SoundSys_AttachLipsync_8("menu_high", 0, 0);
                        break;
                    }
                    case 0xfffffffd:
                    {
                        int32_t f0_1 = flagP;
                        flagP -= 1;

                        if (f0_1 - 1 < 0)
                            flagP = *(a1 + 0xbc) - 1;

                        Menu_LeaveMenus_2(a1, flagP);
                        SoundSys_AttachLipsync_8("menu_high", 0, 0);
                        break;
                    }
                }
        }
    }

    return i;
}
