/* LOGIC NOTE (Config_YmbeAfp @ 0x00402F50)
   verified : address, signature, block count and call edges against Binary Ninja MCP; CFG against r2 afij.
   calls     : , Erro
   called by : Flow_RunHandler
   data refs : none
   strings   : IGI CD not found. Please insert CD in drive.
   depth     : signature+links+strings verified per-method; names of callees/register temps humanized.
*/
#include "Config_YmbeAfp.h"

int32_t __fastcall Config_YmbeAfp(int32_t arg1)

{
    int32_t rootPathName = arg1;
    rootPathName = data_536408;

    for (char i = 0x41; i <= 0x5a; i += 1)
    {
        GetDriveTypeA(&rootPathName);
        int32_t* result_1 = File_Open(".\ymbe.afp", "rb");

        if (result_1)
        {
            Camera_ApplyLineFilter_4(result_1, nullptr, FILE_BEGIN);
            int32_t tmp_1 = 0;
            tmp_1 = Camera_SetFieldOfView_4(result_1) == 0x40;
            int32_t result = Camera_UpdateTransform_4(result_1);

            if (tmp_1)
                return result;
        }
    }

    Error_Show("IGI CD not found. Please insert CD in drive.");

    while (true)
        /* nop */
}
