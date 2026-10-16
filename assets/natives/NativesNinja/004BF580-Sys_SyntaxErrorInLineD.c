#include "004BF580-Sys_SyntaxErrorInLineD.h"
/* 0x004bf580 Sys_SyntaxErrorInLineD full linked: callers=1 callees=8 */
int32_t sub_4bf580(int32_t* a1, void** a2)

{
    switch (sub_4bf3a0(a1) - 1)
    {
        case 0:
        {
            return sub_4bf1f0(a1, a2);
            break;
        }
        case 2:
        {
            return sub_4bf620(a1, a2);
            break;
        }
        case 3:
        {
            int32_t var_c_3 = sub_4bf390(a1);
            sub_4b7e10("'else' without matching 'if' in line %d");
            return 0;
            break;
        }
        case 5:
        {
            return sub_4bf850(a1, a2);
            break;
        }
    }

    int32_t var_c_4 = sub_4bf390(a1);
    sub_4b7e10("Syntax error in line %d");
    return 0;
}
