// Original IGI.EXE function: QFile_AliasResolve (VA 0x004B1020; static CFG gate FAIL, CFG score 0.778).
#include "QFile_AliasResolve.h"
int32_t QFile_AliasResolve(char* a1, void* a2, int32_t a3)

// Sig: int QFile_AliasResolve(char* outputPath, const char* inputPath, int
// maxDepth)
// Note: Resolves semicolon-separated QFile path aliases, copies the resolved
// path, and returns the alias depth. Ghidra/r2 CFG agreement: 17 basic blocks
// and 25 edges; see assets/IGI1-Native-Name-Evidence.json.
{
    int32_t objC;
    int32_t v_4_1 = objC;
    int32_t ctxB = 0;

    for (void* i = &g_942330; i < &g_9435b0; )
    {
        if (*(i + 0x90))
        {
            void* i_3 = i;
            int32_t j = 0xffffffff;

            while (j)
            {
                bool cond_0_1 = 0 != *i_3;
                i_3 += 1;
                j -= 1;

                if (!cond_0_1)
                    break;
            }

            if (!Camera_ApplyLineFilter_21(a2, i, ~j - 1))
            {
                int32_t ctxB2 = a3;
                char* srcS4 = ctxB * 0x94 + &g_942340;

                if (ctxB2)
                {
                    while (true)
                    {
                        char* v_1c_2 = srcS4;
                        void* valA4 = Camera_ApplyLineFilter_19(0x3b);

                        if (!valA4)
                        {
                            char* v_18_2 = ctxB * 0x94 + &g_942340;
                            Error_Show("Error in alias path: %s");

                            while (true)
                                /* nop */
                        }
                        else
                        {
                            srcS4 = valA4 + 1;
                            int32_t f0_1 = ctxB2;
                            ctxB2 -= 1;

                            if (f0_1 == 1)
                                break;
                        }
                    }
                }

                char* v_1c_3 = srcS4;
                int32_t result;

                if (!Camera_ApplyLineFilter_19(0x3b))
                    result = 0;
                else
                    result = a3 + 1;

                char j_1 = *srcS4;
                char* tmpD3 = a1;

                if (j_1 != 0x3b)
                {
                    while (j_1)
                    {
                        *tmpD3 = j_1;
                        j_1 = srcS4[1];
                        tmpD3 = &tmpD3[1];
                        srcS4 = &srcS4[1];

                        if (j_1 == 0x3b)
                            break;
                    }
                }

                int32_t j_2 = 0xffffffff;
                void* dstD9 = a2 + ~j - 1;

                while (j_2)
                {
                    bool cond_4_1 = 0 != *dstD9;
                    dstD9 += 1;
                    j_2 -= 1;

                    if (!cond_4_1)
                        break;
                }

                int32_t objC13 = ~j_2;
                int32_t srcS7;
                int32_t dstD12;
                dstD12 = memcpy(tmpD3, dstD9 - objC13, objC13 & 0xfffffffc);
                memcpy(dstD12, srcS7, objC13 & 3);
                char* dstD13 = a1;
                int32_t j_3 = 0xffffffff;

                while (j_3)
                {
                    bool cond_5_1 = 0 != *dstD13;
                    dstD13 = &dstD13[1];
                    j_3 -= 1;

                    if (!cond_5_1)
                        break;
                }

                int32_t objC17 = ~j_3;
                int32_t srcS9;
                int32_t dstD15;
                dstD15 = memcpy(&g_943a18, dstD13 - objC17, objC17 & 0xfffffffc);
                memcpy(dstD15, srcS9, objC17 & 3);
                return result;
            }
        }

        i += 0x94;
        ctxB += 1;
    }

    int32_t i_1 = 0xffffffff;
    void* dstD1 = a2;

    while (i_1)
    {
        bool cond_1_1 = 0 != *dstD1;
        dstD1 += 1;
        i_1 -= 1;

        if (!cond_1_1)
            break;
    }

    int32_t objC4 = ~i_1;
    int32_t srcS1;
    int32_t dstD4;
    dstD4 = memcpy(a1, dstD1 - objC4, objC4 & 0xfffffffc);
    memcpy(dstD4, srcS1, objC4 & 3);
    void* dstD5 = a2;
    int32_t i_2 = 0xffffffff;

    while (i_2)
    {
        bool cond_2_1 = 0 != *dstD5;
        dstD5 += 1;
        i_2 -= 1;

        if (!cond_2_1)
            break;
    }

    int32_t objC8 = ~i_2;
    int32_t srcS3;
    int32_t dstD7;
    dstD7 = memcpy(&g_943a18, dstD5 - objC8, objC8 & 0xfffffffc);
    memcpy(dstD7, srcS3, objC8 & 3);
    return 0;
}
