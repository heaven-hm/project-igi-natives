// IGI native provenance: Camera_UpdateTransform_24 - 0x004AC367 - CFG score 100.0% (PASS; structural only); runtime behavior not verified.
// Evidence: 004AC367-Camera_UpdateTransform_24.md; REA/Ghidra static record; catalog: assets/BinaryNinja/IGINatives_VERIFIED.json.
#include "Camera_UpdateTransform_24.h"
int32_t Camera_UpdateTransform_24(PSTR context, int32_t param_2, char param_3 )

{
    SECURITY_ATTRIBUTES securityAttributes;
    securityAttributes.nLength = 0xc;
    securityAttributes.lpSecurityDescriptor = 0;
    char item_5;

    if (!(param_2 & 0x80))
    {
        item_5 = 0;
        securityAttributes.bInheritHandle = 1;
    }
    else
    {
        securityAttributes.bInheritHandle = 0;
        item_5 = 0x10;
    }

    if (!(0x8000 & param_2) && (*(&param_2 + 1) & 0x40 || g_936258 != 0x8000))
        item_5 |= 0x80;

    int32_t data_1 = param_2 & 3;
    uint32_t dwDesiredAccess;

    if (!data_1)
    {
        dwDesiredAccess = 0x80000000;
    label_4ac3f1:
        int32_t arg_c;
        int32_t data_4 = arg_c;
        enum FILE_SHARE_MODE dwShareMode;

        if (data_4 == 0x10)
        {
            dwShareMode = FILE_SHARE_NONE;
        label_4ac42c:
            int32_t entity_1 = param_2 & 0x700;
            enum FILE_CREATION_DISPOSITION dwCreationDisposition;

            if (entity_1 <= 0x400)
            {
                if (entity_1 == 0x400 || !entity_1)
                {
                    dwCreationDisposition = OPEN_EXISTING;
                    goto label_4ac498;
                }

                if (entity_1 == 0x100)
                {
                    dwCreationDisposition = OPEN_ALWAYS;
                    goto label_4ac498;
                }

                if (entity_1 == 0x200)
                    goto label_4ac485;

                if (entity_1 == 0x300)
                {
                    dwCreationDisposition = CREATE_ALWAYS;
                    goto label_4ac498;
                }

                g_936064 = 0x16;
                g_936068 = 0;
            }
            else if (entity_1 == 0x500)
            {
            label_4ac48e:
                dwCreationDisposition = CREATE_NEW;
            label_4ac498:
                enum FILE_FLAGS_AND_ATTRIBUTES dwFlagsAndAttributes = FILE_ATTRIBUTE_NORMAL;

                if (0x100 & param_2 && !(~g_93606c & param_3 & 0x80))
                    dwFlagsAndAttributes = FILE_ATTRIBUTE_READONLY;

                if (param_2 & 0x40)
                {
                    dwFlagsAndAttributes |= FILE_FLAG_DELETE_ON_CLOSE;
                    *(&dwDesiredAccess + 2) |= 1;
                }

                if (*(&param_2 + 1) & 0x10)
                    dwFlagsAndAttributes |= FILE_ATTRIBUTE_TEMPORARY;

                if (param_2 & 0x20)
                    dwFlagsAndAttributes |= FILE_FLAG_SEQUENTIAL_SCAN;
                else if (param_2 & 0x10)
                    dwFlagsAndAttributes |= FILE_FLAG_RANDOM_ACCESS;

                int32_t result = Camera_ResetMatrix_22();

                if (result == 0xffffffff)
                {
                    g_936068 = 0;
                    g_936064 = 0x18;
                    return 0xffffffff;
                }

                HANDLE data_6 = CreateFileA(context, dwDesiredAccess, dwShareMode, &securityAttributes,
                    dwCreationDisposition, dwFlagsAndAttributes, nullptr);

                if (data_6 == 0xffffffff)
                {
                    Camera_UpdateViewCone_22(GetLastError());
                    return 0xffffffff;
                }

                enum FILE_TYPE data_7 = GetFileType(data_6);

                if (!data_7)
                {
                    CloseHandle(data_6);
                    Camera_UpdateViewCone_22(GetLastError());
                    return 0xffffffff;
                }

                if (data_7 == FILE_TYPE_CHAR)
                    item_5 |= 0x40;
                else if (data_7 == FILE_TYPE_PIPE)
                    item_5 |= 8;

                Camera_UpdateTransform_23(result, data_6);
                char data_10 = item_5 | 1;
                *(&context + 3) = data_10;
                int32_t source_4 = (result & 0x1f) << 3;
                char f3_1 = *(&context + 3) & 0x48;
                *(&context + 3) = f3_1;
                *((&g_c32440)[result >> 5] + source_4 + 4) = data_10;

                if (f3_1 || !(data_10 & 0x80) || !(param_2 & 2))
                {
                label_4ac60c:

                    if (!*(&context + 3) && param_2 & 8)
                    {
                        int32_t data_15 = (&g_c32440)[result >> 5];
                        *(data_15 + source_4 + 4) |= 0x20;
                    }

                    return result;
                }

                int32_t data_11 = Camera_ResetMatrix_9(result, 0xffffffff, FILE_END);

                if (data_11 != 0xffffffff)
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
                        if (Camera_UpdateViewCone_28(result, data_11) != 0xffffffff)
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
                if (entity_1 == 0x600)
                {
                label_4ac485:
                    dwCreationDisposition = TRUNCATE_EXISTING;
                    goto label_4ac498;
                }

                if (entity_1 == 0x700)
                    goto label_4ac48e;

                g_936064 = 0x16;
                g_936068 = 0;
            }
        }
        else
        {
            if (data_4 == 0x20)
            {
                dwShareMode = FILE_SHARE_READ;
                goto label_4ac42c;
            }

            if (data_4 == 0x30)
            {
                dwShareMode = FILE_SHARE_WRITE;
                goto label_4ac42c;
            }

            if (data_4 == 0x40)
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
        if (data_1 == 1)
        {
            dwDesiredAccess = 0x40000000;
            goto label_4ac3f1;
        }

        if (data_1 == 2)
        {
            dwDesiredAccess = 0xc0000000;
            goto label_4ac3f1;
        }

        g_936064 = 0x16;
        g_936068 = 0;
    }
    return 0xffffffff;
}
