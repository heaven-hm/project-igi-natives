// IGI native provenance: Camera_UpdateTransform_20 - 0x004AA3DD - CFG score 88.9% (PASS; structural only); runtime behavior not verified.
// Evidence: 004AA3DD-Camera_UpdateTransform_20.md; REA/Ghidra static record; catalog: assets/BinaryNinja/IGINatives_VERIFIED.json.
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
        uint8_t item_118[0x100];

        for (int32_t i_1 = 0; i_1 < 0x100; i_1 += 1)
            item_118[i_1] = i_1;

        BYTE i_2 = cPInfo.LeadByte[0];
        item_118[0] = 0x20;

        if (i_2)
        {
            item_11;
            char* temp_1 = &item_11;

            do
            {
                uint32_t entity_1 = *temp_1;
                uint32_t i_3 = i_2;
                int32_t saved_frame;

                if (i_3 <= entity_1)
                    memset(
                        memset(&saved_frame + i_3 - 0x114, 0x20202020,
                            (entity_1 - i_3 + 1) & 0xfffffffc),
                        0x20, (entity_1 - i_3 + 1) & 3);
                temp_1 = &temp_1[2];
                i_2 = temp_1[0xffffffff];
            } while (i_2);
        }

        uint16_t item_518[0x100];
        Camera_SetFieldOfView_27(1, &item_118, 0x100, &item_518, g_c32200, g_c32424, 0);
        CHAR item_218[0x100];
        Camera_UpdateViewCone_27(g_c32424, 0x100, &item_118, 0x100, &item_218, 0x100, g_c32200, 0);
        CHAR item_318[0x100];
        Camera_UpdateViewCone_27(g_c32424, 0x200, &item_118, 0x100, &item_318, 0x100, g_c32200, 0);
        i = nullptr;
        uint16_t (* entity_7)[0x100] = &item_518;

        do
        {
            uint8_t temp_3 = *entity_7;

            if (temp_3 & 1)
            {
                *(i + 0xc32321) |= 0x10;
                *(i + 0xc32220) = *(&item_218 + i);
            }
            else if (!(temp_3 & 2))
                *(i + 0xc32220) = 0;
            else
            {
                *(i + 0xc32321) |= 0x20;
                *(i + 0xc32220) = *(&item_318 + i);
            }

            i += 1;
            entity_7 = &(*entity_7)[1];
        } while (i < 0x100);
    }

    return i;
}
