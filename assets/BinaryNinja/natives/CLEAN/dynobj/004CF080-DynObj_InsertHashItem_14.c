// IGI native provenance: DynObj_InsertHashItem_14 - 0x004CF080 - CFG score 100.0% (PASS; structural only); runtime behavior not verified.
// Evidence: 004CF080-DynObj_InsertHashItem_14.md; REA/Ghidra static record; catalog: assets/BinaryNinja/IGINatives_VERIFIED.json.
#include "DynObj_InsertHashItem_14.h"
int32_t* DynObj_InsertHashItem_14(void* context, int32_t param_2, int32_t param_3)

{
    void* data_val = g_a4ec60;
    void* dest_val = context;
    DynObj_RemoveSymbol_14(dest_val);
    void item_100;

    if (param_3)
    {
        int32_t saved_ebx_1 = param_2;
        char* item_128_1 = &g_a4ed6c;
        int32_t data_2;
        void* entity_1;
        data_2 = Game_DataSymbolLoad(&item_100, "%stextures/%s.res");
        void* item_138_1 = &item_100;
        Resource_Load(data_2, &item_100, entity_1, nullptr);
        DynObj_LocalTexturesSTex(dest_val);
        DynObj_LinkDynamicCube_14(dest_val);
        Resource_Unload(&item_100);
    }

    int32_t saved_ebx_2 = param_2;
    char* item_128_2 = &g_a4ed6c;
    int32_t data_3;
    void* entity_2;
    data_3 = Game_DataSymbolLoad(&item_100, "%smodels/%s.res");
    void* item_138_2 = &item_100;
    *(dest_val + 0xc) = Resource_Load(data_3, &item_100, entity_2, nullptr);
    DynObj_CreateMagicObject_14(dest_val);
    DynObj_ParseConfigFile_14(dest_val);
    int32_t* data_6 = DynObj_CreateMagicObject_13(*(dest_val + 8), 0x564e414d, nullptr);
    int32_t* result_3 = *data_6;
    void* item_104 = &data_6[result_3 + 1];
    int32_t* result = DynObj_CreateMagicObject_13(*(dest_val + 8), 0x494e5354, nullptr);
    int32_t* result_2 = result;

    if (result_3 > 0)
    {
        int32_t* result_1 = result_3;

        while (true)
        {
            int32_t data_7 = *result_2;
            int32_t* item_12c_1;
            int32_t item_128_3;

            if (data_7 < 0x2000)
            {
                item_128_3 = data_7;
                item_12c_1 = dest_val + 0x10;
            }
            else
            {
                item_128_3 = data_7 - 0x2000;
                item_12c_1 = data_val + 0x10;
            }

            int32_t* data_11 = DynObj_LookupHashItem_14(item_12c_1, item_128_3);
            int32_t context_1 = result_2[1];
            result_2 = &result_2[2];
            int32_t* data_12 = Mem_Alloc((context_1 << 3) + 0x1c, 4);
            data_12[5] = &data_12[context_1 + 7];
            data_12[4] = &data_12[7];
            data_12[6] = context_1;
            data_12[1] = 0;
            *data_12 = 0;
            Camera_SetFieldOfView_33(context + 0x28, data_12);
            data_12[3] = data_11;
            void* dest_3 = item_104;
            int32_t i = 0xffffffff;
            data_12[2] = item_104;

            while (i)
            {
                bool flag_1_1 = 0 != *dest_3;
                dest_3 += 1;
                i -= 1;

                if (!flag_1_1)
                    break;
            }

            item_104 = item_104 + ~i - 1 + 1;
            void* data_17 = DynObj_CreateMagicObject_13(*(context + 8), 0x47545420, nullptr) + 4;
            int32_t item_110_1 = 0;

            if (context_1 > 0)
            {
                bool flag_3_1;

                do
                {
                    int32_t dest_4 = *result_2;
                    int32_t entity_9 = *(data_17 + (dest_4 << 3));
                    int32_t flagP2;

                    if (entity_9 < 0x2000)
                    {
                        int32_t temp_10 = *(context + 0x34);

                        flagP2 = !temp_10 ? 0 : temp_10 + entity_9 * 0x24;
                    }
                    else
                    {
                        int32_t temp_8 = *(data_val + 0x34);

                        flagP2 = !temp_8 ? 0 : temp_8 + ((entity_9 * 9 - 0x12000) << 2);
                    }

                    int32_t entity_12 = *(data_17 + (dest_4 << 3) + 4);
                    int32_t entity_14;

                    if (entity_12 == 0xffffffff)
                    {
                        int32_t temp_12 = *(context + 0x38);

                        entity_14 = !temp_12 ? 0 : temp_12 + entity_12 * 0xc;
                    }
                    else if (entity_12 < 0x2000)
                    {
                        int32_t temp_16 = *(context + 0x3c);

                        entity_14 = !temp_16 ? 0 : temp_16 + entity_12 * 0xc;
                    }
                    else
                    {
                        int32_t temp_14 = *(data_val + 0x38);

                        entity_14 = !temp_14 ? 0 : temp_14 + ((entity_12 * 3 - 0x6000) << 2);
                    }

                    *(data_12[4] + (item_110_1 << 2)) = flagP2;
                    result_2 = &result_2[1];
                    *(data_12[5] + (item_110_1 << 2)) = entity_14;
                    flag_3_1 = item_110_1 + 1 < context_1;
                    item_110_1 += 1;
                } while (flag_3_1);
            }

            result = result_1 - 1;
            bool flag_0_1 = result_1 != 1;
            result_1 = result;

            if (!flag_0_1)
                break;

            dest_val = context;
        }
    }

    return result;
}
