#include "00418B00-Menu_Manager.h"
/* 0x00418b00 Menu_Manager full linked: callers=3 callees=31 */
int32_t* Menu_Manager(void* a1, void* a2, char a3, char a4, char a5)

// Sig: int* Menu_Manager(int p1,char *menu_str,char p3,char p4,int p5)
// Note: MenuManager load for inagame or Mainmenu,Params:  p1: 0057BABC
// ,p3,p4,p5: 0.
{
    if (a3)
    {
        void* eax = Config_GetActivePlayerProfileRecord();
        void var_11c;
        __builtin_memset(&var_11c, 0, 0x11c);
        int32_t var_104_1 = sub_4950e0();
        char var_106_1 = 1;
        int32_t var_118;
        memcpy(&var_118,
            "\x80\x02\x00\x00\xe0\x01\x00\x00\x01\x00\x00\x00\x10\x00\x00\x00\x01", 0x11);
        int32_t var_104_2 = sub_4950e0();
        char* eax_3 = eax + 0x11f;
        char var_106_2 = 1;

        if (!eax_3)
            eax_3 = &g_567c74;

        char* edi_1 = eax_3;
        int32_t i = 0xffffffff;

        while (i)
        {
            bool cond:3_1 = 0 != *edi_1;
            edi_1 = &edi_1[1];
            i -= 1;

            if (!cond:3_1)
                break;
        }

        int32_t ecx_1 = ~i;
        void var_80;
        int32_t esi_2;
        int32_t edi_3;
        edi_3 = memcpy(&var_80, edi_1 - ecx_1, ecx_1 & 0xfffffffc);
        char* eax_5 = eax + 0x1f;
        memcpy(edi_3, esi_2, ecx_1 & 3);

        if (!eax_5)
            eax_5 = &g_567c74;

        char* edi_4 = eax_5;
        int32_t i_1 = 0xffffffff;

        while (i_1)
        {
            bool cond:5_1 = 0 != *edi_4;
            edi_4 = &edi_4[1];
            i_1 -= 1;

            if (!cond:5_1)
                break;
        }

        int32_t ecx_5 = ~i_1;
        char var_134_1 = 0;
        void var_100;
        int32_t esi_4;
        int32_t edi_6;
        edi_6 = memcpy(&var_100, edi_4 - ecx_5, ecx_5 & 0xfffffffc);
        memcpy(edi_6, esi_4, ecx_5 & 3);
        sub_4e7540(&var_11c, var_134_1);
        Display_SetMode(&var_11c);
    }

    void* edi_7 = a2;
    int32_t* eax_7 = Qvm_Load(edi_7);

    if (!eax_7)
    {
        void* var_134_9 = edi_7;
        Error_Show("Failed to load menumanager: '%s'");

        while (true)
            /* nop */

        return;
    }

    Script_Init(edi_7, 1, 0, 0);
    Script_SetSymbolContext("Task_New", a1);
    Qvm_Execute(eax_7);
    Qvm_Cleanup(eax_7);
    int32_t* result = QTask_DeleteTask_2(a1, Menu_UpdateLanguage_3());
    int32_t i_2 = 0xffffffff;

    while (i_2)
    {
        bool cond:2_1 = 0 != *edi_7;
        edi_7 += 1;
        i_2 -= 1;

        if (!cond:2_1)
            break;
    }

    int32_t ecx_9 = ~i_2;
    int32_t esi_7;
    int32_t edi_10;
    edi_10 = memcpy(result + 0x26c5, edi_7 - ecx_9, ecx_9 & 0xfffffffc);
    memcpy(edi_10, esi_7, ecx_9 & 3);
    char var_11d = 1;
    int32_t edx_1 = QTask_ProcessQueue_2(a1, sub_4f1a70(), &var_11d);
    edx_1 = a4;
    char temp0 = edx_1;
    edx_1 = -(edx_1);
    var_11d = 0;
    result[0xa] = ((edx_1 - edx_1) & 0xfffffff7) + 9;

    if (!g_539828)
        result[8] = 0x384;

    g_539828 = 0;

    if (!a3)
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

    char* var_134_6 = &g_536298;
    char* var_138_4 = ".\ymbe.afp";
    result[0xa0e] = 0;
    *(result + 0x26c3) = a5;
    int32_t* eax_15 = File_Open(var_138_4, var_134_6);

    if (eax_15)
    {
        sub_4a52a4(eax_15, nullptr, FILE_BEGIN);
        int32_t ecx_13 = 0;
        ecx_13 = sub_4a528a(eax_15) == 0x40;
        sub_4a5234(eax_15);

        if (ecx_13)
            return result;
    }

    Error_Show("EXCEPTION FAULT: 0x000004");

    while (true)
        /* nop */
}
