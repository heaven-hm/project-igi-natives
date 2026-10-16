#include "004FA3B0-Script_ParseEnumInt32_25.h"
/* 0x004fa3b0 Script_ParseEnumInt32_25 full linked: callers=1 callees=9 */
uint32_t __fastcall sub_4fa3b0(uint32_t a1)

{
    uint32_t var_4 = a1;
    uint32_t result_2;
    uint32_t result_1 = result_2;
    uint32_t result = result_1;
    int32_t i_1 = result_1 - 1;

    if (result)
    {
        void* arg_4;
        void* edi_1 = arg_4;
        int32_t i;

        do
        {
            result = sub_4b1760(*(edi_1 + 4));

            if (result)
                break;

            sub_4b17c0(*(edi_1 + 4));
            Resource_Unpack(*(edi_1 + 4), &result_2, 1);
            result = result_2;
            uint32_t esi_1;

            switch (result)
            {
                case 0:
                case 1:
                {
                    sub_4b17c0(*(edi_1 + 4));
                    result = sub_4b1730(*(edi_1 + 4), 1, 1);
                    break;
                }
                case 2:
                case 3:
                {
                    sub_4b17c0(*(edi_1 + 4));
                    result = sub_4b1730(*(edi_1 + 4), 2, 1);
                    break;
                }
                case 4:
                case 5:
                case 6:
                {
                    sub_4b17c0(*(edi_1 + 4));
                    result = sub_4b1730(*(edi_1 + 4), 4, 1);
                    break;
                }
                case 7:
                {
                    sub_4b17c0(*(edi_1 + 4));
                    result = sub_4b1730(*(edi_1 + 4), 8, 1);
                    break;
                }
                case 8:
                {
                    sub_4b17c0(*(edi_1 + 4));
                    result = sub_4b1730(*(edi_1 + 4), 0x18, 1);
                    break;
                }
                case 9:
                {
                    sub_4b17c0(*(edi_1 + 4));
                    result = Resource_Unpack(*(edi_1 + 4), &arg_4, 1);
                    esi_1 = arg_4;
                label_4fa47b:

                    if (esi_1)
                    {
                        sub_4b17c0(*(edi_1 + 4));
                        result = sub_4b1730(*(edi_1 + 4), esi_1, 1);
                    }
                    break;
                }
                case 0xa:
                {
                    sub_4b17c0(*(edi_1 + 4));
                    result = Resource_Unpack(*(edi_1 + 4), &var_4, 4);
                    esi_1 = var_4;
                    goto label_4fa47b;
                }
            }

            i = i_1;
            i_1 -= 1;
        } while (i);
    }

    return result;
}
