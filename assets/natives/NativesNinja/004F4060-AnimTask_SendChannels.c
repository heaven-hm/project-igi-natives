#include "004F4060-AnimTask_SendChannels.h"
/* 0x004f4060 AnimTask_SendChannels full linked: callers=1 callees=2 */
void* sub_4f4060(void* a1)

{
    void* result = sub_4f1030(*(a1 + 0x2014c));
    void* result_1 = result;

    if (result_1)
    {
        int32_t var_8 = *(a1 + 0x20154);
        void* var_4_1 = a1 + 0x6c;
        uint32_t eax_2 = sub_4f40d0();
        int32_t eax_3 = 0;
        eax_3 = *(result_1 + 0x1c);
        result = *(((eax_2 * 0x180 + eax_3) << 2) + &g_a96ae0);

        if (result)
            return result(result_1, &var_8);
    }

    return result;
}
