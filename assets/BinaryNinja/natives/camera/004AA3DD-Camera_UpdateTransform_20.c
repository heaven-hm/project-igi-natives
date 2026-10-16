#include "Camera_UpdateTransform_20.h"
void* Camera_UpdateTransform_20()

{
    CPINFO cPInfo;
    void* i;

    if (GetCPInfo(g_c32200, &cPInfo) != 1)
    {
        for (i = nullptr; i < 0x100; i += 1)
        {
            if (i >= 0x41 && i <= 0x5a)
            {
                *(i + 0xc32321) |= 0x10;
                *(i + 0xc32220) = i + 0x20;
            }
            else if (i < 0x61 || i > 0x7a)
                *(i + 0xc32220) = 0;
            else
            {
                *(i + 0xc32321) |= 0x20;
                *(i + 0xc32220) = i - 0x20;
            }
        }
    }
    else
    {
        uint8_t v_118[0x100];

        for (int32_t i_1 = 0; i_1 < 0x100; i_1 += 1)
            v_118[i_1] = i_1;

        BYTE i_2 = cPInfo.LeadByte[0];
        v_118[0] = 0x20;

        if (i_2)
        {
            v_11;
            char* tmpD1 = &v_11;

            do
            {
                uint32_t objC1 = *tmpD1;
                uint32_t i_3 = i_2;
                int32_t saved_frame;

                if (i_3 <= objC1)
                    __builtin_memset(
                        __builtin_memset(&saved_frame + i_3 - 0x114, 0x20202020,
                            (objC1 - i_3 + 1) & 0xfffffffc),
                        0x20, (objC1 - i_3 + 1) & 3);
                tmpD1 = &tmpD1[2];
                i_2 = tmpD1[0xffffffff];
            } while (i_2);
        }

        uint16_t v_518[0x100];
        Camera_SetFieldOfView_27(1, &v_118, 0x100, &v_518, g_c32200, g_c32424, 0);
        CHAR v_218[0x100];
        Camera_UpdateViewCone_27(g_c32424, 0x100, &v_118, 0x100, &v_218, 0x100, g_c32200, 0);
        CHAR v_318[0x100];
        Camera_UpdateViewCone_27(g_c32424, 0x200, &v_118, 0x100, &v_318, 0x100, g_c32200, 0);
        i = nullptr;
        uint16_t (* objC7)[0x100] = &v_518;

        do
        {
            uint8_t tmpD3 = *objC7;

            if (tmpD3 & 1)
            {
                *(i + 0xc32321) |= 0x10;
                *(i + 0xc32220) = *(&v_218 + i);
            }
            else if (!(tmpD3 & 2))
                *(i + 0xc32220) = 0;
            else
            {
                *(i + 0xc32321) |= 0x20;
                *(i + 0xc32220) = *(&v_318 + i);
            }

            i += 1;
            objC7 = &(*objC7)[1];
        } while (i < 0x100);
    }

    return i;
}
