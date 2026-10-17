// IGI native provenance: Level_LocalCommonTextures - 0x00416130 - CFG score 73.3% (FAIL; structural only); runtime behavior not verified.
// Evidence: 00416130-Level_LocalCommonTextures.md; REA/Ghidra static record; catalog: assets/BinaryNinja/IGINatives_VERIFIED.json.
#include "Level_LocalCommonTextures.h"
int32_t Level_LocalCommonTextures()

{
    int32_t result = g_57bab4;
    int32_t flagP = 0;

    if (result > 0)
    {
        void* context_1 = &g_57b5e8;

        do
        {
            void item_100;
            int16_t* source_1;
            int16_t* dest_1;
            dest_1 = memcpy(&item_100, "LOCAL:common/textures/", 0x14);
            *dest_1 = *source_1;
            dest_1[1] = source_1[1];
            void item_e9;
            *memset(&item_e9, 0, 0xe8) = 0;
            void* dest_6 = context_1;
            int32_t i = 0xffffffff;

            while (i)
            {
                bool flag_0_1 = 0 != *dest_6;
                dest_6 += 1;
                i -= 1;

                if (!flag_0_1)
                    break;
            }

            int32_t entity_1 = ~i;
            void* dest_8 = &item_100;
            int32_t i_1 = 0xffffffff;

            while (i_1)
            {
                bool flag_1_1 = 0 != *dest_8;
                dest_8 += 1;
                i_1 -= 1;

                if (!flag_1_1)
                    break;
            }

            int32_t source_5;
            int32_t dest_10;
            dest_10 = memcpy(dest_8 - 1, dest_6 - entity_1, entity_1 & 0xfffffffc);
            int32_t* item_114 = &item_100;
            memcpy(dest_10, source_5, entity_1 & 3);
            Sys_SIsNotAValidTextureF(context_1 + 0x18, 0, item_114);
            result = g_57bab4;
            flagP += 1;
            context_1 += 0x3c;
        } while (flagP < result);
    }

    return result;
}
