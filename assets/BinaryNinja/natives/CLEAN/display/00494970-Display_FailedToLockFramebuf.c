// IGI native provenance: Display_FailedToLockFramebuf - 0x00494970 - CFG score 100.0% (PASS; structural only); runtime behavior not verified.
// Evidence: 00494970-Display_FailedToLockFramebuf.md; REA/Ghidra static record; catalog: assets/BinaryNinja/IGINatives_VERIFIED.json.
#include "Display_FailedToLockFramebuf.h"
int32_t Display_FailedToLockFramebuf(void* context)

{
    int32_t* data_val = g_5ca100;
    int32_t item_a4 = 0x7c;
    int32_t data_1 = (*(*data_val + 0x64))(data_val, 0, &item_a4, 1, 0);
    void item_4a4;

    if (data_1)
    {
        Game_DataSymbolLoad(&item_4a4, "Failed to lock framebuffer.");
        int32_t item_4c0 = DDERR_GENERIC(data_1);
        void* item_4c4_1 = &item_4a4;
        Error_Show("%s\n\nDirectX error message: %s");

        while (true)
            /* nop */

        return;
    }

    int32_t item_4c;
    int32_t eflags;
    int32_t data_3;
    data_3 = __bsf_gprv_memv(item_4c);
    int32_t item_48;
    int32_t eflags_1;
    char data_5;
    data_5 = __bsf_gprv_memv(item_48);
    int32_t item_44;
    int32_t eflags_2;
    int32_t data_6;
    data_6 = __bsf_gprv_memv(item_44);
    int32_t eflags_3;
    int32_t data_7;
    data_7 = __bsr_gprv_memv(item_4c);
    int32_t eflags_4;
    char data_9;
    data_9 = __bsr_gprv_memv(item_48);
    int32_t eflags_5;
    int32_t data_10;
    data_10 = __bsr_gprv_memv(item_44);
    int32_t source_3 = data_7 - data_3 + 1;
    int32_t* item_80;
    int32_t* dest_2 = item_80;
    int32_t context_2 = data_10 - data_6 + 1;
    void* data_14 = *(context + 0xc);
    int32_t item_24 = source_3;
    int32_t item_28 = context_2;
    char item_58;

    if (!(item_58 & 0x40))
    {
        Error_Show("Invalid framebuffer format");

        while (true)
            /* nop */

        return;
    }

    int32_t item_50;
    int32_t item_9c;
    int32_t item_98;
    int32_t item_94;

    if (item_50 == 0x20)
    {
        context = nullptr;

        if (item_9c > 0)
        {
            int32_t entity_7 = item_98;

            while (true)
            {
                int32_t temp_3 = 0;

                if (entity_7 > 0)
                {
                    do
                    {
                        int32_t source_4 = *dest_2;
                        dest_2 = &dest_2[1];
                        *data_14 = source_4 >> (data_6 & 0x1f) << ((8 - context_2) & 0x1f);
                        *(data_14 + 1) =
                            source_4 >> (data_5 & 0x1f) << ((8 - (data_9 - data_5 + 1)) & 0x1f);
                        data_14 += 3;
                        temp_3 += 1;
                        *(data_14 - 1) = source_4 >> (data_3 & 0x1f) << ((8 - source_3) & 0x1f);
                        entity_7 = item_98;
                    } while (temp_3 < entity_7);

                    source_3 = item_24;
                }

                context += 1;
                dest_2 += item_94 - (entity_7 << 2);

                if (context >= item_9c)
                    break;

                context_2 = item_28;
            }
        }
    }
    else if (item_50 != 0x10)
    {
        Error_Show("Invalid framebuffer format");

        while (true)
            /* nop */
    }
    else
    {
        context = nullptr;

        if (item_9c > 0)
        {
            int32_t entity_18 = item_98;

            while (true)
            {
                int32_t temp_6 = 0;

                if (entity_18 > 0)
                {
                    char item_10_3 = (8 - source_3);

                    do
                    {
                        source_3 = *dest_2;
                        dest_2 += 2;
                        *data_14 = source_3 >> (data_6 & 0x1f) << ((8 - context_2) & 0x1f);
                        *(data_14 + 1) =
                            source_3 >> (data_5 & 0x1f) << ((8 - (data_9 - data_5 + 1)) & 0x1f);
                        data_14 += 3;
                        temp_6 += 1;
                        *(data_14 - 1) = source_3 >> (data_3 & 0x1f) << (item_10_3 & 0x1f);
                        entity_18 = item_98;
                    } while (temp_6 < entity_18);

                    source_3 = item_24;
                }

                context += 1;
                dest_2 += item_94 - entity_18 * 2;

                if (context >= item_9c)
                    break;

                context_2 = item_28;
            }
        }
    }
    int32_t* data_19 = g_5ca100;
    int32_t result = (*(*data_19 + 0x80))(data_19, 0);

    if (!result)
        return result;

    Game_DataSymbolLoad(&item_4a4, "Failed to unlock framebuffer.");
    int32_t item_4c0_1 = DDERR_GENERIC(result);
    void* item_4c4_2 = &item_4a4;
    Error_Show("%s\n\nDirectX error message: %s");

    while (true)
        /* nop */
}
