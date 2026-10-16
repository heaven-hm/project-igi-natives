#include "DynObj_CreateMagicObject_12.h"
int32_t* DynObj_CreateMagicObject_12(int32_t* a1, int32_t a2)

{
    int32_t* result = a1;
    int32_t objC2 = result[0x37a];
    int32_t tmpD1 = -(result[0x379]);
    int32_t tmpD2 = 0;
    double v_58 = -(result[0x378]);
    double v_50 = tmpD1;
    double v_48 = -(objC2);

    if (!a2)
    {
        result[0x37c] = 1;

        if (g_54876c)
        {
            int32_t ctxB;
            int32_t v_60_1 = ctxB;
            void* flagP1 = result[4];
            int32_t v_40;
            memcpy(&v_40, flagP1, 0x40);
            char v_10_1 = 0;
            int32_t i = 7;
            void v_34;
            int32_t* srcS2 = &v_34;
            int32_t* dstD1 = flagP1 + 0x28;

            do
            {
                int32_t objC6 = *dstD1;
                dstD1 -= 4;
                *srcS2 = objC6;
                srcS2 = &srcS2[1];
                char objC9 = v_10_1 | (*(flagP1 + 0x30) >> (tmpD2 & 0x1f) & 1) << (i & 0x1f);
                tmpD2 += 1;
                i -= 1;
                v_10_1 = objC9;
            } while (i > 0xffffffff);

            SoundSys_AttachLipsync_3();
            result = DynObj_ParseConfigFile_12(a1, &v_40, 0, &v_58);
            SoundSys_EvaluateTrigger_3();
        }
    }

    return result;
}
