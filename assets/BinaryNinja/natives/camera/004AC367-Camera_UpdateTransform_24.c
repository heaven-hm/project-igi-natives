// Original IGI.EXE function: Camera_UpdateTransform_24 (VA 0x004AC367; static CFG gate PASS, CFG score 1.000).
#include "Camera_UpdateTransform_24.h"
int32_t Camera_UpdateTransform_24(PSTR a1, int32_t a2, char a3 @ 0x10)

{
    SECURITY_ATTRIBUTES securityAttributes;
    securityAttributes.nLength = 0xc;
    securityAttributes.lpSecurityDescriptor = 0;
    char v_5;

    if (!(a2 & 0x80))
    {
        v_5 = 0;
        securityAttributes.bInheritHandle = 1;
    }
    else
    {
        securityAttributes.bInheritHandle = 0;
        v_5 = 0x10;
    }

    if (!(0x8000 & a2) && (*(&a2 + 1) & 0x40 || g_936258 != 0x8000))
        v_5 |= 0x80;

    int32_t valA1 = a2 & 3;
    uint32_t dwDesiredAccess;

    if (!valA1)
    {
        dwDesiredAccess = 0x80000000;
    label_4ac3f1:
        int32_t arg_c;
        int32_t valA4 = arg_c;
        enum FILE_SHARE_MODE dwShareMode;

        if (valA4 == 0x10)
        {
            dwShareMode = FILE_SHARE_NONE;
        label_4ac42c:
            int32_t objC1 = a2 & 0x700;
            enum FILE_CREATION_DISPOSITION dwCreationDisposition;

            if (objC1 <= 0x400)
            {
                if (objC1 == 0x400 || !objC1)
                {
                    dwCreationDisposition = OPEN_EXISTING;
                    goto label_4ac498;
                }

                if (objC1 == 0x100)
                {
                    dwCreationDisposition = OPEN_ALWAYS;
                    goto label_4ac498;
                }

                if (objC1 == 0x200)
                    goto label_4ac485;

                if (objC1 == 0x300)
                {
                    dwCreationDisposition = CREATE_ALWAYS;
                    goto label_4ac498;
                }

                g_936064 = 0x16;
                g_936068 = 0;
            }
            else if (objC1 == 0x500)
            {
            label_4ac48e:
                dwCreationDisposition = CREATE_NEW;
            label_4ac498:
                enum FILE_FLAGS_AND_ATTRIBUTES dwFlagsAndAttributes = FILE_ATTRIBUTE_NORMAL;

                if (0x100 & a2 && !(~g_93606c & a3 & 0x80))
                    dwFlagsAndAttributes = FILE_ATTRIBUTE_READONLY;

                if (a2 & 0x40)
                {
                    dwFlagsAndAttributes |= FILE_FLAG_DELETE_ON_CLOSE;
                    *(&dwDesiredAccess + 2) |= 1;
                }

                if (*(&a2 + 1) & 0x10)
                    dwFlagsAndAttributes |= FILE_ATTRIBUTE_TEMPORARY;

                if (a2 & 0x20)
                    dwFlagsAndAttributes |= FILE_FLAG_SEQUENTIAL_SCAN;
                else if (a2 & 0x10)
                    dwFlagsAndAttributes |= FILE_FLAG_RANDOM_ACCESS;

                int32_t result = Camera_ResetMatrix_22();

                if (result == 0xffffffff)
                {
                    g_936068 = 0;
                    g_936064 = 0x18;
                    return 0xffffffff;
                }

                HANDLE valA6 = CreateFileA(a1, dwDesiredAccess, dwShareMode, &securityAttributes,
                    dwCreationDisposition, dwFlagsAndAttributes, nullptr);

                if (valA6 == 0xffffffff)
                {
                    Camera_UpdateViewCone_22(GetLastError());
                    return 0xffffffff;
                }

                enum FILE_TYPE valA7 = GetFileType(valA6);

                if (!valA7)
                {
                    CloseHandle(valA6);
                    Camera_UpdateViewCone_22(GetLastError());
                    return 0xffffffff;
                }

                if (valA7 == FILE_TYPE_CHAR)
                    v_5 |= 0x40;
                else if (valA7 == FILE_TYPE_PIPE)
                    v_5 |= 8;

                Camera_UpdateTransform_23(result, valA6);
                char valA10 = v_5 | 1;
                *(&a1 + 3) = valA10;
                int32_t srcS4 = (result & 0x1f) << 3;
                char f3_1 = *(&a1 + 3) & 0x48;
                *(&a1 + 3) = f3_1;
                *((&g_c32440)[result >> 5] + srcS4 + 4) = valA10;

                if (f3_1 || !(valA10 & 0x80) || !(a2 & 2))
                {
                label_4ac60c:

                    if (!*(&a1 + 3) && a2 & 8)
                    {
                        int32_t valA15 = (&g_c32440)[result >> 5];
                        *(valA15 + srcS4 + 4) |= 0x20;
                    }

                    return result;
                }

                int32_t valA11 = Camera_ResetMatrix_9(result, 0xffffffff, FILE_END);

                if (valA11 != 0xffffffff)
                {
                    *(&arg_c + 3) = 0;

                    if (Camera_UpdateViewCone_23(result, (&arg_c + 3), 1) || *(&arg_c + 3) != 0x1a)
                    {
                    label_4ac5e9:

                        if (Camera_ResetMatrix_9(result, 0, FILE_BEGIN) != 0xffffffff)
                            goto label_4ac60c;

                        Camera_SetFieldOfView_9(result);
                    }
                    else
                    {
                        if (Camera_UpdateViewCone_28(result, valA11) != 0xffffffff)
                            goto label_4ac5e9;

                        Camera_SetFieldOfView_9(result);
                    }
                }
                else
                {
                    if (g_936068 == 0x83)
                        goto label_4ac60c;

                    Camera_SetFieldOfView_9(result);
                }
            }
            else
            {
                if (objC1 == 0x600)
                {
                label_4ac485:
                    dwCreationDisposition = TRUNCATE_EXISTING;
                    goto label_4ac498;
                }

                if (objC1 == 0x700)
                    goto label_4ac48e;

                g_936064 = 0x16;
                g_936068 = 0;
            }
        }
        else
        {
            if (valA4 == 0x20)
            {
                dwShareMode = FILE_SHARE_READ;
                goto label_4ac42c;
            }

            if (valA4 == 0x30)
            {
                dwShareMode = FILE_SHARE_WRITE;
                goto label_4ac42c;
            }

            if (valA4 == 0x40)
            {
                dwShareMode = FILE_SHARE_READ | FILE_SHARE_WRITE;
                goto label_4ac42c;
            }

            g_936064 = 0x16;
            g_936068 = 0;
        }
    }
    else
    {
        if (valA1 == 1)
        {
            dwDesiredAccess = 0x40000000;
            goto label_4ac3f1;
        }

        if (valA1 == 2)
        {
            dwDesiredAccess = 0xc0000000;
            goto label_4ac3f1;
        }

        g_936064 = 0x16;
        g_936068 = 0;
    }
    return 0xffffffff;
}
