#include "004ACBE9-Camera_SetFieldOfView_26.h"
/* 0x004acbe9 Camera_SetFieldOfView_26 full linked: callers=3 callees=2 */
int32_t sub_4acbe9()

{
    int32_t var_10;
    void arg_4;
    sub_4acc4d(&var_10, &arg_4);
    int16_t* var_1c_1 = &g_936218;
    int32_t var_20_1 = 0;
    int32_t var_24 = 0x11;
    int32_t var_30 = var_10;
    void var_2c;
    int32_t* edi = &var_2c;
    void var_c;
    int32_t* esi = &var_c;
    *edi = *esi;
    edi[1] = esi[1];
    g_936240 = sub_4ae0ca(var_30);
    g_936238 = g_93621a;
    g_93623c = g_936218;
    g_936244 = 0x93621c;
    return &g_936238;
}
