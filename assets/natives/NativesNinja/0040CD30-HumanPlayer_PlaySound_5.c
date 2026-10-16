#include "0040CD30-HumanPlayer_PlaySound_5.h"
/* 0x0040cd30 HumanPlayer_PlaySound_5 full linked: callers=2 callees=19 */
int32_t* HumanPlayer_PlaySound_5(void* a1, int32_t a2)

{
    sub_4636a0(a1, sub_463740(a1));
    sub_463610(a1);
    void* eax_2 = a2 - 1;
    *(a1 + 0x7bc) = 0;

    switch (eax_2)
    {
        case nullptr:
        {
            sub_460ce0(sub_4636e0(a1));
            sub_463620(a1);
            return sub_4636a0(a1, nullptr);
            break;
        }
        case 1:
        {
            sub_444bc0(sub_4636e0(a1));
            sub_463620(a1);
            return sub_4636a0(a1, nullptr);
            break;
        }
        case 2:
        {
            void* eax_6 = sub_4636e0(a1);

            if (!sub_447d40(eax_6))
            {
                sub_447da0(eax_6);
                HumanPlayer_ApplyRecoil_4(eax_6, a1);
                sub_463620(a1);
                return sub_4636a0(a1, nullptr);
            }

            eax_2 = sub_447d40(eax_6);

            if (eax_2)
            {
                eax_2 = sub_447d50(eax_6);

                if (eax_2)
                {
                    void* edx = *(a1 + 0x2f0);
                    *(a1 + 0x2f8) = *(a1 + 0x2fc);
                    *(a1 + 0x2fc) = 0x1e;
                    int32_t eax_9 = *(edx + 0x78);
                    *(a1 + 0x300) = eax_9;
                    return eax_9(a1 + 0x2ec, a1);
                }
            }
            break;
        }
        case 3:
        {
            void* ecx_1 = *(a1 + 0x2f0);
            *(a1 + 0x2f8) = *(a1 + 0x2fc);
            *(a1 + 0x2fc) = 0x1f;
            int32_t eax_12 = *(ecx_1 + 0x7c);
            *(a1 + 0x300) = eax_12;
            return eax_12(a1 + 0x2ec, a1);
            break;
        }
        case 4:
        {
            void* eax_14 = *(a1 + 0x2f0);
            *(a1 + 0x2f8) = *(a1 + 0x2fc);
            *(a1 + 0x2fc) = 0x20;
            int32_t eax_15 = *(eax_14 + 0x80);
            *(a1 + 0x300) = eax_15;
            return eax_15(a1 + 0x2ec, a1);
            break;
        }
        case 5:
        {
            void* edx_2 = *(a1 + 0x2f0);
            *(a1 + 0x2f8) = *(a1 + 0x2fc);
            *(a1 + 0x2fc) = 0x21;
            int32_t eax_17 = *(edx_2 + 0x84);
            *(a1 + 0x300) = eax_17;
            return eax_17(a1 + 0x2ec, a1);
            break;
        }
        case 6:
        {
            void* ecx_3 = *(a1 + 0x2f0);
            *(a1 + 0x2f8) = *(a1 + 0x2fc);
            *(a1 + 0x2fc) = 0x22;
            int32_t eax_20 = *(ecx_3 + 0x88);
            *(a1 + 0x300) = eax_20;
            return eax_20(a1 + 0x2ec, a1);
            break;
        }
        case 8:
        {
            int32_t eax_28 = sub_43f8a0(sub_4636e0(a1));

            if (!eax_28)
            {
                *(a1 + 0xd93) = 1;
                return eax_28;
            }

            *(a1 + 0xda0) = 1;
            return eax_28;
            break;
        }
        case 9:
        {
            *(a1 + 0xd78) = 1;
            break;
        }
        case 0xa:
        {
            *(a1 + 0xd90) = 1;
            break;
        }
        case 0xb:
        {
            void* eax_22 = *(a1 + 0x2f0);
            *(a1 + 0x2f8) = *(a1 + 0x2fc);
            *(a1 + 0x2fc) = 0x23;
            int32_t eax_23 = *(eax_22 + 0x8c);
            *(a1 + 0x300) = eax_23;
            return eax_23(a1 + 0x2ec, a1);
            break;
        }
        case 0xc:
        {
            void* edx_4 = *(a1 + 0x2f0);
            *(a1 + 0x2f8) = *(a1 + 0x2fc);
            *(a1 + 0x2fc) = 0x24;
            int32_t eax_25 = *(edx_4 + 0x90);
            *(a1 + 0x300) = eax_25;
            return eax_25(a1 + 0x2ec, a1);
            break;
        }
    }

    return eax_2;
}
