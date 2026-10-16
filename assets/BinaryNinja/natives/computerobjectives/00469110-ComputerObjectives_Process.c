#include "ComputerObjectives_Process.h"
void* ComputerObjectives_Process(void* a1)

{
    int32_t valA = g_c28b44;
    int32_t objC = g_c28b48;
    int32_t v_170 = objC;
    int32_t v_174 = objC;
    Sys_CloseFileStream_14(0f, 0f, valA, objC, 0f, 0f, 0f, 0x40040000, 0xffffffff, 0x44079eb8);
    Qhash_Init(1);
    long double x87_r7_2 = valA;
    int32_t v_154_1;

    if (!AI_MoveToNode_29())
        v_154_1 = x87_r7_2 * 0.10000000000000001;
    else
        v_154_1 = x87_r7_2 * 0.14999999999999999;

    int32_t i = 0;
    int32_t i_2 = 0;
    int32_t ctxB = objC * 0.10000000000000001;
    int32_t* v_150_1 = a1 + 0x20;

    do
    {
        void* valA3;
        int32_t tmpD2;
        valA3 = AI_SelectTarget_24(i);

        if (valA3)
        {
            void* dstD1 = valA3;
            int32_t j = 0xffffffff;

            while (j)
            {
                bool cond_1_1 = 0 != *dstD1;
                dstD1 += 1;
                j -= 1;

                if (!cond_1_1)
                    break;
            }

            int32_t objC3 = ~j;
            void* objC4 = objC3 - 1;

            if (objC3 != 1)
            {
                void* valA4 = AI_MoveToNode_29();

                if (valA4)
                {
                    void* v_168_2 = objC4;
                    void* v_16c_1 = objC4;
                    valA4 = AI_SelectTarget_28(*v_150_1, v_154_1 - 0x22, ctxB + 2);
                }

                int32_t v_168_4 = i + 1;
                char* v_170_3 = "OBJECTIVE";
                int32_t* v_16c_3 = Resource_Load(valA4, tmpD2, objC4, nullptr);
                void v_100;
                void* objC6;
                int32_t tmpD5;
                objC6 = Game_DataSymbolLoad(&v_100, "%s %d: ");
                int32_t valA8 = *(valA3 + 0xc8);
                char* v_178_1;
                void v_140;

                if (!valA8)
                {
                    int32_t valA10 = *(valA3 + 0xc4);

                    if (!valA10)
                    {
                        char* v_16c_6 = "INCOMPLETE";
                        int32_t* v_170_6 = Resource_Load(valA10, tmpD5, objC6, nullptr);
                        void* v_174_5 = &g_53f730;
                        v_178_1 = &v_140;
                    }
                    else
                    {
                        char* v_16c_5 = "COMPLETE";
                        int32_t* v_170_5 = Resource_Load(valA10, tmpD5, objC6, nullptr);
                        void* v_174_4 = &g_53f730;
                        v_178_1 = &v_140;
                    }
                }
                else
                {
                    char* v_16c_4 = "FAILED";
                    int32_t* v_170_4 = Resource_Load(valA8, tmpD5, objC6, nullptr);
                    void* v_174_3 = &g_53f730;
                    v_178_1 = &v_140;
                }

                Game_DataSymbolLoad(v_178_1, "%s");
                void* dstD2 = &v_140;
                int32_t j_1 = 0xffffffff;

                while (j_1)
                {
                    bool cond_2_1 = 0 != *dstD2;
                    dstD2 += 1;
                    j_1 -= 1;

                    if (!cond_2_1)
                        break;
                }

                int32_t objC7 = ~j_1;
                void* dstD4 = &v_100;
                int32_t j_2 = 0xffffffff;

                while (j_2)
                {
                    bool cond_3_1 = 0 != *dstD4;
                    dstD4 += 1;
                    j_2 -= 1;

                    if (!cond_3_1)
                        break;
                }

                int32_t srcS2;
                int32_t dstD6;
                dstD6 = memcpy(dstD4 - 1, dstD2 - objC7, objC7 & 0xfffffffc);
                void* valA13 = g_bc2360;
                memcpy(dstD6, srcS2, objC7 & 3);
                int32_t v_174_6 = 0x78;
                int32_t valA15 = AI_TakeCover_26(v_154_1, ctxB, 0x44029eb8, 0x190, &v_100,
                    Menu_HandleInput_3(*(valA13 + 0x120), "font3.fnt"), 2);
                int32_t valA16;
                void* objC13;
                int32_t tmpD7;
                valA16 = Sys_CheckHeap_16(valA3);
                char* ctxB1;

                if (!valA16)
                {
                    void* v_168_5 = valA3;
                    Game_DataSymbolLoad(&v_100, "RM: %s");
                    ctxB1 = &v_100;
                }
                else
                {
                    void* v_16c_8 = valA3;
                    ctxB1 = Resource_Load(valA16, tmpD7, objC13, nullptr);
                }

                int32_t v_174_7 = 0x78;
                i = i_2;
                ctxB = AI_TakeCover_26(v_154_1, valA15, 0x44029eb8, 0x190, ctxB1,
                    Menu_HandleInput_3(*(g_bc2360 + 0x120), "font4.fnt"), 1) + 8;
            }
        }

        i += 1;
        i_2 = i;
        v_150_1 = &v_150_1[1];
    } while (i < 6);

    Qhash_Reset();
    void* result = a1;
    int32_t* i_1 = *(result + 8);

    if (*i_1 && i_1)
    {
        int32_t objC17 = g_afa7e0;

        do
        {
            int32_t* tmpD9 = *i_1;
            void* valA23;

            if (!tmpD9)
                valA23 = nullptr;
            else
            {
                int32_t valA20 = *tmpD9;
                int32_t valA21 = -(valA20);
                valA23 = (valA21 - valA21) & tmpD9;
            }

            *((objC17 << 2) + &g_afa6e0) = valA23;
            g_afa7e0 = objC17 + 1;
            int32_t valA24 = StatusScreen_GetEvent();
            int32_t tmpD10 = 0;
            tmpD10 = i_1[7];
            result = *(((valA24 * 0x180 + tmpD10) << 2) + &g_a96ae0);

            if (result)
                result = result(i_1);

            objC17 = g_afa7e0 - 1;
            g_afa7e0 = objC17;
            i_1 = *((objC17 << 2) + &g_afa6e0);
        } while (i_1);
    }

    return result;
}
