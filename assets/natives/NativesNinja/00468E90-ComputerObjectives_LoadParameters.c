#include "00468E90-ComputerObjectives_LoadParameters.h"
/* 0x00468e90 ComputerObjectives_LoadParameters full linked: callers=0 callees=14 */
struct status_msg* sub_468e90(void* a1)

{
    int32_t eax = g_c28b44;
    int32_t ecx = g_c28b48;
    struct status_msg* eax_1;
    int32_t edx_1;
    eax_1 = sub_505600(a1);
    void* ecx_1 = sub_46b060(eax_1);
    struct status_msg* eax_2 = sub_46c0b0();

    if (eax_2)
    {
        void* var_24_1 = &g_53f6fc;
        int32_t* eax_3 = Resource_Load(eax_2, 0, ecx_1, nullptr);
        void* eax_5;
        int32_t ecx_3;
        eax_5 = Menu_HandleInput_3(*(g_bc2360 + 0x120), "font3.fnt");
        int32_t var_28_2 = ecx_3;
        int32_t var_2c_1 = ecx_3;
        eax_2 = sub_46b970(eax_1, 1, 0, 0, 0, 0, 0, eax * 0.100000001f, ecx * 0.808333337f, eax_5,
            eax_3, 1, sub_469030);
    }

    void* var_24_3 = &g_53f714;
    float var_c_1 = ecx;
    float var_8_1 = eax;
    int32_t* eax_6 = Resource_Load(eax_2, edx_1, ecx_1, nullptr);
    void* eax_8;
    int32_t ecx_4;
    eax_8 = Menu_HandleInput_3(*(g_bc2360 + 0x120), "font3.fnt");
    int32_t var_28_5 = ecx_4;
    int32_t var_2c_3 = ecx_4;
    sub_46b970(eax_1, 2, 0, 0, 0, 0, 0, var_8_1 * 0.100000001f, var_c_1 * 0.774999976f, eax_8,
        eax_6, 1, sub_469030);
    struct status_msg* result = sub_46c0b0();

    if (result)
    {
        int32_t i = 0;
        struct status_msg** edi_1 = a1 + 0x20;

        do
        {
            result = sub_46b660(eax_1, i + 3, 0, 0, 0, 0, 0, var_8_1 * -0.125f,
                var_c_1 * -0.166666672f, 0, nullptr, &g_567c74, 0x5be068, 0x5be080, 0x5be080,
                sub_469060);
            *edi_1 = result;
            i += 1;
            edi_1 = &edi_1[1];
        } while (i < 6);
    }

    return result;
}
