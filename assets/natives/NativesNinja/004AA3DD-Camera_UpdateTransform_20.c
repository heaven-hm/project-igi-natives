#include "004AA3DD-Camera_UpdateTransform_20.h"
/* 0x004aa3dd Camera_UpdateTransform_20 full linked: callers=1 callees=6 */
void* sub_4aa3dd()

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
        uint8_t var_118[0x100];

        for (int32_t i_1 = 0; i_1 < 0x100; i_1 += 1)
            var_118[i_1] = i_1;

        BYTE i_2 = cPInfo.LeadByte[0];
        var_118[0] = 0x20;

        if (i_2)
        {
            var_11;
            char* edx_1 = &var_11;

            do
            {
                uint32_t ecx_1 = *edx_1;
                uint32_t i_3 = i_2;
                int32_t __saved_ebp;

                if (i_3 <= ecx_1)
                    __builtin_memset(
                        __builtin_memset(&__saved_ebp + i_3 - 0x114, 0x20202020,
                            (ecx_1 - i_3 + 1) & 0xfffffffc),
                        0x20, (ecx_1 - i_3 + 1) & 3);
                edx_1 = &edx_1[2];
                i_2 = edx_1[0xffffffff];
            } while (i_2);
        }

        uint16_t var_518[0x100];
        sub_4ad225(1, &var_118, 0x100, &var_518, g_c32200, g_c32424, 0);
        CHAR var_218[0x100];
        sub_4ad4d3(g_c32424, 0x100, &var_118, 0x100, &var_218, 0x100, g_c32200, 0);
        CHAR var_318[0x100];
        sub_4ad4d3(g_c32424, 0x200, &var_118, 0x100, &var_318, 0x100, g_c32200, 0);
        i = nullptr;
        uint16_t (* ecx_7)[0x100] = &var_518;

        do
        {
            uint8_t edx_3 = *ecx_7;

            if (edx_3 & 1)
            {
                *(i + 0xc32321) |= 0x10;
                *(i + 0xc32220) = *(&var_218 + i);
            }
            else if (!(edx_3 & 2))
                *(i + 0xc32220) = 0;
            else
            {
                *(i + 0xc32321) |= 0x20;
                *(i + 0xc32220) = *(&var_318 + i);
            }

            i += 1;
            ecx_7 = &(*ecx_7)[1];
        } while (i < 0x100);
    }

    return i;
}
