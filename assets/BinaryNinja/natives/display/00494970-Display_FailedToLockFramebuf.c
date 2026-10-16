#include "Display_FailedToLockFramebuf.h"
int32_t Display_FailedToLockFramebuf(void* a1)

{
    int32_t* valA = g_5ca100;
    int32_t v_a4 = 0x7c;
    int32_t valA1 = (*(*valA + 0x64))(valA, 0, &v_a4, 1, 0);
    void v_4a4;

    if (valA1)
    {
        Game_DataSymbolLoad(&v_4a4, "Failed to lock framebuffer.");
        int32_t v_4c0 = DDERR_GENERIC(valA1);
        void* v_4c4_1 = &v_4a4;
        Error_Show("%s\n\nDirectX error message: %s");

        while (true)
            /* nop */

        return;
    }

    int32_t v_4c;
    int32_t eflags;
    int32_t valA3;
    valA3 = __bsf_gprv_memv(v_4c);
    int32_t v_48;
    int32_t eflags_1;
    char valA5;
    valA5 = __bsf_gprv_memv(v_48);
    int32_t v_44;
    int32_t eflags_2;
    int32_t valA6;
    valA6 = __bsf_gprv_memv(v_44);
    int32_t eflags_3;
    int32_t valA7;
    valA7 = __bsr_gprv_memv(v_4c);
    int32_t eflags_4;
    char valA9;
    valA9 = __bsr_gprv_memv(v_48);
    int32_t eflags_5;
    int32_t valA10;
    valA10 = __bsr_gprv_memv(v_44);
    int32_t srcS3 = valA7 - valA3 + 1;
    int32_t* v_80;
    int32_t* dstD2 = v_80;
    int32_t ctxB2 = valA10 - valA6 + 1;
    void* valA14 = *(a1 + 0xc);
    int32_t v_24 = srcS3;
    int32_t v_28 = ctxB2;
    char v_58;

    if (!(v_58 & 0x40))
    {
        Error_Show("Invalid framebuffer format");

        while (true)
            /* nop */

        return;
    }

    int32_t v_50;
    int32_t v_9c;
    int32_t v_98;
    int32_t v_94;

    if (v_50 == 0x20)
    {
        a1 = nullptr;

        if (v_9c > 0)
        {
            int32_t objC7 = v_98;

            while (true)
            {
                int32_t tmpD3 = 0;

                if (objC7 > 0)
                {
                    do
                    {
                        int32_t srcS4 = *dstD2;
                        dstD2 = &dstD2[1];
                        *valA14 = srcS4 >> (valA6 & 0x1f) << ((8 - ctxB2) & 0x1f);
                        *(valA14 + 1) =
                            srcS4 >> (valA5 & 0x1f) << ((8 - (valA9 - valA5 + 1)) & 0x1f);
                        valA14 += 3;
                        tmpD3 += 1;
                        *(valA14 - 1) = srcS4 >> (valA3 & 0x1f) << ((8 - srcS3) & 0x1f);
                        objC7 = v_98;
                    } while (tmpD3 < objC7);

                    srcS3 = v_24;
                }

                a1 += 1;
                dstD2 += v_94 - (objC7 << 2);

                if (a1 >= v_9c)
                    break;

                ctxB2 = v_28;
            }
        }
    }
    else if (v_50 != 0x10)
    {
        Error_Show("Invalid framebuffer format");

        while (true)
            /* nop */
    }
    else
    {
        a1 = nullptr;

        if (v_9c > 0)
        {
            int32_t objC18 = v_98;

            while (true)
            {
                int32_t tmpD6 = 0;

                if (objC18 > 0)
                {
                    char v_10_3 = (8 - srcS3);

                    do
                    {
                        srcS3 = *dstD2;
                        dstD2 += 2;
                        *valA14 = srcS3 >> (valA6 & 0x1f) << ((8 - ctxB2) & 0x1f);
                        *(valA14 + 1) =
                            srcS3 >> (valA5 & 0x1f) << ((8 - (valA9 - valA5 + 1)) & 0x1f);
                        valA14 += 3;
                        tmpD6 += 1;
                        *(valA14 - 1) = srcS3 >> (valA3 & 0x1f) << (v_10_3 & 0x1f);
                        objC18 = v_98;
                    } while (tmpD6 < objC18);

                    srcS3 = v_24;
                }

                a1 += 1;
                dstD2 += v_94 - objC18 * 2;

                if (a1 >= v_9c)
                    break;

                ctxB2 = v_28;
            }
        }
    }
    int32_t* valA19 = g_5ca100;
    int32_t result = (*(*valA19 + 0x80))(valA19, 0);

    if (!result)
        return result;

    Game_DataSymbolLoad(&v_4a4, "Failed to unlock framebuffer.");
    int32_t v_4c0_1 = DDERR_GENERIC(result);
    void* v_4c4_2 = &v_4a4;
    Error_Show("%s\n\nDirectX error message: %s");

    while (true)
        /* nop */
}
