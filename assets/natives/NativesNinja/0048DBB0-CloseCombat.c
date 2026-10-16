#include "0048DBB0-CloseCombat.h"
/* 0x0048dbb0 CloseCombat full linked: callers=0 callees=3 */
bool sub_48dbb0(void* a1)

{
    char* var_8 = "Stand - CloseCombat Trigger";
    int32_t var_c = 0xffffffff;
    void* var_10 = a1;
    sub_48ef70(a1, 9, 1f);
    return !sub_48efe0(a1, 0);
}
