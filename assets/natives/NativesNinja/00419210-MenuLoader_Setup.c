#include "00419210-MenuLoader_Setup.h"
/* 0x00419210 MenuLoader_Setup full linked: callers=0 callees=8 */
int32_t* MenuLoader_Setup(void* a1)

{
    int32_t* result = Level_LoadLevel_6();
    int32_t* result_1 = result;
    result = *(a1 + 0x120);

    if (result)
    {
        QFile_AliasResolve(0x57baf8, a1 + 0x20, 0);
        result = QFile_DeviceIndex(0x57baf8);

        if (result)
            result = Menu_Manager(result_1[0x11], a1 + 0x20, 0, 1, 0);
    }

    result = *(a1 + 0x121);

    if (result)
    {
        result = QTask_DeleteTask_2(result_1[0x11], Menu_UpdateLanguage_3());

        if (result)
        {
            sub_4f1110(result);
            return QTask_FindType(result);
        }
    }

    return result;
}
