// Original IGI.EXE function: MenuLoader_Setup (VA 0x00419210; static CFG gate PASS, CFG score 1.000).
#include "MenuLoader_Setup.h"
int32_t* MenuLoader_Setup(void* context)

{
    int32_t* result = Level_LoadLevel_6();
    int32_t* result_1 = result;
    result = *(context + 0x120);

    if (result)
    {
        QFile_AliasResolve(0x57baf8, context + 0x20, 0);
        result = QFile_DeviceIndex(0x57baf8);

        if (result)
            result = Menu_Manager(result_1[0x11], context + 0x20, 0, 1, 0);
    }

    result = *(context + 0x121);

    if (result)
    {
        result = QTask_DeleteTask_2(result_1[0x11], Menu_UpdateLanguage_3());

        if (result)
        {
            Script_ParseEnumInt32_5(result);
            return QTask_FindType(result);
        }
    }

    return result;
}
