#include "004BF8F0-Sys_UnknownBlockType.h"
/* 0x004bf8f0 Sys_UnknownBlockType full linked: callers=13 callees=25 */
void sub_4bf8f0(void* a1)

{
    if (!a1)
        return;

    switch (*(a1 + 8) - 1)
    {
        case 0:
        {
            int32_t* i_2 = *(a1 + 0xc);
            int32_t* i = *i_2;

            if (i)
            {
                do
                {
                    sub_4af960(i_2);
                    sub_4bf8f0(i_2);
                    i_2 = i;
                    i = *i;
                } while (i);

                sub_4b0d10(a1);
                return;
            }

            sub_4b0d10(a1);
            break;
        }
        case 1:
        {
            sub_4b9be0(*(a1 + 0xc));
            sub_4bf8f0(*(a1 + 0x10));
            int32_t* i_3 = *(a1 + 0x14);

            for (int32_t* i_1 = *i_3; i_1; i_1 = *i_1)
            {
                sub_4b9be0(i_3[3]);
                sub_4bf8f0(i_3[4]);
                sub_4af960(i_3);
                sub_4b0d10(i_3);
                i_3 = i_1;
            }

            void* eax_8 = *(a1 + 0x20);

            if (eax_8)
                sub_4bf8f0(eax_8);

            sub_4b0d10(a1);
            break;
        }
        case 3:
        {
            sub_4b9be0(*(a1 + 0xc));
            sub_4bf8f0(*(a1 + 0x10));
            sub_4b0d10(a1);
            break;
        }
        case 4:
        {
            sub_4b9be0(*(a1 + 0xc));
            sub_4bf8f0(*(a1 + 0x10));
            sub_4b0d10(a1);
            break;
        }
        case 5:
        {
            char* eax_12 = *(a1 + 0xc);

            if (eax_12)
                sub_4b9be0(eax_12);

            char* eax_13 = *(a1 + 0x10);

            if (eax_13)
                sub_4b9be0(eax_13);

            sub_4bf8f0(*(a1 + 0x18));
            char* eax_14 = *(a1 + 0x14);

            if (eax_14)
            {
                sub_4b9be0(eax_14);
                sub_4b0d10(a1);
                return;
            }

            sub_4b0d10(a1);
            break;
        }
        case 6:
        {
            char* eax_3 = *(a1 + 0xc);

            if (eax_3)
            {
                sub_4b9be0(eax_3);
                sub_4b0d10(a1);
                return;
            }

            sub_4b0d10(a1);
            break;
        }
        default:
        {
            Error_Show("Unknown block type.");

            while (true)
                /* nop */
        }
    }
}
