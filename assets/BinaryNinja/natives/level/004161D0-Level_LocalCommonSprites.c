// IGI native provenance: Level_LocalCommonSprites - 0x004161D0 - CFG score 73.3% (FAIL; structural only); runtime behavior not verified.
// Evidence: 004161D0-Level_LocalCommonSprites.md; REA/Ghidra static record; catalog: assets/BinaryNinja/IGINatives_VERIFIED.json.
#include "Level_LocalCommonSprites.h"
int32_t Level_LocalCommonSprites()

{
    int32_t result = g_57bab8;
    int32_t flagP = 0;

    if (result > 0)
    {
        void* context_1 = &g_57b1a8;

        do
        {
            void item_100;
            int16_t* source_1;
            int16_t* dest_1;
            dest_1 = memcpy(&item_100, "LOCAL:common/sprites/", 0x14);
            *dest_1 = *source_1;
            void item_ea;
            *memset(&item_ea, 0, 0xe8) = 0;
            void* dest_5 = context_1;
            int32_t i = 0xffffffff;

            while (i)
            {
                bool flag_0_1 = 0 != *dest_5;
                dest_5 += 1;
                i -= 1;

                if (!flag_0_1)
                    break;
            }

            int32_t entity_1 = ~i;
            void* dest_7 = &item_100;
            int32_t i_1 = 0xffffffff;

            while (i_1)
            {
                bool flag_1_1 = 0 != *dest_7;
                dest_7 += 1;
                i_1 -= 1;

                if (!flag_1_1)
                    break;
            }

            int32_t source_4;
            int32_t dest_9;
            dest_9 = memcpy(dest_7 - 1, dest_5 - entity_1, entity_1 & 0xfffffffc);
            int32_t* item_114 = &item_100;
            memcpy(dest_9, source_4, entity_1 & 3);
            Sys_IlfFileCorruptS(context_1 + 0x18, item_114);
            result = g_57bab8;
            flagP += 1;
            context_1 += 0x30;
        } while (flagP < result);
    }

    return result;
}
