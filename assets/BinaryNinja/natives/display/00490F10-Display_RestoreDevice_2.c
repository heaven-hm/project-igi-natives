#include "Display_RestoreDevice_2.h"
int32_t Display_RestoreDevice_2(float a1)

{
    int32_t objC;
    int32_t v_4 = objC;
    int32_t* flagP = a1;
    int32_t result = flagP[8];

    if (result != flagP[7])
    {
        Display_CouldnTReadPixelForm_2(flagP);

        if (flagP[0x5a])
        {
            int32_t dstD1 = *flagP;
            Display_OpenDevice_14();
            Display_ClearSurfaces_13(&flagP[0x5b], 1);
            int32_t valA2 = flagP[0x453];

            if (valA2 < flagP[0x452])
            {
                int32_t tmpD3 = valA2 * 0x1f;
                void* srcS1 = &flagP[tmpD3];

                if (dstD1 <= flagP[tmpD3 + 0x7a] + flagP[tmpD3 + 0x78] + flagP[tmpD3 + 0x77])
                {
                    int32_t objC7 = *(srcS1 + 0x1dc);
                    a1 = 1f;

                    if (dstD1 >= objC7)
                    {
                        if (*(srcS1 + 0x1d4) != 0xffffffff)
                        {
                            int32_t valA5 = *(srcS1 + 0x1e4);
                            int32_t valA6 = valA5 + objC7;

                            if (dstD1 < valA6)
                                a1 = 1f - (valA6 - dstD1) / valA5;
                        }

                        if (*(srcS1 + 0x1d8) != 0xffffffff)
                        {
                            int32_t tmpD5 = *(srcS1 + 0x1e0);

                            if (dstD1 >= tmpD5 + objC7)
                            {
                                int32_t valA9 = *(srcS1 + 0x1e8);
                                a1 = (valA9 - dstD1 + tmpD5 + objC7) / valA9;
                            }
                        }

                        int32_t i = 0;

                        if (*(srcS1 + 0x1ec) > 0)
                        {
                            void** dstD2 = srcS1 + 0x220;

                            do
                            {
                                *(*dstD2 + 0x14) = a1 * *(srcS1 + 0x1f0) * 128f;
                                *(*dstD2 + 0x18) = a1 * *(srcS1 + 0x1f4) * 128f;
                                *(*dstD2 + 0x1c) = a1 * *(srcS1 + 0x1f8) * 128f;
                                void* valA15 = *dstD2;
                                *(valA15 + 0x24) |= 0x80000;
                                *(*dstD2 + 0x10) = a1;
                                Sys_CloseFileStream_18(*dstD2);
                                i += 1;
                                dstD2 = &dstD2[1];
                            } while (i < *(srcS1 + 0x1ec));
                        }
                    }
                }
                else
                    flagP[0x453] = valA2 + 1;
            }

            Display_SetGammaRamp_13();
        }

        result = Display_SetDisplayMode_4();
        flagP[8] = flagP[7];
    }

    result = 1;
    return result;
}
