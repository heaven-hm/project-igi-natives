// Original IGI.EXE function: Menu_LeaveMenus_13 (VA 0x00424220; static CFG gate PASS, CFG score 1.000).
#include "Menu_LeaveMenus_13.h"
void* Menu_LeaveMenus_13(void* context, void* param_2)

{
    int32_t data_val = Menu_UpdateLanguage_3();
    void* source_val = param_2;

    while (*(source_val + 0x1c) != data_val)
    {
        source_val = *(source_val + 0x14);

        if (!source_val)
        {
            *(context + 0x44) = 0;
            return data_val;
        }

        data_val = Menu_UpdateLanguage_3();
    }

    *(context + 0x44) = source_val;
    return context;
}
