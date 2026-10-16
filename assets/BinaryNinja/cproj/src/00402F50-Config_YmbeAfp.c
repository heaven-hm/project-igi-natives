#include "gi_platform.h"
#include "00402F50-Config_YmbeAfp.h"
int32_t __fastcall Config_YmbeAfp(int32_t a1)

{
    int32_t rootPathName = a1;
    rootPathName = g_536408;

    for (char i = 0x41; i <= 0x5a; i += 1)
    {
        GetDriveTypeA(&rootPathName);
        int32_t* valA1 = File_Open(".\ymbe.afp", "rb");

        if (valA1)
        {
            Camera_ApplyLineFilter_4(valA1, nullptr, FILE_BEGIN);
            int32_t tmpD1 = 0;
            tmpD1 = Camera_SetFieldOfView_4(valA1) == 0x40;
            int32_t result = Camera_UpdateTransform_4(valA1);

            if (tmpD1)
                return result;
        }
    }

    Error_Show("IGI CD not found. Please insert CD in drive.");

    while (true)
        /* nop */
}
