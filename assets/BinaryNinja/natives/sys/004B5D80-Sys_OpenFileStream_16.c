#include "Sys_OpenFileStream_16.h"
void* Sys_OpenFileStream_16(void* a1, int32_t a2, void* a3)

{
    void* v_210;

    if (Is_ResourceLoaded(a1, &v_210))
    {
        void* valA1 = v_210;

        if (*(valA1 + 0x24) == 4)
        {
            char* flagP1 = *(valA1 + 0x34);
            char v_200[0x200];
            char (* v_20c)[0x200] = &v_200;
            char v_204_1 = 0;
            char i = *flagP1;

            if (!i)
                return valA1;

            int32_t valA3;

            do
            {
                int32_t srcS1 = 0;
                int32_t dstD1 = 0;

                if (i)
                {
                    char* valA2 = flagP1;

                    do
                    {
                        if (i == 0x3b)
                        {
                            srcS1 += 1;
                            break;
                        }

                        srcS1 += 1;
                        *(&v_200 - flagP1 + valA2) = *valA2;
                        i = valA2[1];
                        valA2 = &valA2[1];
                        dstD1 += 1;
                    } while (i);
                }

                v_200[dstD1] = 0;
                void* v_214;
                valA3 = Is_ResourceLoaded(&v_200, &v_214);

                if (valA3)
                {
                    int32_t v_208_1 = *(v_214 + 0x28);
                    valA3 = a2(&v_20c, a3);
                }

                i = flagP1[srcS1];
                flagP1 = &flagP1[srcS1];
            } while (i);

            return valA3;
        }
    }

    return Sys_IllegalDeviceNameInP(a1, a2, a3);
}
