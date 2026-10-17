// Original IGI.EXE function: EditRigidObjAttachedToBone_Process (VA 0x00504BB0; static CFG gate PASS, CFG score 0.889).
#include "EditRigidObjAttachedToBone_Process.h"
int32_t EditRigidObjAttachedToBone_Process(void* context)

{
    char data_val = *(context + 0x128);

    if (data_val != 0x2a && data_val)
    {
        void* data_1 = DynObj_Missing(context + 0x128);

        if (data_1)
        {
            void* saved_esi_2 = context;
            *(context + 0x6c) = data_1;
            return data_1;
        }

        char* dest_1 = context + 0x128;
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
        void item_10;
        int32_t source_2;
        int32_t dest_3;
        dest_3 = memcpy(&item_10, dest_1 - entity_1, entity_1 & 0xfffffffc);
        memcpy(dest_3, source_2, entity_1 & 3);
        void* item_24_1 = &item_10;
        data_val = Game_DataSymbolLoad(context + 0x128, "*%s");
    }

    void* saved_esi_3 = context;
    return data_val;
}
