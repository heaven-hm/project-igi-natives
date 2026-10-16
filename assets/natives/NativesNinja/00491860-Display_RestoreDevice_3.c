#include "00491860-Display_RestoreDevice_3.h"
/* 0x00491860 Display_RestoreDevice_3 full linked: callers=1 callees=0 */
int32_t* sub_491860()

{
    int32_t* i = &g_c28a44;
    g_bcadec = 0;
    g_bcae00 = 0;
    g_bcadfc = 0;

    do
    {
        *i = 0;
        i = &i[2];
    } while (i < &g_c28b44);

    return i;
}
