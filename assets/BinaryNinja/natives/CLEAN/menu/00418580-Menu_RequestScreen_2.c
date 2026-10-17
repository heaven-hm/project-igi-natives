// IGI native provenance: Menu_RequestScreen_2 - 0x00418580 - CFG score 100.0% (PASS; structural only); runtime behavior not verified.
// Evidence: 00418580-Menu_RequestScreen_2.md; REA/Ghidra static record; catalog: assets/BinaryNinja/IGINatives_VERIFIED.json.
#include "Menu_RequestScreen_2.h"
int32_t Menu_RequestScreen_2(void* context)

{
    int32_t flagP = *(context + 0xc0);
    *(context + 0x27d0) = 0;
    *(context + 0x27d1) = 0;
    int32_t i = *g_c28f8c;

    if (*(&i + 1) & 1)
        *(context + 0x27d4) = 0xffffffff;
    else if (!(*(&i + 1) & 2))
        *(context + 0x27d4) = 0;
    else
        *(context + 0x27d4) = 1;

    i = *(context + 0x26c2);

    if (i)
    {
        for (i = FX_FragmentSimulate_17(); i; i = FX_FragmentSimulate_17())
        {
            int32_t dest_1 = FX_FireBallUpdate_17();
            void* data_1 = *(context + 0x34);

            if (data_1 && Menu_DrawWidget_6(data_1) && dest_1 + 4 <= 3)
                switch (dest_1)
                {
                    case 0xfffffffc:
                    {
                        dest_1 = 0xfffffffe;
                        break;
                    }
                    case 0xfffffffd:
                    {
                        dest_1 = 0xffffffff;
                        break;
                    }
                    case 0xfffffffe:
                    {
                        dest_1 = 0xfffffffc;
                        break;
                    }
                    case 0xffffffff:
                    {
                        dest_1 = 0xfffffffd;
                        break;
                    }
                }

            if (dest_1 + 0xb <= 0xa)
                switch (dest_1)
                {
                    case 0xfffffff5:
                    {
                        *(context + 0x27d1) = 1;
                        break;
                    }
                    case 0xfffffff8:
                    {
                        *(context + 0x27d0) = 1;
                        break;
                    }
                    case 0xfffffff9:
                    case 0xfffffffe:
                    case 0xffffffff:
                    {
                        void* data_6 = *(context + 0x38);

                        if (data_6)
                            *(data_6 + 0x50) = dest_1;
                        break;
                    }
                    case 0xfffffffc:
                    {
                        flagP += 1;

                        if (flagP >= *(context + 0xbc))
                            flagP = 0;

                        Menu_LeaveMenus_2(context, flagP);
                        SoundSys_AttachLipsync_8("menu_high", 0, 0);
                        break;
                    }
                    case 0xfffffffd:
                    {
                        int32_t f0_1 = flagP;
                        flagP -= 1;

                        if (f0_1 - 1 < 0)
                            flagP = *(context + 0xbc) - 1;

                        Menu_LeaveMenus_2(context, flagP);
                        SoundSys_AttachLipsync_8("menu_high", 0, 0);
                        break;
                    }
                }
        }
    }

    return i;
}
