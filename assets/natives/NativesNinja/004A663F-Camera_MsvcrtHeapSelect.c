#include "004A663F-Camera_MsvcrtHeapSelect.h"
/* 0x004a663f Camera_MsvcrtHeapSelect full linked: callers=1 callees=9 */
int32_t sub_4a663f()

{
    sub_4a54a0(0x122c);
    int32_t ebx;
    int32_t var_8 = ebx;
    OSVERSIONINFOA var_9c;
    var_9c.szCSDVersion[0x7c] = &var_9c;
    var_9c.dwOSVersionInfoSize = 0x94;

    if (GetVersionExA(var_9c.szCSDVersion[0x7c]) && var_9c.dwPlatformId == 2
        && var_9c.dwMajorVersion >= 5)
    {
        var_9c.szCSDVersion[0x7c] = 1;
        var_9c.szCSDVersion[0x7d] = 0;
        var_9c.szCSDVersion[0x7e] = 0;
        var_9c.szCSDVersion[0x7f] = 0;
        return 1;
    }

    var_9c.szCSDVersion[0x7c] = 0x90;
    var_9c.szCSDVersion[0x7d] = 0x10;
    var_9c.szCSDVersion[0x7e] = 0;
    var_9c.szCSDVersion[0x7f] = 0;
    char var_1230;
    var_9c.szCSDVersion[0x78] = &var_1230;
    var_9c.szCSDVersion[0x74] = 0x3c;
    var_9c.szCSDVersion[0x75] = 0x43;
    var_9c.szCSDVersion[0x76] = 0x53;
    var_9c.szCSDVersion[0x77] = 0;

    if (GetEnvironmentVariableA(var_9c.szCSDVersion[0x74], var_9c.szCSDVersion[0x78],
        var_9c.szCSDVersion[0x7c]))
    {
        char* ecx_1 = &var_1230;

        if (var_1230)
        {
            do
            {
                char eax_2 = *ecx_1;

                if (eax_2 >= 0x61 && eax_2 <= 0x7a)
                    *ecx_1 = eax_2 - 0x20;

                ecx_1 = &ecx_1[1];
            } while (*ecx_1);
        }

        var_9c.szCSDVersion[0x7c] = 0x16;
        var_9c.szCSDVersion[0x7d] = 0;
        var_9c.szCSDVersion[0x7e] = 0;
        var_9c.szCSDVersion[0x7f] = 0;
        var_9c.szCSDVersion[0x78] = &var_1230;
        var_9c.szCSDVersion[0x74] = 0x24;
        var_9c.szCSDVersion[0x75] = 0x43;
        var_9c.szCSDVersion[0x76] = 0x53;
        var_9c.szCSDVersion[0x77] = 0;
        char* eax_4;

        if (sub_4aad10(var_9c.szCSDVersion[0x74], var_9c.szCSDVersion[0x78],
            var_9c.szCSDVersion[0x7c]))
        {
            var_9c.szCSDVersion[0x7c] = 4;
            var_9c.szCSDVersion[0x7d] = 1;
            var_9c.szCSDVersion[0x7e] = 0;
            var_9c.szCSDVersion[0x7f] = 0;
            char var_1a0;
            var_9c.szCSDVersion[0x78] = &var_1a0;
            var_9c.szCSDVersion[0x74] = 0;
            var_9c.szCSDVersion[0x75] = 0;
            var_9c.szCSDVersion[0x76] = 0;
            var_9c.szCSDVersion[0x77] = 0;
            GetModuleFileNameA(var_9c.szCSDVersion[0x74], var_9c.szCSDVersion[0x78],
                var_9c.szCSDVersion[0x7c]);
            char* ecx_2 = &var_1a0;

            if (var_1a0)
            {
                do
                {
                    char eax_5 = *ecx_2;

                    if (eax_5 >= 0x61 && eax_5 <= 0x7a)
                        *ecx_2 = eax_5 - 0x20;

                    ecx_2 = &ecx_2[1];
                } while (*ecx_2);
            }

            var_9c.szCSDVersion[0x7c] = &var_1a0;
            var_9c.szCSDVersion[0x78] = &var_1230;
            eax_4 = sub_4a5bb0(var_9c.szCSDVersion[0x78], var_9c.szCSDVersion[0x7c]);
            int32_t ecx_3;
            ecx_3 = var_9c.szCSDVersion[0x7c];
            *(&ecx_3 + 1) = var_9c.szCSDVersion[0x7d];
            *(&ecx_3 + 2) = var_9c.szCSDVersion[0x7e];
            *(&ecx_3 + 3) = var_9c.szCSDVersion[0x7f];
        }
        else
            eax_4 = &var_1230;

        if (eax_4)
        {
            var_9c.szCSDVersion[0x7c] = 0x2c;
            var_9c.szCSDVersion[0x7d] = 0;
            var_9c.szCSDVersion[0x7e] = 0;
            var_9c.szCSDVersion[0x7f] = 0;
            var_9c.szCSDVersion[0x78] = eax_4;
            var_9c.szCSDVersion[0x79] = *(&eax_4 + 1);
            var_9c.szCSDVersion[0x7a] = *(&eax_4 + 2);
            var_9c.szCSDVersion[0x7b] = *(&eax_4 + 3);
            void* eax_6 = sub_4aa0a0(var_9c.szCSDVersion[0x7c]);
            int32_t ecx_4;
            ecx_4 = var_9c.szCSDVersion[0x7c];
            *(&ecx_4 + 1) = var_9c.szCSDVersion[0x7d];
            *(&ecx_4 + 2) = var_9c.szCSDVersion[0x7e];
            *(&ecx_4 + 3) = var_9c.szCSDVersion[0x7f];

            if (eax_6)
            {
                char* ecx_5 = eax_6 + 1;

                if (*(eax_6 + 1))
                {
                    do
                    {
                        if (*ecx_5 != 0x3b)
                            ecx_5 = &ecx_5[1];
                        else
                            *ecx_5 = 0;
                    } while (*ecx_5);
                }

                var_9c.szCSDVersion[0x7c] = 0xa;
                var_9c.szCSDVersion[0x7d] = 0;
                var_9c.szCSDVersion[0x7e] = 0;
                var_9c.szCSDVersion[0x7f] = 0;
                var_9c.szCSDVersion[0x78] = 0;
                var_9c.szCSDVersion[0x79] = 0;
                var_9c.szCSDVersion[0x7a] = 0;
                var_9c.szCSDVersion[0x7b] = 0;
                var_9c.szCSDVersion[0x74] = (eax_6 + 1);
                var_9c.szCSDVersion[0x75] = *(&(eax_6 + 1) + 1);
                var_9c.szCSDVersion[0x76] = *(&(eax_6 + 1) + 2);
                var_9c.szCSDVersion[0x77] = *(&(eax_6 + 1) + 3);
                int32_t result = sub_4aaae5(var_9c.szCSDVersion[0x74], var_9c.szCSDVersion[0x78],
                    var_9c.szCSDVersion[0x7c]);

                if (result == 2 || result == 3 || result == 1)
                    return result;
            }
        }
    }

    var_9c.szCSDVersion[0x7c] = &var_8;
    HMODULE eax_8 = sub_4a6612(var_9c.szCSDVersion[0x7c]);
    int32_t ecx_6;
    ecx_6 = var_9c.szCSDVersion[0x7c];
    *(&ecx_6 + 1) = var_9c.szCSDVersion[0x7d];
    *(&ecx_6 + 2) = var_9c.szCSDVersion[0x7e];
    *(&ecx_6 + 3) = var_9c.szCSDVersion[0x7f];
    return eax_8 - eax_8 + 3;
}
