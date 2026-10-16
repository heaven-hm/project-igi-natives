#include "Camera_MsvcrtHeapSelect.h"
int32_t Camera_MsvcrtHeapSelect()

{
    Camera_UpdateTransform_5(0x122c);
    int32_t ctxB;
    int32_t v_8 = ctxB;
    OSVERSIONINFOA v_9c;
    v_9c.szCSDVersion[0x7c] = &v_9c;
    v_9c.dwOSVersionInfoSize = 0x94;

    if (GetVersionExA(v_9c.szCSDVersion[0x7c]) && v_9c.dwPlatformId == 2
        && v_9c.dwMajorVersion >= 5)
    {
        v_9c.szCSDVersion[0x7c] = 1;
        v_9c.szCSDVersion[0x7d] = 0;
        v_9c.szCSDVersion[0x7e] = 0;
        v_9c.szCSDVersion[0x7f] = 0;
        return 1;
    }

    v_9c.szCSDVersion[0x7c] = 0x90;
    v_9c.szCSDVersion[0x7d] = 0x10;
    v_9c.szCSDVersion[0x7e] = 0;
    v_9c.szCSDVersion[0x7f] = 0;
    char v_1230;
    v_9c.szCSDVersion[0x78] = &v_1230;
    v_9c.szCSDVersion[0x74] = 0x3c;
    v_9c.szCSDVersion[0x75] = 0x43;
    v_9c.szCSDVersion[0x76] = 0x53;
    v_9c.szCSDVersion[0x77] = 0;

    if (GetEnvironmentVariableA(v_9c.szCSDVersion[0x74], v_9c.szCSDVersion[0x78],
        v_9c.szCSDVersion[0x7c]))
    {
        char* objC1 = &v_1230;

        if (v_1230)
        {
            do
            {
                char valA2 = *objC1;

                if (valA2 >= 0x61 && valA2 <= 0x7a)
                    *objC1 = valA2 - 0x20;

                objC1 = &objC1[1];
            } while (*objC1);
        }

        v_9c.szCSDVersion[0x7c] = 0x16;
        v_9c.szCSDVersion[0x7d] = 0;
        v_9c.szCSDVersion[0x7e] = 0;
        v_9c.szCSDVersion[0x7f] = 0;
        v_9c.szCSDVersion[0x78] = &v_1230;
        v_9c.szCSDVersion[0x74] = 0x24;
        v_9c.szCSDVersion[0x75] = 0x43;
        v_9c.szCSDVersion[0x76] = 0x53;
        v_9c.szCSDVersion[0x77] = 0;
        char* valA4;

        if (Camera_ApplyLineFilter_21(v_9c.szCSDVersion[0x74], v_9c.szCSDVersion[0x78],
            v_9c.szCSDVersion[0x7c]))
        {
            v_9c.szCSDVersion[0x7c] = 4;
            v_9c.szCSDVersion[0x7d] = 1;
            v_9c.szCSDVersion[0x7e] = 0;
            v_9c.szCSDVersion[0x7f] = 0;
            char v_1a0;
            v_9c.szCSDVersion[0x78] = &v_1a0;
            v_9c.szCSDVersion[0x74] = 0;
            v_9c.szCSDVersion[0x75] = 0;
            v_9c.szCSDVersion[0x76] = 0;
            v_9c.szCSDVersion[0x77] = 0;
            GetModuleFileNameA(v_9c.szCSDVersion[0x74], v_9c.szCSDVersion[0x78],
                v_9c.szCSDVersion[0x7c]);
            char* objC2 = &v_1a0;

            if (v_1a0)
            {
                do
                {
                    char valA5 = *objC2;

                    if (valA5 >= 0x61 && valA5 <= 0x7a)
                        *objC2 = valA5 - 0x20;

                    objC2 = &objC2[1];
                } while (*objC2);
            }

            v_9c.szCSDVersion[0x7c] = &v_1a0;
            v_9c.szCSDVersion[0x78] = &v_1230;
            valA4 = Camera_UpdateViewCone_6(v_9c.szCSDVersion[0x78], v_9c.szCSDVersion[0x7c]);
            int32_t objC3;
            objC3 = v_9c.szCSDVersion[0x7c];
            *(&objC3 + 1) = v_9c.szCSDVersion[0x7d];
            *(&objC3 + 2) = v_9c.szCSDVersion[0x7e];
            *(&objC3 + 3) = v_9c.szCSDVersion[0x7f];
        }
        else
            valA4 = &v_1230;

        if (valA4)
        {
            v_9c.szCSDVersion[0x7c] = 0x2c;
            v_9c.szCSDVersion[0x7d] = 0;
            v_9c.szCSDVersion[0x7e] = 0;
            v_9c.szCSDVersion[0x7f] = 0;
            v_9c.szCSDVersion[0x78] = valA4;
            v_9c.szCSDVersion[0x79] = *(&valA4 + 1);
            v_9c.szCSDVersion[0x7a] = *(&valA4 + 2);
            v_9c.szCSDVersion[0x7b] = *(&valA4 + 3);
            void* valA6 = Camera_ApplyLineFilter_19(v_9c.szCSDVersion[0x7c]);
            int32_t objC4;
            objC4 = v_9c.szCSDVersion[0x7c];
            *(&objC4 + 1) = v_9c.szCSDVersion[0x7d];
            *(&objC4 + 2) = v_9c.szCSDVersion[0x7e];
            *(&objC4 + 3) = v_9c.szCSDVersion[0x7f];

            if (valA6)
            {
                char* objC5 = valA6 + 1;

                if (*(valA6 + 1))
                {
                    do
                    {
                        if (*objC5 != 0x3b)
                            objC5 = &objC5[1];
                        else
                            *objC5 = 0;
                    } while (*objC5);
                }

                v_9c.szCSDVersion[0x7c] = 0xa;
                v_9c.szCSDVersion[0x7d] = 0;
                v_9c.szCSDVersion[0x7e] = 0;
                v_9c.szCSDVersion[0x7f] = 0;
                v_9c.szCSDVersion[0x78] = 0;
                v_9c.szCSDVersion[0x79] = 0;
                v_9c.szCSDVersion[0x7a] = 0;
                v_9c.szCSDVersion[0x7b] = 0;
                v_9c.szCSDVersion[0x74] = (valA6 + 1);
                v_9c.szCSDVersion[0x75] = *(&(valA6 + 1) + 1);
                v_9c.szCSDVersion[0x76] = *(&(valA6 + 1) + 2);
                v_9c.szCSDVersion[0x77] = *(&(valA6 + 1) + 3);
                int32_t result = Camera_UpdateTransform_21(v_9c.szCSDVersion[0x74], v_9c.szCSDVersion[0x78],
                    v_9c.szCSDVersion[0x7c]);

                if (result == 2 || result == 3 || result == 1)
                    return result;
            }
        }
    }

    v_9c.szCSDVersion[0x7c] = &v_8;
    HMODULE valA8 = Camera_ApplyWideScreen_8(v_9c.szCSDVersion[0x7c]);
    int32_t objC6;
    objC6 = v_9c.szCSDVersion[0x7c];
    *(&objC6 + 1) = v_9c.szCSDVersion[0x7d];
    *(&objC6 + 2) = v_9c.szCSDVersion[0x7e];
    *(&objC6 + 3) = v_9c.szCSDVersion[0x7f];
    return valA8 - valA8 + 3;
}
