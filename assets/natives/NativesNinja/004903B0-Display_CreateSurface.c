#include "004903B0-Display_CreateSurface.h"
/* 0x004903b0 Display_CreateSurface full linked: callers=12 callees=15 */
int32_t sub_4903b0(void* a1)

{
    void* edi = a1;

    if (*(edi + 0x2a))
        sub_48f4f0(sub_490530);

    if (*(edi + 0x168))
    {
        int32_t i = 0;
        a1 = nullptr;

        if (*(edi + 0x1148) > 0)
        {
            int32_t* esi_1 = edi + 0x1ec;
            bool cond:1_1;

            do
            {
                sub_4b0d10(esi_1[4]);
                esi_1[4] = 0;

                if (*esi_1 > 0)
                {
                    int32_t* ebx_1 = &esi_1[0xd];

                    do
                    {
                        sub_4b6f30(*ebx_1);
                        i += 1;
                        ebx_1 = &ebx_1[1];
                    } while (i < *esi_1);

                    i = 0;
                }

                esi_1 = &esi_1[0x1f];
                cond:1_1 = a1 + 1 < *(edi + 0x1148);
                a1 += 1;
            } while (cond:1_1);
        }

        int32_t* esi_2 = edi + 0x1b8;
        int32_t i_2 = 4;
        int32_t i_1;

        do
        {
            int32_t* eax_7 = *esi_2;

            if (eax_7)
                Heap_FreeEntry(eax_7);

            esi_2 = &esi_2[1];
            i_1 = i_2;
            i_2 -= 1;
        } while (i_1 != 1);
        sub_4975f0(edi + 0x16c);
    }

    void* eax_8 = *(edi + 0x158);

    if (eax_8 && *(edi + 0x29))
    {
        sub_496e40(eax_8);
        sub_496650(*(edi + 0x158));
    }

    void* eax_10 = *(edi + 0x160);

    if (eax_10)
    {
        sub_4b0d10(eax_10);
        *(edi + 0x160) = 0;
    }

    void* eax_11 = *(edi + 0x164);

    if (eax_11)
    {
        sub_4b0d10(eax_11);
        *(edi + 0x164) = 0;
    }

    void* eax_12 = *(edi + 0x154);

    if (eax_12)
    {
        sub_4b0d10(eax_12);
        *(edi + 0x154) = 0;
    }

    HIC hic = *(edi + 0x15c);

    if (hic)
    {
        ICSendMessage(hic, 0x400e, 0, 0);
        ICClose(*(edi + 0x15c));
    }

    struct IAVIStream pavi = *(edi + 0x9c);

    if (pavi)
        AVIStreamRelease(pavi);

    struct IAVIFile pfile = *(edi + 0x2c);

    if (pfile)
        AVIFileRelease(pfile);

    __builtin_memset(edi, 0, 0x1150);
    return 0;
}
