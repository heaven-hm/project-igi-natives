#include "004FA160-Script_SpawnNewTask_25.h"
/* 0x004fa160 Script_SpawnNewTask_25 full linked: callers=1 callees=25 */
int32_t sub_4fa160(void* a1, void* a2)

{
    int32_t var_258;
    sub_4fa850(a2, &var_258);
    sub_4fa850(a2, a1 + 0x58);
    int32_t var_254;
    sub_4fa850(a2, &var_254);
    void* eax = *(a1 + 0x6c);

    if (eax)
    {
        sub_4b0d10(eax);
        *(a1 + 0x6c) = 0;
    }

    void* eax_3 = Mem_Alloc(sub_4f94d0(a1) * *(a1 + 0x58), 4);
    int32_t edx = *(a1 + 0x58);
    *(a1 + 0x6c) = eax_3;
    sub_4f96e0(a1, edx);
    uint32_t eax_5 = sub_4f9280();
    int32_t ecx = 0;
    ecx = *(a1 + 0x1c);
    int32_t eax_9 = *(((eax_5 * 0x180 + ecx) << 2) + &g_a96ae0);

    if (eax_9)
        eax_9(a1, 0);

    int32_t ebx_1 = 0;
    int32_t var_25c;
    int32_t var_250;
    int32_t* var_24c;

    if (var_258 > 0)
    {
        do
        {
            var_25c = 0xffffffff;
            int32_t var_240;
            sub_4fa850(a2, &var_240);
            void var_238;
            sub_4fa910(a2, &var_238);
            float var_220;
            sub_4fa890(a2, &var_220);
            float var_21c[0x4];
            sub_4fa890(a2, &var_21c);

            if (sub_4faa10(a2) == 6)
                sub_4fa890(a2, &var_250);

            if (sub_4faa10(a2) == 5)
                sub_4fa850(a2, &var_25c);

            int32_t eax_13 = var_25c;
            int32_t var_108;

            if (eax_13 != 0xffffffff)
                var_108 = sub_4ce400(g_a44344, eax_13);

            int32_t var_26c_7 = 0x100;
            void var_20c;
            sub_4fa950(a2, &var_20c);
            int32_t var_278_3 = 0;
            int32_t* eax_17 =
                sub_4f9510(a1, var_240, &var_238, var_220, var_21c[0], var_108, &var_20c);

            if (eax_17)
            {
                void* var_248_1 = a2;
                var_24c = eax_17;
                uint32_t eax_19 = sub_4f9240();
                int32_t edx_3 = 0;
                edx_3 = *(a1 + 0x1c);
                int32_t eax_20 = *(((eax_19 * 0x180 + edx_3) << 2) + &g_a96ae0);

                if (eax_20)
                    eax_20(a1, &var_24c);
            }

            ebx_1 += 1;
        } while (ebx_1 < var_258);
    }

    int32_t eax_23 = var_254;
    int32_t ebx_2 = 0;

    if (eax_23 > 0)
    {
        do
        {
            sub_4fa850(a2, &var_250);
            sub_4fa850(a2, &var_24c);
            sub_4fa850(a2, &var_25c);
            sub_4f9b80(a1, var_250, var_24c, var_25c);
            eax_23 = var_254;
            ebx_2 += 1;
        } while (ebx_2 < eax_23);
    }

    int32_t edx_5 = var_258;
    *(a1 + 0x60) = eax_23;
    *(a1 + 0x5c) = edx_5;
    void* var_244 = a2;
    uint32_t eax_25 = sub_4f9220();
    int32_t ecx_6 = 0;
    ecx_6 = *(a1 + 0x1c);
    int32_t result = *(((eax_25 * 0x180 + ecx_6) << 2) + &g_a96ae0);

    if (!result)
        return result;

    return result(a1, &var_244);
}
