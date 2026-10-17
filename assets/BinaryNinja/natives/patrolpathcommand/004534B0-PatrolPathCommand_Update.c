// Original IGI.EXE function: PatrolPathCommand_Update (VA 0x004534B0; static CFG gate PASS, CFG score 1.000).
#include "PatrolPathCommand_Update.h"
void PatrolPathCommand_Update(void* context)

{
    int32_t data_val = *(context + 0x20);
    void item_400;

    if (data_val == 0xffffffff || data_val == 6 || data_val == 7 || data_val == 4)
        Game_DataSymbolLoad(&item_400, (&g_53dfd8)[data_val * 2]);
    else
    {
        int32_t item_408 = *(context + 0x24);
        Game_DataSymbolLoad(&item_400, (&g_53dfdc)[data_val * 2]);
    }

    void* item_408_2 = &item_400;
    void* item_40c_2 = context;
}
