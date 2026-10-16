#include "0050A050-Physics_CheckHullCollision_10.h"
/* 0x0050a050 Physics_CheckHullCollision_10 full linked: callers=0 callees=28 */
HANDLE sub_50a050(int32_t a1, int32_t a2, int32_t a3, int32_t a4)

{
    int32_t i = 0xffffffff;
    int32_t edi = a2;

    while (i)
    {
        bool cond:0_1 = 0 != *edi;
        edi += 1;
        i -= 1;

        if (!cond:0_1)
            break;
    }

    int32_t ecx = ~i;
    CHAR fileName[0x104];
    int32_t esi_1;
    int32_t edi_2;
    edi_2 = memcpy(&fileName, edi - ecx, ecx & 0xfffffffc);
    memcpy(edi_2, esi_1, ecx & 3);
    int32_t edi_3 = a2;
    int32_t i_1 = 0xffffffff;

    while (i_1)
    {
        bool cond:1_1 = 0 != *edi_3;
        edi_3 += 1;
        i_1 -= 1;

        if (!cond:1_1)
            break;
    }

    char* ebx_1;

    if (*(~i_1 - 1 + a2 - 1) == 0x2f)
        ebx_1 = &g_567c74;
    else
    {
        void* edi_4 = &g_54e9b8;
        int32_t i_2 = 0xffffffff;

        while (i_2)
        {
            bool cond:2_1 = 0 != *edi_4;
            edi_4 += 1;
            i_2 -= 1;

            if (!cond:2_1)
                break;
        }

        int32_t ecx_6 = ~i_2;
        CHAR (* edi_6)[0x104] = &fileName;
        int32_t i_3 = 0xffffffff;

        while (i_3)
        {
            bool cond:3_1 = 0 != *edi_6;
            edi_6 = &(*edi_6)[1];
            i_3 -= 1;

            if (!cond:3_1)
                break;
        }

        int32_t esi_3;
        int32_t edi_8;
        edi_8 = memcpy(edi_6 - 1, edi_4 - ecx_6, ecx_6 & 0xfffffffc);
        ebx_1 = &g_54e9b8;
        memcpy(edi_8, esi_3, ecx_6 & 3);
    }

    void* edi_9 = &g_54e9b4;
    int32_t i_4 = 0xffffffff;

    while (i_4)
    {
        bool cond:11_1 = 0 != *edi_9;
        edi_9 += 1;
        i_4 -= 1;

        if (!cond:11_1)
            break;
    }

    int32_t ecx_11 = ~i_4;
    CHAR (* edi_11)[0x104] = &fileName;
    int32_t i_5 = 0xffffffff;

    while (i_5)
    {
        bool cond:12_1 = 0 != *edi_11;
        edi_11 = &(*edi_11)[1];
        i_5 -= 1;

        if (!cond:12_1)
            break;
    }

    int32_t esi_5;
    int32_t edi_13;
    edi_13 = memcpy(edi_11 - 1, edi_9 - ecx_11, ecx_11 & 0xfffffffc);
    memcpy(edi_13, esi_5, ecx_11 & 3);
    WIN32_FIND_DATAA findFileData;
    HANDLE hFindFile = FindFirstFileA(&fileName, &findFileData);
    void var_348;
    void* var_354 = &var_348;

    if (hFindFile == 0xffffffff)
        return hFindFile;

    void* edi_14 = sub_4b1de0(a1);
    int32_t i_6 = 0xffffffff;

    while (i_6)
    {
        bool cond:4_1 = 0 != *edi_14;
        edi_14 += 1;
        i_6 -= 1;

        if (!cond:4_1)
            break;
    }

    int32_t ecx_16 = ~i_6;
    int32_t esi_7;
    int32_t edi_16;
    edi_16 = memcpy(&var_348, edi_14 - ecx_16, ecx_16 & 0xfffffffc);
    memcpy(edi_16, esi_7, ecx_16 & 3);
    int32_t i_7 = 0xffffffff;
    int32_t edi_17 = a2;

    while (i_7)
    {
        bool cond:5_1 = 0 != *edi_17;
        edi_17 += 1;
        i_7 -= 1;

        if (!cond:5_1)
            break;
    }

    int32_t ecx_20 = ~i_7;
    void* edi_19 = &var_348;
    int32_t i_8 = 0xffffffff;

    while (i_8)
    {
        bool cond:6_1 = 0 != *edi_19;
        edi_19 += 1;
        i_8 -= 1;

        if (!cond:6_1)
            break;
    }

    int32_t esi_9;
    int32_t edi_21;
    edi_21 = memcpy(edi_19 - 1, edi_17 - ecx_20, ecx_20 & 0xfffffffc);
    memcpy(edi_21, esi_9, ecx_20 & 3);
    char* edi_22 = ebx_1;
    int32_t i_9 = 0xffffffff;

    while (i_9)
    {
        bool cond:7_1 = 0 != *edi_22;
        edi_22 = &edi_22[1];
        i_9 -= 1;

        if (!cond:7_1)
            break;
    }

    int32_t ecx_25 = ~i_9;
    void* edi_24 = &var_348;
    int32_t i_10 = 0xffffffff;

    while (i_10)
    {
        bool cond:8_1 = 0 != *edi_24;
        edi_24 += 1;
        i_10 -= 1;

        if (!cond:8_1)
            break;
    }

    int32_t esi_11;
    int32_t edi_26;
    edi_26 = memcpy(edi_24 - 1, edi_22 - ecx_25, ecx_25 & 0xfffffffc);
    memcpy(edi_26, esi_11, ecx_25 & 3);
    var_218;
    void* edi_27 = &var_218;
    int32_t i_11 = 0xffffffff;

    while (i_11)
    {
        bool cond:9_1 = 0 != *edi_27;
        edi_27 += 1;
        i_11 -= 1;

        if (!cond:9_1)
            break;
    }

    int32_t ecx_30 = ~i_11;
    void* edi_29 = &var_348;
    int32_t i_12 = 0xffffffff;

    while (i_12)
    {
        bool cond:10_1 = 0 != *edi_29;
        edi_29 += 1;
        i_12 -= 1;

        if (!cond:10_1)
            break;
    }

    int32_t esi_13;
    int32_t edi_31;
    edi_31 = memcpy(edi_29 - 1, edi_27 - ecx_30, ecx_30 & 0xfffffffc);
    DWORD nFileSizeLow = findFileData.nFileSizeLow;
    memcpy(edi_31, esi_13, ecx_30 & 3);
    uint8_t var_34c_1 = findFileData.dwFileAttributes >> 4 & 1;

    if (findFileData.cFileName[0] != 0x2e)
        a3(&var_354, a4);

    if (FindNextFileA(hFindFile, &findFileData))
    {
        BOOL i_13;

        do
        {
            void* edi_32 = sub_4b1de0(a1);
            int32_t j = 0xffffffff;

            while (j)
            {
                bool cond:14_1 = 0 != *edi_32;
                edi_32 += 1;
                j -= 1;

                if (!cond:14_1)
                    break;
            }

            int32_t ecx_38 = ~j;
            int32_t esi_15;
            int32_t edi_34;
            edi_34 = memcpy(&var_348, edi_32 - ecx_38, ecx_38 & 0xfffffffc);
            memcpy(edi_34, esi_15, ecx_38 & 3);
            int32_t j_1 = 0xffffffff;
            int32_t edi_35 = a2;

            while (j_1)
            {
                bool cond:15_1 = 0 != *edi_35;
                edi_35 += 1;
                j_1 -= 1;

                if (!cond:15_1)
                    break;
            }

            int32_t ecx_42 = ~j_1;
            void* edi_37 = &var_348;
            int32_t j_2 = 0xffffffff;

            while (j_2)
            {
                bool cond:16_1 = 0 != *edi_37;
                edi_37 += 1;
                j_2 -= 1;

                if (!cond:16_1)
                    break;
            }

            int32_t esi_17;
            int32_t edi_39;
            edi_39 = memcpy(edi_37 - 1, edi_35 - ecx_42, ecx_42 & 0xfffffffc);
            memcpy(edi_39, esi_17, ecx_42 & 3);
            char* edi_40 = ebx_1;
            int32_t j_3 = 0xffffffff;

            while (j_3)
            {
                bool cond:17_1 = 0 != *edi_40;
                edi_40 = &edi_40[1];
                j_3 -= 1;

                if (!cond:17_1)
                    break;
            }

            int32_t ecx_47 = ~j_3;
            void* edi_42 = &var_348;
            int32_t j_4 = 0xffffffff;

            while (j_4)
            {
                bool cond:18_1 = 0 != *edi_42;
                edi_42 += 1;
                j_4 -= 1;

                if (!cond:18_1)
                    break;
            }

            int32_t esi_19;
            int32_t edi_44;
            edi_44 = memcpy(edi_42 - 1, edi_40 - ecx_47, ecx_47 & 0xfffffffc);
            memcpy(edi_44, esi_19, ecx_47 & 3);
            void* edi_45 = &var_218;
            int32_t j_5 = 0xffffffff;

            while (j_5)
            {
                bool cond:19_1 = 0 != *edi_45;
                edi_45 += 1;
                j_5 -= 1;

                if (!cond:19_1)
                    break;
            }

            int32_t ecx_52 = ~j_5;
            void* edi_47 = &var_348;
            int32_t j_6 = 0xffffffff;

            while (j_6)
            {
                bool cond:20_1 = 0 != *edi_47;
                edi_47 += 1;
                j_6 -= 1;

                if (!cond:20_1)
                    break;
            }

            int32_t esi_21;
            int32_t edi_49;
            edi_49 = memcpy(edi_47 - 1, edi_45 - ecx_52, ecx_52 & 0xfffffffc);
            DWORD nFileSizeLow_1 = findFileData.nFileSizeLow;
            memcpy(edi_49, esi_21, ecx_52 & 3);
            uint8_t var_34c_2 = findFileData.dwFileAttributes >> 4 & 1;

            if (findFileData.cFileName[0] != 0x2e)
                a3(&var_354, a4);

            i_13 = FindNextFileA(hFindFile, &findFileData);
        } while (i_13);
    }

    return FindClose(hFindFile);
}
