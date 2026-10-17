// Original IGI.EXE function: Sector_LoadParameters (VA 0x004DD1C0; static CFG gate PASS, CFG score 0.933).
#include "Sector_LoadParameters.h"
int32_t Sector_LoadParameters(void* context)

{
    int32_t entity_val = g_a5e334;
    int32_t temp_val = g_a5e330;
    int32_t item_50 = g_a5e35c;
    int32_t data_1 = g_a5e310;
    void* item_54 = context;
    int32_t item_4c = entity_val;
    int32_t item_48 = temp_val;
    int32_t item_44 = data_1;
    (*((DynObj_ParseConfigFile_15() << 2) + &g_a94e84))(&item_54);
    void* temp_1 = *(context + 0xe8);
    void item_40;
    memcpy(&item_40, context + 0x20, 0x18);
    void item_28;
    memcpy(&item_28, context + 0x70, 0x28);
    int32_t* i = *(temp_1 + 8);

    if (*i && i)
    {
        do
        {
            uint32_t data_4 = DynObj_FindSymbol_6();
            int32_t entity_1 = 0;
            entity_1 = i[7];
            (*(((data_4 * 0x180 + entity_1) << 2) + &g_a96ae0))(i, &item_40);
            i = *i;

            if (!i)
                break;

            if (!*i)
                break;
        } while (i);
    }

    int32_t* i_1 = *(context + 8);

    if (*i_1 && i_1)
    {
        do
        {
            uint32_t data_10 = DynObj_FindSymbol_6();
            int32_t entity_2 = 0;
            entity_2 = i_1[7];
            int32_t data_14 = *(((data_10 * 0x180 + entity_2) << 2) + &g_a96ae0);

            if (data_14)
                data_14(i_1, &item_40);

            i_1 = *i_1;

            if (!i_1)
                break;

            if (!*i_1)
                break;
        } while (i_1);
    }

    int32_t result = *(context + 0x138);
    int32_t source_2 = 0;

    if (result > 0)
    {
        do
        {
            void* data_16 = *(*(*(context + 0x134) + (source_2 << 2)) * *(context + 0x140) + *(context + 0x130));
            int32_t entity_5 = 0;
            entity_5 = *(data_16 + 0x1c);
            int32_t entity_6 = *((entity_5 << 2) + &g_a982e0);

            if (entity_6)
                entity_6(data_16, 0);

            result = *(context + 0x138);
            source_2 += 1;
        } while (source_2 < result);
    }

    return result;
}
