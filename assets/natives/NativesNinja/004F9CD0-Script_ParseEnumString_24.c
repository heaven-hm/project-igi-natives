#include "004F9CD0-Script_ParseEnumString_24.h"
/* 0x004f9cd0 Script_ParseEnumString_24 full linked: callers=11 callees=12 */
char* sub_4f9cd0(int32_t* a1, double* a2, int32_t a3)

{
    sub_4faa10(*a1);
    int32_t result = a1[4];

    if (result > 0xa)
        return result;

    switch (result)
    {
        case 0:
        {
            return sub_4fa7e0(*a1, a2);
            break;
        }
        case 1:
        {
            return sub_4fa7e0(*a1, a2);
            break;
        }
        case 2:
        {
            return sub_4fa810(*a1, a2);
            break;
        }
        case 3:
        {
            return sub_4fa810(*a1, a2);
            break;
        }
        case 4:
        {
            return sub_4fa850(*a1, a2);
            break;
        }
        case 5:
        {
            return sub_4fa850(*a1, a2);
            break;
        }
        case 6:
        {
            return sub_4fa890(*a1, a2);
            break;
        }
        case 7:
        {
            return sub_4fa8d0(*a1, a2);
            break;
        }
        case 8:
        {
            return sub_4fa910(*a1, a2);
            break;
        }
        case 9:
        {
            int32_t var_8_10 = a3;
            return sub_4fa950(*a1, a2);
            break;
        }
        case 0xa:
        {
            return sub_4fa9d0(*a1, a2, a3);
            break;
        }
    }
}
