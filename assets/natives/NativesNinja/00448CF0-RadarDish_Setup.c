#include "00448CF0-RadarDish_Setup.h"
/* 0x00448cf0 RadarDish_Setup full linked: callers=0 callees=3 */
int32_t* sub_448cf0(void* a1)

{
    sub_4c7560(*(a1 + 0x68), a1);
    int32_t* result = *(a1 + 0x174);

    if (result)
        result = Qtask_UpdateList(result);

    void* esi_1 = *(a1 + 0x178);

    if (!esi_1)
        return result;

    return sub_4c1830(esi_1);
}
