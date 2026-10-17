// Original IGI.EXE function: Config_YmbeAfp (VA 0x00402F50; static CFG gate PASS, CFG score 0.944).
#include "Config_YmbeAfp.h"
int32_t __fastcall Config_YmbeAfp(int32_t context)

{
    int32_t rootPathName = context;
    rootPathName = g_536408;

    for (char i = 0x41; i <= 0x5a; i += 1)
    {
        GetDriveTypeA(&rootPathName);
        int32_t* data_1 = File_Open(".\ymbe.afp", "rb");

        if (data_1)
        {
            Camera_ApplyLineFilter_4(data_1, nullptr, FILE_BEGIN);
            int32_t temp_1 = 0;
            temp_1 = Camera_SetFieldOfView_4(data_1) == 0x40;
            int32_t result = Camera_UpdateTransform_4(data_1);

            if (temp_1)
                return result;
        }
    }

    Error_Show("IGI CD not found. Please insert CD in drive.");

    while (true)
        /* nop */
}
