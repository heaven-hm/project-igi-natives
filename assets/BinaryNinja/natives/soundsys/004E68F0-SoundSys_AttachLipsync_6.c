#include "SoundSys_AttachLipsync_6.h"
int32_t SoundSys_AttachLipsync_6(int32_t* a1)

{
    int32_t ctxB;
    int32_t v_10 = ctxB;
    int32_t result;
    result = a1[2];

    if (!result)
    {
        void v_c;
        Sys_OpenFileStream_7(&v_c, 0xa, *a1);
        Terrain_ConnectGraphNode_5(&v_c);
        char* srcS1 = ".RES";
        char* valA1 = &v_c;
        int32_t valA3;
        char tmpD1;
        char ctxB1;

        while (true)
        {
            tmpD1 = *valA1;
            ctxB1 = *srcS1;
            bool c_1 = tmpD1 < ctxB1;

            if (tmpD1 == ctxB1)
            {
                if (!tmpD1)
                {
                    valA3 = 0;
                    break;
                }

                tmpD1 = valA1[1];
                ctxB1 = srcS1[1];
                c_1 = tmpD1 < ctxB1;

                if (tmpD1 == ctxB1)
                {
                    valA1 = &valA1[2];
                    srcS1 = &srcS1[2];

                    if (tmpD1)
                        continue;

                    valA3 = 0;
                    break;
                }
            }

            valA3 = valA1 - valA1 + 1;
            break;
        }

        if (!valA3)
            return SoundSys_StopSoundSample_6(*a1);

        char* srcS2 = ".WAV";
        char* valA6 = &v_c;

        while (true)
        {
            tmpD1 = *valA6;
            ctxB1 = *srcS2;
            bool c_3 = tmpD1 < ctxB1;

            if (tmpD1 == ctxB1)
            {
                if (!tmpD1)
                {
                    result = 0;
                    break;
                }

                tmpD1 = valA6[1];
                ctxB1 = srcS2[1];
                c_3 = tmpD1 < ctxB1;

                if (tmpD1 == ctxB1)
                {
                    valA6 = &valA6[2];
                    srcS2 = &srcS2[2];

                    if (tmpD1)
                        continue;

                    result = 0;
                    break;
                }
            }

            result = valA6 - valA6 + 1;
            break;
        }

        if (!result)
        {
            int32_t v_1c_3 = a1[1];
            return Display_SoundFileSNotValidFo(*a1);
        }
    }

    return result;
}
