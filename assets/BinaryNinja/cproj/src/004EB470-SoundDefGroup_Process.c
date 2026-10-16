#include "gi_platform.h"
#include "004EB470-SoundDefGroup_Process.h"
int32_t SoundDefGroup_Process(void* a1, int32_t* a2)

{
    int32_t i = 0;

    if (a2[1] > 0)
    {
        do
        {
            void* dstD1 = &g_54da30;
            int32_t j = 0xffffffff;

            while (j)
            {
                bool cond_2_1 = 0 != *dstD1;
                dstD1 += 1;
                j -= 1;

                if (!cond_2_1)
                    break;
            }

            int32_t objC1 = ~j;
            int32_t dstD3 = *a2;
            int32_t j_1 = 0xffffffff;

            while (j_1)
            {
                bool cond_3_1 = 0 != *dstD3;
                dstD3 += 1;
                j_1 -= 1;

                if (!cond_3_1)
                    break;
            }

            int32_t srcS2;
            int32_t dstD5;
            dstD5 = memcpy(dstD3 - 1, dstD1 - objC1, objC1 & 0xfffffffc);
            i += 1;
            memcpy(dstD5, srcS2, objC1 & 3);
        } while (i < a2[1]);
    }

    void* v_414 = a1 + 0x22;
    char* v_418 = "DefineGroup";
    char v_400;
    Game_DataSymbolLoad(&v_400, "%s("%s"");
    void* dstD6 = &v_400;
    int32_t i_1 = 0xffffffff;

    while (i_1)
    {
        bool cond_0_1 = 0 != *dstD6;
        dstD6 += 1;
        i_1 -= 1;

        if (!cond_0_1)
            break;
    }

    int32_t objC6 = ~i_1;
    int32_t dstD8 = *a2;
    int32_t i_2 = 0xffffffff;

    while (i_2)
    {
        bool cond_1_1 = 0 != *dstD8;
        dstD8 += 1;
        i_2 -= 1;

        if (!cond_1_1)
            break;
    }

    int32_t srcS4;
    int32_t dstD10;
    dstD10 = memcpy(dstD8 - 1, dstD6 - objC6, objC6 & 0xfffffffc);
    memcpy(dstD10, srcS4, objC6 & 3);
    a2[1] += 1;
    int32_t* valA2 = (*(int32_t*)(uintptr_t)(a1 + 8));

    if (*valA2 && valA2)
    {
        void* dstD11 = &g_54db5c;
        int32_t i_3 = 0xffffffff;

        while (i_3)
        {
            bool cond_5_1 = 0 != *dstD11;
            dstD11 += 1;
            i_3 -= 1;

            if (!cond_5_1)
                break;
        }

        int32_t objC11 = ~i_3;
        int32_t dstD13 = *a2;
        int32_t i_4 = 0xffffffff;

        while (i_4)
        {
            bool cond_6_1 = 0 != *dstD13;
            dstD13 += 1;
            i_4 -= 1;

            if (!cond_6_1)
                break;
        }

        int32_t srcS6;
        int32_t dstD15;
        dstD15 = memcpy(dstD13 - 1, dstD11 - objC11, objC11 & 0xfffffffc);
        memcpy(dstD15, srcS6, objC11 & 3);
        int32_t* i_5 = (*(int32_t*)(uintptr_t)(a1 + 8));

        if (*i_5 && i_5)
        {
            int32_t objC16 = g_afa7e0;

            do
            {
                int32_t* tmpD4 = *i_5;
                void* valA6;

                if (!tmpD4)
                    valA6 = nullptr;
                else
                {
                    int32_t valA3 = *tmpD4;
                    int32_t valA4 = -(valA3);
                    valA6 = (valA4 - valA4) & tmpD4;
                }

                *((objC16 << 2) + &g_afa6e0) = valA6;
                g_afa7e0 = objC16 + 1;
                uint32_t valA8 = SoundSys_SetMasterVolume_5();
                int32_t objC18 = 0;
                objC18 = i_5[7];
                int32_t valA12 = *(((valA8 * 0x180 + objC18) << 2) + &g_a96ae0);

                if (valA12)
                    valA12(i_5, a2);

                objC16 = g_afa7e0 - 1;
                g_afa7e0 = objC16;
                i_5 = *((objC16 << 2) + &g_afa6e0);
            } while (i_5);
        }
    }

    int32_t valA13 = a2[1];
    a2[1] = valA13 - 1;
    char* dstD16;

    if (valA13 == 1)
        dstD16 = ");\r\n";
    else
    {
        void* objC20 = (*(int32_t*)(uintptr_t)(*(a1 + 0x14) + 0x10));
        int32_t valA15 = *(objC20 + 4);
        int32_t valA16 = -(valA15);

        dstD16 = a1 == ((valA16 - valA16) & objC20) ? &g_547a40 : "),\r\n";
    }

    int32_t i_6 = 0xffffffff;

    while (i_6)
    {
        bool cond_7_1 = 0 != *dstD16;
        dstD16 = &dstD16[1];
        i_6 -= 1;

        if (!cond_7_1)
            break;
    }

    int32_t objC21 = ~i_6;
    int32_t dstD18 = *a2;
    int32_t i_7 = 0xffffffff;

    while (i_7)
    {
        bool cond_8_1 = 0 != *dstD18;
        dstD18 += 1;
        i_7 -= 1;

        if (!cond_8_1)
            break;
    }

    int32_t srcS8;
    int32_t dstD20;
    dstD20 = memcpy(dstD18 - 1, dstD16 - objC21, objC21 & 0xfffffffc);
    memcpy(dstD20, srcS8, objC21 & 3);
    return 0;
}
