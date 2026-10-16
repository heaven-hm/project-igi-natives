#include "004AC367-Camera_UpdateTransform_24.h"
/* 0x004ac367 Camera_UpdateTransform_24 full linked: callers=1 callees=12 */
int32_t sub_4ac367(PSTR a1, int32_t a2, char a3 @ 0x10)

{
    SECURITY_ATTRIBUTES securityAttributes;
    securityAttributes.nLength = 0xc;
    securityAttributes.lpSecurityDescriptor = 0;
    char var_5;

    if (!(a2 & 0x80))
    {
        var_5 = 0;
        securityAttributes.bInheritHandle = 1;
    }
    else
    {
        securityAttributes.bInheritHandle = 0;
        var_5 = 0x10;
    }

    if (!(0x8000 & a2) && (*(&a2 + 1) & 0x40 || g_936258 != 0x8000))
        var_5 |= 0x80;

    int32_t eax_1 = a2 & 3;
    uint32_t dwDesiredAccess;

    if (!eax_1)
    {
        dwDesiredAccess = 0x80000000;
    label_4ac3f1:
        int32_t arg_c;
        int32_t eax_4 = arg_c;
        enum FILE_SHARE_MODE dwShareMode;

        if (eax_4 == 0x10)
        {
            dwShareMode = FILE_SHARE_NONE;
        label_4ac42c:
            int32_t ecx_1 = a2 & 0x700;
            enum FILE_CREATION_DISPOSITION dwCreationDisposition;

            if (ecx_1 <= 0x400)
            {
                if (ecx_1 == 0x400 || !ecx_1)
                {
                    dwCreationDisposition = OPEN_EXISTING;
                    goto label_4ac498;
                }

                if (ecx_1 == 0x100)
                {
                    dwCreationDisposition = OPEN_ALWAYS;
                    goto label_4ac498;
                }

                if (ecx_1 == 0x200)
                    goto label_4ac485;

                if (ecx_1 == 0x300)
                {
                    dwCreationDisposition = CREATE_ALWAYS;
                    goto label_4ac498;
                }

                g_936064 = 0x16;
                g_936068 = 0;
            }
            else if (ecx_1 == 0x500)
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

                int32_t result = sub_4abcad();

                if (result == 0xffffffff)
                {
                    g_936068 = 0;
                    g_936064 = 0x18;
                    return 0xffffffff;
                }

                HANDLE eax_6 = CreateFileA(a1, dwDesiredAccess, dwShareMode, &securityAttributes,
                    dwCreationDisposition, dwFlagsAndAttributes, nullptr);

                if (eax_6 == 0xffffffff)
                {
                    sub_4abc46(GetLastError());
                    return 0xffffffff;
                }

                enum FILE_TYPE eax_7 = GetFileType(eax_6);

                if (!eax_7)
                {
                    CloseHandle(eax_6);
                    sub_4abc46(GetLastError());
                    return 0xffffffff;
                }

                if (eax_7 == FILE_TYPE_CHAR)
                    var_5 |= 0x40;
                else if (eax_7 == FILE_TYPE_PIPE)
                    var_5 |= 8;

                sub_4abd42(result, eax_6);
                char eax_10 = var_5 | 1;
                *(&a1 + 3) = eax_10;
                int32_t esi_4 = (result & 0x1f) << 3;
                char temp3_1 = *(&a1 + 3) & 0x48;
                *(&a1 + 3) = temp3_1;
                *((&g_c32440)[result >> 5] + esi_4 + 4) = eax_10;

                if (temp3_1 || !(eax_10 & 0x80) || !(a2 & 2))
                {
                label_4ac60c:

                    if (!*(&a1 + 3) && a2 & 8)
                    {
                        int32_t eax_15 = (&g_c32440)[result >> 5];
                        *(eax_15 + esi_4 + 4) |= 0x20;
                    }

                    return result;
                }

                int32_t eax_11 = sub_4a6d7d(result, 0xffffffff, FILE_END);

                if (eax_11 != 0xffffffff)
                {
                    *(&arg_c + 3) = 0;

                    if (sub_4ac12d(result, (&arg_c + 3), 1) || *(&arg_c + 3) != 0x1a)
                    {
                    label_4ac5e9:

                        if (sub_4a6d7d(result, 0, FILE_BEGIN) != 0xffffffff)
                            goto label_4ac60c;

                        sub_4a6ab9(result);
                    }
                    else
                    {
                        if (sub_4ad912(result, eax_11) != 0xffffffff)
                            goto label_4ac5e9;

                        sub_4a6ab9(result);
                    }
                }
                else
                {
                    if (g_936068 == 0x83)
                        goto label_4ac60c;

                    sub_4a6ab9(result);
                }
            }
            else
            {
                if (ecx_1 == 0x600)
                {
                label_4ac485:
                    dwCreationDisposition = TRUNCATE_EXISTING;
                    goto label_4ac498;
                }

                if (ecx_1 == 0x700)
                    goto label_4ac48e;

                g_936064 = 0x16;
                g_936068 = 0;
            }
        }
        else
        {
            if (eax_4 == 0x20)
            {
                dwShareMode = FILE_SHARE_READ;
                goto label_4ac42c;
            }

            if (eax_4 == 0x30)
            {
                dwShareMode = FILE_SHARE_WRITE;
                goto label_4ac42c;
            }

            if (eax_4 == 0x40)
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
        if (eax_1 == 1)
        {
            dwDesiredAccess = 0x40000000;
            goto label_4ac3f1;
        }

        if (eax_1 == 2)
        {
            dwDesiredAccess = 0xc0000000;
            goto label_4ac3f1;
        }

        g_936064 = 0x16;
        g_936068 = 0;
    }
    return 0xffffffff;
}
