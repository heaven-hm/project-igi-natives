// Original IGI.EXE function: Display_CreateSurface (VA 0x004903B0; static CFG gate PASS, CFG score 0.978).
#include "Display_CreateSurface.h"
int32_t Display_CreateSurface(void* context)

{
    void* dest_val = context;

    if (*(dest_val + 0x2a))
        FX_UnableToRemoveWinpro(sub_490530);

    if (*(dest_val + 0x168))
    {
        int32_t i = 0;
        context = nullptr;

        if (*(dest_val + 0x1148) > 0)
        {
            int32_t* source_1 = dest_val + 0x1ec;
            bool flag_1_1;

            do
            {
                Sys_ExecuteBytecode_2(source_1[4]);
                source_1[4] = 0;

                if (*source_1 > 0)
                {
                    int32_t* context_1 = &source_1[0xd];

                    do
                    {
                        Sys_ReadFileBlock_18(*context_1);
                        i += 1;
                        context_1 = &context_1[1];
                    } while (i < *source_1);

                    i = 0;
                }

                source_1 = &source_1[0x1f];
                flag_1_1 = context + 1 < *(dest_val + 0x1148);
                context += 1;
            } while (flag_1_1);
        }

        int32_t* source_2 = dest_val + 0x1b8;
        int32_t i_2 = 4;
        int32_t i_1;

        do
        {
            int32_t* data_7 = *source_2;

            if (data_7)
                Heap_FreeEntry(data_7);

            source_2 = &source_2[1];
            i_1 = i_2;
            i_2 -= 1;
        } while (i_1 != 1);
        Display_SwapBuffers_13(dest_val + 0x16c);
    }

    void* data_8 = *(dest_val + 0x158);

    if (data_8 && *(dest_val + 0x29))
    {
        Display_SetDisplayMode_12(data_8);
        Display_CloseDevice_11(*(dest_val + 0x158));
    }

    void* data_10 = *(dest_val + 0x160);

    if (data_10)
    {
        Sys_ExecuteBytecode_2(data_10);
        *(dest_val + 0x160) = 0;
    }

    void* data_11 = *(dest_val + 0x164);

    if (data_11)
    {
        Sys_ExecuteBytecode_2(data_11);
        *(dest_val + 0x164) = 0;
    }

    void* data_12 = *(dest_val + 0x154);

    if (data_12)
    {
        Sys_ExecuteBytecode_2(data_12);
        *(dest_val + 0x154) = 0;
    }

    HIC hic = *(dest_val + 0x15c);

    if (hic)
    {
        ICSendMessage(hic, 0x400e, 0, 0);
        ICClose(*(dest_val + 0x15c));
    }

    struct IAVIStream pavi = *(dest_val + 0x9c);

    if (pavi)
        AVIStreamRelease(pavi);

    struct IAVIFile pfile = *(dest_val + 0x2c);

    if (pfile)
        AVIFileRelease(pfile);

    memset(dest_val, 0, 0x1150);
    return 0;
}
