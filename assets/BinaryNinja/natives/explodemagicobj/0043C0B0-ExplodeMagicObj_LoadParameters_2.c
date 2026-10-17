// Original IGI.EXE function: ExplodeMagicObj_LoadParameters_2 (VA 0x0043C0B0; static CFG gate PASS, CFG score 1.000).
#include "ExplodeMagicObj_LoadParameters_2.h"
int32_t ExplodeMagicObj_LoadParameters_2(void* context)

{
    int16_t result;
    result = *(context + 0x148);

    if (!result)
    {
        long double fpu_val_7_1 = *(context + 0x13c);
        long double f0_1 = *(context + 0x140);
        fpu_val_7_1 - f0_1;
        result = (fpu_val_7_1 < f0_1 ? 1 : 0) << 8 | (FCMP_UO(fpu_val_7_1, f0_1) ? 1 : 0) << 0xa
            | (fpu_val_7_1 == f0_1 ? 1 : 0) << 0xe;

        if (!(*(&result + 1) & 1))
        {
            void* data_1 = DynObj_Missing(*(context + 0x138));

            if (data_1)
            {
                DynObj_CreateMagicObject_5(context, data_1);
                int32_t* i = *(context + 8);
                *(context + 0xdc) = 0;

                if (*i && i)
                {
                    int32_t entity_2 = g_afa7e0;

                    do
                    {
                        int32_t* temp_1 = *i;
                        void* data_5;

                        if (!temp_1)
                            data_5 = nullptr;
                        else
                        {
                            int32_t data_2 = *temp_1;
                            int32_t data_3 = -(data_2);
                            data_5 = (data_3 - data_3) & temp_1;
                        }

                        *((entity_2 << 2) + &g_afa6e0) = data_5;
                        g_afa7e0 = entity_2 + 1;
                        int32_t data_6 = Render_TransformVertices_2();
                        int32_t data_7 = 0;
                        data_7 = i[7];
                        int32_t data_8 = *(((data_6 * 0x180 + data_7) << 2) + &g_a96ae0);

                        if (data_8)
                            data_8(i);

                        entity_2 = g_afa7e0 - 1;
                        g_afa7e0 = entity_2;
                        i = *((entity_2 << 2) + &g_afa6e0);
                    } while (i);
                }

                void* data_9 = *(context + 0x138);
                uint32_t entity_6 = *(data_9 + 0x24);
                uint32_t item_34_1 = entity_6;
                uint32_t item_38_1 = entity_6;
                result = FX_SmokeEmit(context + 0x20, 1, 0, *(context + 0x144), *(data_9 + 0x14) * 4096.0f,
                    *(data_9 + 0x18) * 4096.0f, 0x45c00000, entity_6, *(data_9 + 0x28), nullptr,
                    "1009_01_1", data_9 + 0x2c, 0x15, 2, 0x47c80000, 0);
                *(context + 0x148) = 1;
            }
            else
            {
                int32_t saved_esi_2 = *(context + 0x138);
                Error_Show("VirModel "%s" not available");

                while (true)
                    /* nop */
            }
        }
    }

    return result;
}
