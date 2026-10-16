#include "AI_RmS.h"
int32_t AI_RmS(int32_t* a1)

{
    double* valA = a1[3];
    double* objC = *a1;
    float v_120 = *valA - *objC;
    float v_11c = valA[1] - objC[1];
    float v_118 = valA[2] - objC[2];
    float* valA1 = a1[1];
    float v_114 = v_118 * valA1[6] + v_11c * valA1[3] + v_120 * *valA1;
    long double x87_r7_16 = v_118 * valA1[8] + v_11c * valA1[5];
    long double x87_r6_11 = v_120 * valA1[2];
    float v_11c_1 = v_118 * valA1[7] + v_11c * valA1[4] + v_120 * valA1[1];
    v_120 = v_114;
    float v_118_1 = x87_r7_16 + x87_r6_11;
    float v_108;
    AI_UpdateSensors_24(&v_108, &v_120, a1);
    int16_t result;
    float v_104;
    void v_100;

    if (AI_SelectTarget_27() != 1)
    {
        result = AI_SelectTarget_27();

        if (result > 1)
        {
            void* tmpD5 = a1[0xa];
            int32_t i = 0xffffffff;
            void* dstD2 = tmpD5;
            result = 0;

            while (i)
            {
                bool cond_1_1 = 0 != *dstD2;
                dstD2 += 1;
                i -= 1;

                if (!cond_1_1)
                    break;
            }

            if (~i != 1)
            {
                int32_t valA10;
                void* objC8;
                int32_t tmpD6;
                valA10 = Sys_CheckHeap_16(tmpD5);
                char* srcS2;

                if (!valA10)
                {
                    int32_t v_12c_4 = a1[0xa];
                    Game_DataSymbolLoad(&v_100, "RM: %s");
                    srcS2 = &v_100;
                }
                else
                {
                    int32_t valA11 = a1[0xa];
                    int32_t v_130_3 = valA11;
                    srcS2 = Resource_Load(valA11, tmpD6, objC8, nullptr);
                }

                void* valA14 = Menu_HandleInput_3(*(g_bc2360 + 0x120), "font4.fnt");
                v_114 = v_104;
                int32_t tmpD7 = v_114;
                int32_t v_138_2 = 0x80;
                v_114 = v_108;
                return AI_TakeCover_26(v_114, tmpD7, 0x44051eb8, 0x80, srcS2, valA14, 0);
            }
        }
    }
    else
    {
        void* tmpD1 = a1[9];
        int32_t i_1 = 0xffffffff;
        void* dstD1 = tmpD1;
        result = 0;

        while (i_1)
        {
            bool cond_0_1 = 0 != *dstD1;
            dstD1 += 1;
            i_1 -= 1;

            if (!cond_0_1)
                break;
        }

        if (~i_1 != 1)
        {
            int32_t valA4;
            void* objC4;
            valA4 = Sys_CheckHeap_16(tmpD1);
            int32_t* srcS1;

            if (!valA4)
            {
                int32_t v_12c_2 = a1[9];
                Game_DataSymbolLoad(&v_100, "RM: %s");
                srcS1 = &v_100;
            }
            else
            {
                int32_t tmpD2 = a1[9];
                int32_t v_130_1 = tmpD2;
                srcS1 = Resource_Load(valA4, tmpD2, objC4, nullptr);
            }

            void* valA8 = Menu_HandleInput_3(*(g_bc2360 + 0x120), "font4.fnt");
            v_114 = v_104;
            int32_t v_138_1 = 0x80;
            int32_t v_144_1 = v_114;
            v_114 = v_108;
            return AI_TakeCover_26(v_114, v_144_1, 0x44051eb8, 0x80, srcS1, valA8, 0);
        }
    }
    return result;
}
