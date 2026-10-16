#include "00468920-ComputerLog_LoadParameters.h"
/* 0x00468920 ComputerLog_LoadParameters full linked: callers=0 callees=14 */
struct status_msg* sub_468920(float a1)

{
    int32_t eax = g_c28b44;
    void* ebx = a1;
    int32_t ecx = g_c28b48;
    g_5bdd68 = ebx;
    struct status_msg* eax_1;
    int32_t edx;
    eax_1 = sub_505600(ebx);
    void* ecx_1 = sub_46b060(eax_1);
    *(ebx + 0x20) = 0;
    struct status_msg* eax_2 = sub_46c0b0();

    if (eax_2)
    {
        void* var_24_1 = &g_53f6fc;
        int32_t* eax_3 = Resource_Load(eax_2, 0, ecx_1, nullptr);
        void* eax_5;
        int32_t ecx_2;
        eax_5 = Menu_HandleInput_3(*(g_bc2360 + 0x120), "font3.fnt");
        int32_t var_28_2 = ecx_2;
        int32_t var_2c_1 = ecx_2;
        eax_2 = sub_46b970(eax_1, 1, 0, 0, 0, 0, 0, eax * 0.100000001f, ecx * 0.808333337f, eax_5,
            eax_3, 1, sub_468b00);
    }

    char* var_24_3 = "OBJECTIVES";
    float var_8_1 = ecx;
    a1 = eax;
    int32_t* eax_6 = Resource_Load(eax_2, edx, ecx_1, nullptr);
    void* eax_7;
    int32_t ecx_4;
    eax_7 = Menu_HandleInput_3(*(g_bc2360 + 0x120), "font3.fnt");
    int32_t var_28_5 = ecx_4;
    int32_t var_2c_3 = ecx_4;
    sub_46b970(eax_1, 2, 0, 0, 0, 0, 0, a1 * 0.100000001f, var_8_1 * 0.774999976f, eax_7, eax_6,
        1, sub_468b00);
    float var_4_1 = a1 * 0.090625003f;
    a1 = var_8_1 * 0.100000001f;
    void* var_34 = &g_5bdf18;
    void* var_38 = &g_5bdf18;
    sub_46b660(eax_1, 3, 0, 0, 0, 0, 0, var_4_1, a1, 0, nullptr, &g_567c74, 0x5bdf00,
        &g_5bdf18, 0x5bdf30, sub_468b30);
    void* var_34_2 = &g_5bdf60;
    void* var_38_2 = &g_5bdf60;
    return sub_46b660(eax_1, 4, 0, 0, 0, 0, 0, var_4_1, a1 + 36f, 0, nullptr, &g_567c74,
        0x5bdf48, &g_5bdf60, 0x5bdf78, sub_468b30);
}
