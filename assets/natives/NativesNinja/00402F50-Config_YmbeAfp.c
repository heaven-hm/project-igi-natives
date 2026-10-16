#include "00402F50-Config_YmbeAfp.h"
/* 0x00402f50 Config_YmbeAfp full linked: callers=1 callees=6 */
int32_t __fastcall Config_YmbeAfp(int32_t a1)

{
    int32_t rootPathName = a1;
    rootPathName = g_536408;

    for (char i = 0x41; i <= 0x5a; i += 1)
    {
        GetDriveTypeA(&rootPathName);
        int32_t* eax_1 = File_Open(".\ymbe.afp", "rb");

        if (eax_1)
        {
            sub_4a52a4(eax_1, nullptr, FILE_BEGIN);
            int32_t edx_1 = 0;
            edx_1 = sub_4a528a(eax_1) == 0x40;
            int32_t result = sub_4a5234(eax_1);

            if (edx_1)
                return result;
        }
    }

    Error_Show("IGI CD not found. Please insert CD in drive.");

    while (true)
        /* nop */
}
