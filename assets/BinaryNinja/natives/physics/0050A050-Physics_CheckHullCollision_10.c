// Original IGI.EXE function: Physics_CheckHullCollision_10 (VA 0x0050A050; static CFG gate FAIL, CFG score 0.738).
#include "Physics_CheckHullCollision_10.h"
HANDLE Physics_CheckHullCollision_10(int32_t a1, int32_t a2, int32_t a3, int32_t a4)

{
    int32_t i = 0xffffffff;
    int32_t dstD = a2;

    while (i)
    {
        bool cond_0_1 = 0 != *dstD;
        dstD += 1;
        i -= 1;

        if (!cond_0_1)
            break;
    }

    int32_t objC = ~i;
    CHAR fileName[0x104];
    int32_t srcS1;
    int32_t dstD2;
    dstD2 = memcpy(&fileName, dstD - objC, objC & 0xfffffffc);
    memcpy(dstD2, srcS1, objC & 3);
    int32_t dstD3 = a2;
    int32_t i_1 = 0xffffffff;

    while (i_1)
    {
        bool cond_1_1 = 0 != *dstD3;
        dstD3 += 1;
        i_1 -= 1;

        if (!cond_1_1)
            break;
    }

    char* ctxB1;

    if (*(~i_1 - 1 + a2 - 1) == 0x2f)
        ctxB1 = &g_567c74;
    else
    {
        void* dstD4 = &g_54e9b8;
        int32_t i_2 = 0xffffffff;

        while (i_2)
        {
            bool cond_2_1 = 0 != *dstD4;
            dstD4 += 1;
            i_2 -= 1;

            if (!cond_2_1)
                break;
        }

        int32_t objC6 = ~i_2;
        CHAR (* dstD6)[0x104] = &fileName;
        int32_t i_3 = 0xffffffff;

        while (i_3)
        {
            bool cond_3_1 = 0 != *dstD6;
            dstD6 = &(*dstD6)[1];
            i_3 -= 1;

            if (!cond_3_1)
                break;
        }

        int32_t srcS3;
        int32_t dstD8;
        dstD8 = memcpy(dstD6 - 1, dstD4 - objC6, objC6 & 0xfffffffc);
        ctxB1 = &g_54e9b8;
        memcpy(dstD8, srcS3, objC6 & 3);
    }

    void* dstD9 = &g_54e9b4;
    int32_t i_4 = 0xffffffff;

    while (i_4)
    {
        bool cond_11_1 = 0 != *dstD9;
        dstD9 += 1;
        i_4 -= 1;

        if (!cond_11_1)
            break;
    }

    int32_t objC11 = ~i_4;
    CHAR (* dstD11)[0x104] = &fileName;
    int32_t i_5 = 0xffffffff;

    while (i_5)
    {
        bool cond_12_1 = 0 != *dstD11;
        dstD11 = &(*dstD11)[1];
        i_5 -= 1;

        if (!cond_12_1)
            break;
    }

    int32_t srcS5;
    int32_t dstD13;
    dstD13 = memcpy(dstD11 - 1, dstD9 - objC11, objC11 & 0xfffffffc);
    memcpy(dstD13, srcS5, objC11 & 3);
    WIN32_FIND_DATAA findFileData;
    HANDLE hFindFile = FindFirstFileA(&fileName, &findFileData);
    void v_348;
    void* v_354 = &v_348;

    if (hFindFile == 0xffffffff)
        return hFindFile;

    void* dstD14 = Sys_CheckHeap_6(a1);
    int32_t i_6 = 0xffffffff;

    while (i_6)
    {
        bool cond_4_1 = 0 != *dstD14;
        dstD14 += 1;
        i_6 -= 1;

        if (!cond_4_1)
            break;
    }

    int32_t objC16 = ~i_6;
    int32_t srcS7;
    int32_t dstD16;
    dstD16 = memcpy(&v_348, dstD14 - objC16, objC16 & 0xfffffffc);
    memcpy(dstD16, srcS7, objC16 & 3);
    int32_t i_7 = 0xffffffff;
    int32_t dstD17 = a2;

    while (i_7)
    {
        bool cond_5_1 = 0 != *dstD17;
        dstD17 += 1;
        i_7 -= 1;

        if (!cond_5_1)
            break;
    }

    int32_t objC20 = ~i_7;
    void* dstD19 = &v_348;
    int32_t i_8 = 0xffffffff;

    while (i_8)
    {
        bool cond_6_1 = 0 != *dstD19;
        dstD19 += 1;
        i_8 -= 1;

        if (!cond_6_1)
            break;
    }

    int32_t srcS9;
    int32_t dstD21;
    dstD21 = memcpy(dstD19 - 1, dstD17 - objC20, objC20 & 0xfffffffc);
    memcpy(dstD21, srcS9, objC20 & 3);
    char* dstD22 = ctxB1;
    int32_t i_9 = 0xffffffff;

    while (i_9)
    {
        bool cond_7_1 = 0 != *dstD22;
        dstD22 = &dstD22[1];
        i_9 -= 1;

        if (!cond_7_1)
            break;
    }

    int32_t objC25 = ~i_9;
    void* dstD24 = &v_348;
    int32_t i_10 = 0xffffffff;

    while (i_10)
    {
        bool cond_8_1 = 0 != *dstD24;
        dstD24 += 1;
        i_10 -= 1;

        if (!cond_8_1)
            break;
    }

    int32_t srcS11;
    int32_t dstD26;
    dstD26 = memcpy(dstD24 - 1, dstD22 - objC25, objC25 & 0xfffffffc);
    memcpy(dstD26, srcS11, objC25 & 3);
    v_218;
    void* dstD27 = &v_218;
    int32_t i_11 = 0xffffffff;

    while (i_11)
    {
        bool cond_9_1 = 0 != *dstD27;
        dstD27 += 1;
        i_11 -= 1;

        if (!cond_9_1)
            break;
    }

    int32_t objC30 = ~i_11;
    void* dstD29 = &v_348;
    int32_t i_12 = 0xffffffff;

    while (i_12)
    {
        bool cond_10_1 = 0 != *dstD29;
        dstD29 += 1;
        i_12 -= 1;

        if (!cond_10_1)
            break;
    }

    int32_t srcS13;
    int32_t dstD31;
    dstD31 = memcpy(dstD29 - 1, dstD27 - objC30, objC30 & 0xfffffffc);
    DWORD nFileSizeLow = findFileData.nFileSizeLow;
    memcpy(dstD31, srcS13, objC30 & 3);
    uint8_t v_34c_1 = findFileData.dwFileAttributes >> 4 & 1;

    if (findFileData.cFileName[0] != 0x2e)
        a3(&v_354, a4);

    if (FindNextFileA(hFindFile, &findFileData))
    {
        BOOL i_13;

        do
        {
            void* dstD32 = Sys_CheckHeap_6(a1);
            int32_t j = 0xffffffff;

            while (j)
            {
                bool cond_14_1 = 0 != *dstD32;
                dstD32 += 1;
                j -= 1;

                if (!cond_14_1)
                    break;
            }

            int32_t objC38 = ~j;
            int32_t srcS15;
            int32_t dstD34;
            dstD34 = memcpy(&v_348, dstD32 - objC38, objC38 & 0xfffffffc);
            memcpy(dstD34, srcS15, objC38 & 3);
            int32_t j_1 = 0xffffffff;
            int32_t dstD35 = a2;

            while (j_1)
            {
                bool cond_15_1 = 0 != *dstD35;
                dstD35 += 1;
                j_1 -= 1;

                if (!cond_15_1)
                    break;
            }

            int32_t objC42 = ~j_1;
            void* dstD37 = &v_348;
            int32_t j_2 = 0xffffffff;

            while (j_2)
            {
                bool cond_16_1 = 0 != *dstD37;
                dstD37 += 1;
                j_2 -= 1;

                if (!cond_16_1)
                    break;
            }

            int32_t srcS17;
            int32_t dstD39;
            dstD39 = memcpy(dstD37 - 1, dstD35 - objC42, objC42 & 0xfffffffc);
            memcpy(dstD39, srcS17, objC42 & 3);
            char* dstD40 = ctxB1;
            int32_t j_3 = 0xffffffff;

            while (j_3)
            {
                bool cond_17_1 = 0 != *dstD40;
                dstD40 = &dstD40[1];
                j_3 -= 1;

                if (!cond_17_1)
                    break;
            }

            int32_t objC47 = ~j_3;
            void* dstD42 = &v_348;
            int32_t j_4 = 0xffffffff;

            while (j_4)
            {
                bool cond_18_1 = 0 != *dstD42;
                dstD42 += 1;
                j_4 -= 1;

                if (!cond_18_1)
                    break;
            }

            int32_t srcS19;
            int32_t dstD44;
            dstD44 = memcpy(dstD42 - 1, dstD40 - objC47, objC47 & 0xfffffffc);
            memcpy(dstD44, srcS19, objC47 & 3);
            void* dstD45 = &v_218;
            int32_t j_5 = 0xffffffff;

            while (j_5)
            {
                bool cond_19_1 = 0 != *dstD45;
                dstD45 += 1;
                j_5 -= 1;

                if (!cond_19_1)
                    break;
            }

            int32_t objC52 = ~j_5;
            void* dstD47 = &v_348;
            int32_t j_6 = 0xffffffff;

            while (j_6)
            {
                bool cond_20_1 = 0 != *dstD47;
                dstD47 += 1;
                j_6 -= 1;

                if (!cond_20_1)
                    break;
            }

            int32_t srcS21;
            int32_t dstD49;
            dstD49 = memcpy(dstD47 - 1, dstD45 - objC52, objC52 & 0xfffffffc);
            DWORD nFileSizeLow_1 = findFileData.nFileSizeLow;
            memcpy(dstD49, srcS21, objC52 & 3);
            uint8_t v_34c_2 = findFileData.dwFileAttributes >> 4 & 1;

            if (findFileData.cFileName[0] != 0x2e)
                a3(&v_354, a4);

            i_13 = FindNextFileA(hFindFile, &findFileData);
        } while (i_13);
    }

    return FindClose(hFindFile);
}
