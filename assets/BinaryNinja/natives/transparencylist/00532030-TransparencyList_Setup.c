// Original IGI.EXE function: TransparencyList_Setup (VA 0x00532030; static CFG gate PASS, CFG score 1.000).
#include "TransparencyList_Setup.h"
int32_t* TransparencyList_Setup(int32_t* context)

{
    void* data_1 = context[3];
    int32_t* __saved_ecx_2 = *(data_1 + 0x6c);
    void** dest_val = *(data_1 + 0x78);
    int32_t data_2 = Particle_FadeParticles_5(dest_val, __saved_ecx_2, 8, sub_5320d0);

    if (__saved_ecx_2 <= 0)
    {
        g_a84620 = 0;
        return data_2;
    }

    int32_t* dest_1 = &dest_val[1];
    context = dest_1;
    int32_t* saved_ctx = __saved_ecx_2;
    int32_t* __saved_ecx_1;
    bool flag_0_1;

    do
    {
        void* data_3 = *dest_1;
        int32_t i_1 = *(data_3 + 4);
        int32_t flagP1 = *(data_3 + 0x18);
        int32_t dest_2 = *(data_3 + 0x1c);
        void* source_val = data_3 + 0x20;

        if (i_1 > 0)
        {
            int32_t i;

            do
            {
                int32_t* data_4 = g_5ca114;
                (*(*data_4 + 0x64))(data_4, 4, dest_2, source_val, 3, 0);
                source_val += flagP1 * 3;
                i = i_1;
                i_1 -= 1;
            } while (i != 1);
        }

        dest_1 = &context[2];
        __saved_ecx_1 = saved_ctx - 1;
        flag_0_1 = saved_ctx != 1;
        context = dest_1;
        saved_ctx = __saved_ecx_1;
    } while (flag_0_1);
    g_a84620 = 0;
    return __saved_ecx_1;
}
