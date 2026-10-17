// IGI native provenance: Menu_PlayMusic - 0x00417660 - CFG score 100.0% (PASS; structural only); runtime behavior not verified.
// Evidence: 00417660-Menu_PlayMusic.md; REA/Ghidra static record; catalog: assets/BinaryNinja/IGINatives_VERIFIED.json.
#include "Menu_PlayMusic.h"
void Menu_PlayMusic(void* context )

{
    if (!context)
        return;

    int32_t data_1 = Menu_DrawWidget_13();
    int32_t entity_1 = 0;
    entity_1 = *(context + 0x1c);
    (*(((data_1 * 0x180 + entity_1) << 2) + &g_a96ae0))(context);
}
