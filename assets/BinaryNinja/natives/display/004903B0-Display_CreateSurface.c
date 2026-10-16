#include "Display_CreateSurface.h"
int32_t Display_CreateSurface(void* a1)

{
    void* dstD = a1;

    if (*(dstD + 0x2a))
        FX_UnableToRemoveWinpro(sub_490530);

    if (*(dstD + 0x168))
    {
        int32_t i = 0;
        a1 = nullptr;

        if (*(dstD + 0x1148) > 0)
        {
            int32_t* srcS1 = dstD + 0x1ec;
            bool cond_1_1;

            do
            {
                Sys_ExecuteBytecode_2(srcS1[4]);
                srcS1[4] = 0;

                if (*srcS1 > 0)
                {
                    int32_t* ctxB1 = &srcS1[0xd];

                    do
                    {
                        Sys_ReadFileBlock_18(*ctxB1);
                        i += 1;
                        ctxB1 = &ctxB1[1];
                    } while (i < *srcS1);

                    i = 0;
                }

                srcS1 = &srcS1[0x1f];
                cond_1_1 = a1 + 1 < *(dstD + 0x1148);
                a1 += 1;
            } while (cond_1_1);
        }

        int32_t* srcS2 = dstD + 0x1b8;
        int32_t i_2 = 4;
        int32_t i_1;

        do
        {
            int32_t* valA7 = *srcS2;

            if (valA7)
                Heap_FreeEntry(valA7);

            srcS2 = &srcS2[1];
            i_1 = i_2;
            i_2 -= 1;
        } while (i_1 != 1);
        Display_SwapBuffers_13(dstD + 0x16c);
    }

    void* valA8 = *(dstD + 0x158);

    if (valA8 && *(dstD + 0x29))
    {
        Display_SetDisplayMode_12(valA8);
        Display_CloseDevice_11(*(dstD + 0x158));
    }

    void* valA10 = *(dstD + 0x160);

    if (valA10)
    {
        Sys_ExecuteBytecode_2(valA10);
        *(dstD + 0x160) = 0;
    }

    void* valA11 = *(dstD + 0x164);

    if (valA11)
    {
        Sys_ExecuteBytecode_2(valA11);
        *(dstD + 0x164) = 0;
    }

    void* valA12 = *(dstD + 0x154);

    if (valA12)
    {
        Sys_ExecuteBytecode_2(valA12);
        *(dstD + 0x154) = 0;
    }

    HIC hic = *(dstD + 0x15c);

    if (hic)
    {
        ICSendMessage(hic, 0x400e, 0, 0);
        ICClose(*(dstD + 0x15c));
    }

    struct IAVIStream pavi = *(dstD + 0x9c);

    if (pavi)
        AVIStreamRelease(pavi);

    struct IAVIFile pfile = *(dstD + 0x2c);

    if (pfile)
        AVIFileRelease(pfile);

    __builtin_memset(dstD, 0, 0x1150);
    return 0;
}
