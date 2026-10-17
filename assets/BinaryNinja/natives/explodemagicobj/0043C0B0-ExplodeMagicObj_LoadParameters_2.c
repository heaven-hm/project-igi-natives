// Original IGI.EXE function: ExplodeMagicObj_LoadParameters_2 (VA 0x0043C0B0; static CFG gate PASS, CFG score 1.000).
#include "ExplodeMagicObj_LoadParameters_2.h"
int32_t ExplodeMagicObj_LoadParameters_2(void* a1)

{
    int16_t result;
    result = *(a1 + 0x148);

    if (!result)
    {
        long double x87_r7_1 = *(a1 + 0x13c);
        long double f0_1 = *(a1 + 0x140);
        x87_r7_1 - f0_1;
        result = (x87_r7_1 < f0_1 ? 1 : 0) << 8 | (FCMP_UO(x87_r7_1, f0_1) ? 1 : 0) << 0xa
            | (x87_r7_1 == f0_1 ? 1 : 0) << 0xe;

        if (!(*(&result + 1) & 1))
        {
            void* valA1 = DynObj_Missing(*(a1 + 0x138));

            if (valA1)
            {
                DynObj_CreateMagicObject_5(a1, valA1);
                int32_t* i = *(a1 + 8);
                *(a1 + 0xdc) = 0;

                if (*i && i)
                {
                    int32_t objC2 = g_afa7e0;

                    do
                    {
                        int32_t* tmpD1 = *i;
                        void* valA5;

                        if (!tmpD1)
                            valA5 = nullptr;
                        else
                        {
                            int32_t valA2 = *tmpD1;
                            int32_t valA3 = -(valA2);
                            valA5 = (valA3 - valA3) & tmpD1;
                        }

                        *((objC2 << 2) + &g_afa6e0) = valA5;
                        g_afa7e0 = objC2 + 1;
                        int32_t valA6 = Render_TransformVertices_2();
                        int32_t valA7 = 0;
                        valA7 = i[7];
                        int32_t valA8 = *(((valA6 * 0x180 + valA7) << 2) + &g_a96ae0);

                        if (valA8)
                            valA8(i);

                        objC2 = g_afa7e0 - 1;
                        g_afa7e0 = objC2;
                        i = *((objC2 << 2) + &g_afa6e0);
                    } while (i);
                }

                void* valA9 = *(a1 + 0x138);
                uint32_t objC6 = *(valA9 + 0x24);
                uint32_t v_34_1 = objC6;
                uint32_t v_38_1 = objC6;
                result = FX_SmokeEmit(a1 + 0x20, 1, 0, *(a1 + 0x144), *(valA9 + 0x14) * 4096f,
                    *(valA9 + 0x18) * 4096f, 0x45c00000, objC6, *(valA9 + 0x28), nullptr,
                    "1009_01_1", valA9 + 0x2c, 0x15, 2, 0x47c80000, 0);
                *(a1 + 0x148) = 1;
            }
            else
            {
                int32_t __saved_esi_2 = *(a1 + 0x138);
                Error_Show("VirModel "%s" not available");

                while (true)
                    /* nop */
            }
        }
    }

    return result;
}
