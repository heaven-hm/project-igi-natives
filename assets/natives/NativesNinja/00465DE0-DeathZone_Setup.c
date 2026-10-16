#include "00465DE0-DeathZone_Setup.h"
/* 0x00465de0 DeathZone_Setup full linked: callers=0 callees=15 */
int32_t sub_465de0(void* a1)

{
    int32_t eax = *(a1 + 0x130);

    if (eax)
    {
        int16_t eax_1 = sub_4f45f0();
        int32_t ecx;
        ecx = *(*(a1 + 0x130) + 0x1c);
        eax = TaskType_IsDerivedFrom(ecx, eax_1);

        if (eax)
        {
            void* esi_1 = *(a1 + 0x130);
            int16_t eax_3 = Menu_PlayMusic_21();
            void* var_8;

            if (*(esi_1 + 0x1c) != eax_3)
            {
                eax = sub_4fc7b0(esi_1);

                if (!eax)
                {
                    var_8 = a1;
                    void* var_4_2 = esi_1 + 0x108;
                    int32_t i = 0;
                    eax = sub_460c60();

                    if (*eax > 0)
                    {
                        int32_t esi_4 = 8;

                        do
                        {
                            int32_t edx_2 = 0;
                            edx_2 = *(*(sub_460c60() + esi_4) + 0x1c);
                            uint32_t eax_13 = sub_466230();
                            (*(((edx_2 + eax_13 * 0x180) << 2) + &g_a96ae0))(
                                *(sub_460c60() + esi_4), &var_8);
                            i += 1;
                            esi_4 += 4;
                            eax = sub_460c60();
                        } while (i < *eax);
                    }
                }
            }
            else
            {
                void* ebx_1 = *(esi_1 + 0x14);
                eax = Menu_PlayMusic_21();

                if (*(ebx_1 + 0x1c) == eax)
                    esi_1 = ebx_1;

                long double x87_r7_1 = *(esi_1 + 0x108);
                long double temp0_1 = 0f;
                x87_r7_1 - temp0_1;
                eax = (x87_r7_1 < temp0_1 ? 1 : 0) << 8
                    | (FCMP_UO(x87_r7_1, temp0_1) ? 1 : 0) << 0xa
                    | (x87_r7_1 == temp0_1 ? 1 : 0) << 0xe;

                if (!(*(&eax + 1) & 0x40))
                {
                    var_8 = a1;
                    void* var_4_1 = esi_1 + 0x108;
                    int32_t i_1 = 0;
                    eax = sub_460c60();

                    if (*eax > 0)
                    {
                        int32_t esi_2 = 8;
                        int32_t* eax_10;

                        do
                        {
                            int32_t eax_5 = 0;
                            eax_5 = *(*(sub_460c60() + esi_2) + 0x1c);
                            uint32_t eax_7 = sub_466230();
                            (*(((eax_5 + eax_7 * 0x180) << 2) + &g_a96ae0))(
                                *(sub_460c60() + esi_2), &var_8);
                            i_1 += 1;
                            esi_2 += 4;
                            eax_10 = sub_460c60();
                        } while (i_1 < *eax_10);

                        return eax_10;
                    }
                }
            }
        }
    }

    return eax;
}
