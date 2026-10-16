#include "0052A010-Light_U2F.h"
/* 0x0052a010 Light_U2F full linked: callers=1 callees=17 */
int32_t __convention("regparm") sub_52a010(int32_t a1, int32_t a2, int32_t a3, void* a4)

{
    int32_t var_4 = a3;
    var_4 = g_54f494;
    sub_4e7b80(0x14, 5);
    void* var_14 = a4 + 0x1a8;
    sub_4e7bd0("%s");
    sub_4e7b80(0x14, 6);
    int32_t var_24 = *(a4 + 0x1b8);
    sub_4e7bd0("A:%d");
    sub_4e7b80(0x14, 7);
    int32_t var_34 = *(a4 + 0x1bc);
    sub_4e7bd0("B:%d");
    sub_4e7b80(0x14, 8);
    sub_4e7bd0("U:%.2f");
    sub_4e7b80(0x14, 9);
    sub_4e7bd0("U:%.2f");
    bool eax_3 = *(a4 + 0x215);
    var_4 += *(a4 + 0x214) * 0xe0;
    bool cond:0 = *(a4 + 0x216);
    *(&var_4 + 1) += eax_3 * 0xe0;
    *(&var_4 + 2) += cond:0 * 0xe0;
    sub_4e7b80(0x14, 0xa);
    int32_t* var_20 = &var_4;
    sub_4e7bd0("L:%s");
    int32_t result = sub_4e7b80(0x14, 0xb);
    int32_t esi_1 = *(a4 + 0x218);

    if (esi_1 > 3)
        return result;

    switch (esi_1)
    {
        case 0:
        {
            return sub_4e7bd0("M:World");
            break;
        }
        case 1:
        {
            return sub_4e7bd0("M:Object");
            break;
        }
        case 2:
        {
            return sub_4e7bd0("M:Speed");
            break;
        }
        case 3:
        {
            return sub_4e7bd0("M:Angles");
            break;
        }
    }
}
