// Original IGI.EXE function: SimpointObjGenerator_Process (VA 0x0043BDA0; static CFG gate PASS, CFG score 0.889).
#include "SimpointObjGenerator_Process.h"
int32_t SimpointObjGenerator_Process(void* context)

{
    void* data_val = DynObj_Missing(context + 0xf4);

    if (!data_val && context + 0xf4 && *(context + 0xf5) != 0x2a)
    {
        char* item_118_1 = context + 0xf4;
        void item_80;
        Game_DataSymbolLoad(&item_80, "Model "%s" not available");
        char* dest_1 = context + 0xf4;
        int32_t i = 0xffffffff;

        while (i)
        {
            bool flag_0_1 = 0 != *dest_1;
            dest_1 = &dest_1[1];
            i -= 1;

            if (!flag_0_1)
                break;
        }

        int32_t entity_1 = ~i;
        void item_100;
        int32_t source_2;
        int32_t dest_3;
        dest_3 = memcpy(&item_100, dest_1 - entity_1, entity_1 & 0xfffffffc);
        memcpy(dest_3, source_2, entity_1 & 3);
        void* item_124_1 = &item_100;
        Game_DataSymbolLoad(context + 0xf4, "** %s **");
    }

    int32_t result = DynObj_CreateMagicObject_5(context, data_val);
    *(context + 0xf0) = 0;
    return result;
}
