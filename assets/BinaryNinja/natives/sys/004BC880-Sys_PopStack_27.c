#include "Sys_PopStack_27.h"
int32_t Sys_PopStack_27(int32_t* a1, int32_t a2)

{
    int32_t v_108 = a2;
    void v_100;
    Game_DataSymbolLoad(&v_100, "%d");
    void* dstD = &v_100;
    int32_t i = 0xffffffff;

    while (i)
    {
        bool cond_0_1 = 0 != *dstD;
        dstD += 1;
        i -= 1;

        if (!cond_0_1)
            break;
    }

    return Sys_CloseFileStream_4(a1, &v_100, ~i - 1);
}
