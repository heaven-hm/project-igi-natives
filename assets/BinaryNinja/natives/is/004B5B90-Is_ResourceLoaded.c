#include "Is_ResourceLoaded.h"
int32_t Is_ResourceLoaded(void* a1, void** a2)

// Sig: int Is_ResourceLoaded(char* resourcePath, char** outEntry)
// Note: Checks whether a resource path is ALREADY LOADED in the resource
// manager (walks path handling backslash 0x5C segments against the registry).
// Params: resourcePath = virtual path, outEntry = receives matching entry.
// RETURNS non-zero + fills outEntry when found. Resource_Load calls this first
// - use it to avoid double-loading.
{
    int32_t ctxB;
    int32_t v_108 = ctxB;
    int32_t srcS = 0;

    while (true)
    {
        void v_80;
        srcS = QFile_AliasResolve(&v_80, a1, srcS);
        int32_t v_104_1 = srcS;
        char i_1;
        Sys_ResolveSymbol_15(&i_1, &v_80);
        char i = i_1;

        if (i)
        {
            char* valA3 = &i_1;

            do
            {
                char objC2 = 0x2f;

                if (i != 0x5c)
                    objC2 = *valA3;

                *valA3 = objC2;
                i = valA3[1];
                valA3 = &valA3[1];
            } while (i);
        }

        uint32_t valA4 = Sys_CheckHeap_15(&i_1);
        void* objC3 = g_943e40;
        void* flagP1 = objC3;
        void* dstD1 = *(objC3 + 4);

        if (dstD1)
        {
            while (true)
            {
                if (*(flagP1 + 0x20) == valA4)
                {
                    char* srcS1 = &i_1;
                    char* objC4 = flagP1 + 0x38;
                    int32_t objC6;

                    while (true)
                    {
                        char ctxB1 = *objC4;
                        char f0_1 = *srcS1;
                        bool c_1 = ctxB1 < f0_1;

                        if (ctxB1 == f0_1)
                        {
                            if (!ctxB1)
                            {
                                objC6 = 0;
                                break;
                            }

                            ctxB1 = objC4[1];
                            char f3_1 = srcS1[1];
                            c_1 = ctxB1 < f3_1;

                            if (ctxB1 == f3_1)
                            {
                                objC4 = &objC4[2];
                                srcS1 = &srcS1[2];

                                if (ctxB1)
                                    continue;

                                objC6 = 0;
                                break;
                            }
                        }

                        objC6 = objC4 - objC4 + 1;
                        break;
                    }

                    if (!objC6)
                    {
                        if (a2)
                            *a2 = flagP1;

                        return 1;
                    }

                    srcS = v_104_1;
                }

                flagP1 = dstD1;
                dstD1 = *(dstD1 + 4);

                if (!dstD1)
                    break;
            }
        }

        if (!srcS)
            break;
    }

    return 0;
}
