// IGI native provenance: Menu_LocalLanguageSS - 0x00417FF0 - CFG score 100.0% (PASS; structural only); runtime behavior not verified.
// Evidence: 00417FF0-Menu_LocalLanguageSS.md; REA/Ghidra static record; catalog: assets/BinaryNinja/IGINatives_VERIFIED.json.
#include "Menu_LocalLanguageSS.h"
int32_t Menu_LocalLanguageSS(void* context, int32_t param_2)

{
    for (int32_t i = 0; i < 6; )
    {
        int32_t item_114_1 = param_2;
        void* item_118_1 = Config_English_2(i);
        void item_100;
        int32_t data_2;
        int32_t temp_1;
        data_2 = Game_DataSymbolLoad(&item_100, "LOCAL:language/%s/%s");
        void* item_128_1 = &item_100;
        *(context + (*(context + 0x25c) << 2) + 0x1dc) = Resource_Load(data_2, temp_1, &item_100, nullptr);
        i += 1;
        *(context + 0x25c) += 1;
    }

    return 6;
}
