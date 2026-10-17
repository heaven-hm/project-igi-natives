// IGI native provenance: Menu_Manager - 0x00418B00 - CFG score 91.4% (PASS; structural only); runtime behavior not verified.
// Evidence: 00418B00-Menu_Manager.md; REA/Ghidra static record; catalog: assets/BinaryNinja/IGINatives_VERIFIED.json.
#include "Menu_Manager.h"
int32_t* Menu_Manager(void* context, void* param_2, char param_3, char param_4, char param_5)

// Sig: int* Menu_Manager(int p1,char *menu_str,char p3,char p4,int p5)
// Note: MenuManager load for inagame or Mainmenu,Params:  p1: 0057BABC
// ,p3,p4,p5: 0.
{
    if (param_3)
    {
        void* data_val = Config_GetActivePlayerProfileRecord();
        void item_11c;
        memset(&item_11c, 0, 0x11c);
        int32_t item_104_1 = Display_CheckCapabilities_7();
        char item_106_1 = 1;
        int32_t item_118;
        memcpy(&item_118,
            "\x80\x02\x00\x00\xe0\x01\x00\x00\x01\x00\x00\x00\x10\x00\x00\x00\x01", 0x11);
        int32_t item_104_2 = Display_CheckCapabilities_7();
        char* data_3 = data_val + 0x11f;
        char item_106_2 = 1;

        if (!data_3)
            data_3 = &g_567c74;

        char* dest_1 = data_3;
        int32_t i = 0xffffffff;

        while (i)
        {
            bool flag_3_1 = 0 != *dest_1;
            dest_1 = &dest_1[1];
            i -= 1;

            if (!flag_3_1)
                break;
        }

        int32_t entity_1 = ~i;
        void item_80;
        int32_t source_2;
        int32_t dest_3;
        dest_3 = memcpy(&item_80, dest_1 - entity_1, entity_1 & 0xfffffffc);
        char* data_5 = data_val + 0x1f;
        memcpy(dest_3, source_2, entity_1 & 3);

        if (!data_5)
            data_5 = &g_567c74;

        char* dest_4 = data_5;
        int32_t i_1 = 0xffffffff;

        while (i_1)
        {
            bool flag_5_1 = 0 != *dest_4;
            dest_4 = &dest_4[1];
            i_1 -= 1;

            if (!flag_5_1)
                break;
        }

        int32_t entity_5 = ~i_1;
        char item_134_1 = 0;
        void item_100;
        int32_t source_4;
        int32_t dest_6;
        dest_6 = memcpy(&item_100, dest_4 - entity_5, entity_5 & 0xfffffffc);
        memcpy(dest_6, source_4, entity_5 & 3);
        Screen_Process(&item_11c, item_134_1);
        Display_SetMode(&item_11c);
    }

    void* dest_7 = param_2;
    int32_t* data_7 = Qvm_Load(dest_7);

    if (!data_7)
    {
        void* item_134_9 = dest_7;
        Error_Show("Failed to load menumanager: '%s'");

        while (true)
            /* nop */

        return;
    }

    Script_Init(dest_7, 1, 0, 0);
    Script_SetSymbolContext("Task_New", context);
    Qvm_Execute(data_7);
    Qvm_Cleanup(data_7);
    int32_t* result = QTask_DeleteTask_2(context, Menu_UpdateLanguage_3());
    int32_t i_2 = 0xffffffff;

    while (i_2)
    {
        bool flag_2_1 = 0 != *dest_7;
        dest_7 += 1;
        i_2 -= 1;

        if (!flag_2_1)
            break;
    }

    int32_t entity_9 = ~i_2;
    int32_t source_7;
    int32_t dest_10;
    dest_10 = memcpy(result + 0x26c5, dest_7 - entity_9, entity_9 & 0xfffffffc);
    memcpy(dest_10, source_7, entity_9 & 3);
    char item_11d = 1;
    int32_t temp_1 = QTask_ProcessQueue_2(context, Script_ParseEnumReal32_8(), &item_11d);
    temp_1 = param_4;
    char f0 = temp_1;
    temp_1 = -(temp_1);
    item_11d = 0;
    result[0xa] = ((temp_1 - temp_1) & 0xfffffff7) + 9;

    if (!g_539828)
        result[8] = 0x384;

    g_539828 = 0;

    if (!param_3)
    {
        result[0x9ae] = 0xffffffff;
        result[0xa0b] = 0;
    }
    else
    {
        result[0x9f8] = Menu_UpdateLanguage_6(result);
        int32_t frames = 0x3c;
        result[0x9ae] = Frames_Get();
        Frames_Set(frames);
        result[0xa0b] = 1;
    }

    char* item_134_6 = &g_536298;
    char* item_138_4 = ".\ymbe.afp";
    result[0xa0e] = 0;
    *(result + 0x26c3) = param_5;
    int32_t* data_15 = File_Open(item_138_4, item_134_6);

    if (data_15)
    {
        Camera_ApplyLineFilter_4(data_15, nullptr, FILE_BEGIN);
        int32_t entity_13 = 0;
        entity_13 = Camera_SetFieldOfView_4(data_15) == 0x40;
        Camera_UpdateTransform_4(data_15);

        if (entity_13)
            return result;
    }

    Error_Show("EXCEPTION FAULT: 0x000004");

    while (true)
        /* nop */
}
