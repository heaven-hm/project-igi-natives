#include "004FAE50-Graph_OnEvent.h"
/* 0x004fae50 Graph_OnEvent full linked: callers=0 callees=6 */
int32_t sub_4fae50(void* a1, int32_t* a2)

{
    int32_t esi = *a2;
    *(a1 + 0x68) = 0;
    *(a1 + 0x69) = 0;
    sub_4b8a20(a2[1], esi);
    *(a1 + 0x58) = sub_4b8a20(a2[1], esi + 1);
    sub_4b8a20(a2[1], esi + 2);
    *(a1 + 0x5c) = 0;
    *(a1 + 0x60) = 0;
    int32_t var_430 = sub_4f1050(a1);
    void var_400;
    Game_DataSymbolLoad(&var_400, "MISSION:graphs/graph%d.dat");
    void* var_440 = a1;
    int32_t result = Graph_Open(&var_400);
    *a2 = esi + 3;
    return result;
}
