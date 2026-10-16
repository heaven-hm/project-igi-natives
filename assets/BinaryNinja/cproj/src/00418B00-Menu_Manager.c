#include "gi_platform.h"
#include "00418B00-Menu_Manager.h"
int32_t* Menu_Manager(void* a1, void* a2, char a3, char a4, char a5)

// Sig: int* Menu_Manager(int p1,char *menu_str,char p3,char p4,int p5)
// Note: MenuManager load for inagame or Mainmenu,Params:  p1: 0057BABC
// ,p3,p4,p5: 0.
{
    if (a3)
    {
        void* valA = Config_GetActivePlayerProfileRecord();
        char v_11c;
        __builtin_memset(&v_11c, 0, 0x11c);
        int32_t v_104_1 = Display_CheckCapabilities_7();
        char v_106_1 = 1;
        int32_t v_118;
        memcpy(&v_118,
            "\x80\x02\x00\x00\xe0\x01\x00\x00\x01\x00\x00\x00\x10\x00\x00\x00\x01", 0x11);
        int32_t v_104_2 = Display_CheckCapabilities_7();
        char* valA3 = valA + 0x11f;
        char v_106_2 = 1;

        if (!valA3)
            valA3 = &g_567c74;

        char* dstD1 = valA3;
        int32_t i = 0xffffffff;

        while (i)
        {
            bool cond_3_1 = 0 != *dstD1;
            dstD1 = &dstD1[1];
            i -= 1;

            if (!cond_3_1)
                break;
        }

        int32_t objC1 = ~i;
        char v_80;
        int32_t srcS2;
        int32_t dstD3;
        dstD3 = memcpy(&v_80, dstD1 - objC1, objC1 & 0xfffffffc);
        char* valA5 = valA + 0x1f;
        memcpy(dstD3, srcS2, objC1 & 3);

        if (!valA5)
            valA5 = &g_567c74;

        char* dstD4 = valA5;
        int32_t i_1 = 0xffffffff;

        while (i_1)
        {
            bool cond_5_1 = 0 != *dstD4;
            dstD4 = &dstD4[1];
            i_1 -= 1;

            if (!cond_5_1)
                break;
        }

        int32_t objC5 = ~i_1;
        char v_134_1 = 0;
        char v_100;
        int32_t srcS4;
        int32_t dstD6;
        dstD6 = memcpy(&v_100, dstD4 - objC5, objC5 & 0xfffffffc);
        memcpy(dstD6, srcS4, objC5 & 3);
        Screen_Process(&v_11c, v_134_1);
        Display_SetMode(&v_11c);
    }

    void* dstD7 = a2;
    int32_t* valA7 = Qvm_Load(dstD7);

    if (!valA7)
    {
        void* v_134_9 = dstD7;
        Error_Show("Failed to load menumanager: '%s'");

        while (true)
            /* nop */

        return;
    }

    Script_Init(dstD7, 1, 0, 0);
    Script_SetSymbolContext("Task_New", a1);
    Qvm_Execute(valA7);
    Qvm_Cleanup(valA7);
    int32_t* result = QTask_DeleteTask_2(a1, Menu_UpdateLanguage_3());
    int32_t i_2 = 0xffffffff;

    while (i_2)
    {
        bool cond_2_1 = 0 != *dstD7;
        dstD7 += 1;
        i_2 -= 1;

        if (!cond_2_1)
            break;
    }

    int32_t objC9 = ~i_2;
    int32_t srcS7;
    int32_t dstD10;
    dstD10 = memcpy(result + 0x26c5, dstD7 - objC9, objC9 & 0xfffffffc);
    memcpy(dstD10, srcS7, objC9 & 3);
    char v_11d = 1;
    int32_t tmpD1 = QTask_ProcessQueue_2(a1, Script_ParseEnumReal32_8(), &v_11d);
    tmpD1 = a4;
    char f0 = tmpD1;
    tmpD1 = -(tmpD1);
    v_11d = 0;
    result[0xa] = ((tmpD1 - tmpD1) & 0xfffffff7) + 9;

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

    char* v_134_6 = &g_536298;
    char* v_138_4 = ".\ymbe.afp";
    result[0xa0e] = 0;
    *(result + 0x26c3) = a5;
    int32_t* valA15 = File_Open(v_138_4, v_134_6);

    if (valA15)
    {
        Camera_ApplyLineFilter_4(valA15, nullptr, FILE_BEGIN);
        int32_t objC13 = 0;
        objC13 = Camera_SetFieldOfView_4(valA15) == 0x40;
        Camera_UpdateTransform_4(valA15);

        if (objC13)
            return result;
    }

    Error_Show("EXCEPTION FAULT: 0x000004");

    while (true)
        /* nop */
}
