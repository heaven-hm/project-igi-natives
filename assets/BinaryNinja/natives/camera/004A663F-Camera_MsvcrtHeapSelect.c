// IGI native provenance: Camera_MsvcrtHeapSelect - 0x004A663F - CFG score 100.0% (PASS; structural only); runtime behavior not verified.
// Evidence: 004A663F-Camera_MsvcrtHeapSelect.md; REA/Ghidra static record; catalog: assets/BinaryNinja/IGINatives_VERIFIED.json.
#include "Camera_MsvcrtHeapSelect.h"
int32_t Camera_MsvcrtHeapSelect()

{
    Camera_UpdateTransform_5(0x122c);
    int32_t context_val;
    int32_t item_8 = context_val;
    OSVERSIONINFOA item_9c;
    item_9c.szCSDVersion[0x7c] = &item_9c;
    item_9c.dwOSVersionInfoSize = 0x94;

    if (GetVersionExA(item_9c.szCSDVersion[0x7c]) && item_9c.dwPlatformId == 2
        && item_9c.dwMajorVersion >= 5)
    {
        item_9c.szCSDVersion[0x7c] = 1;
        item_9c.szCSDVersion[0x7d] = 0;
        item_9c.szCSDVersion[0x7e] = 0;
        item_9c.szCSDVersion[0x7f] = 0;
        return 1;
    }

    item_9c.szCSDVersion[0x7c] = 0x90;
    item_9c.szCSDVersion[0x7d] = 0x10;
    item_9c.szCSDVersion[0x7e] = 0;
    item_9c.szCSDVersion[0x7f] = 0;
    char item_1230;
    item_9c.szCSDVersion[0x78] = &item_1230;
    item_9c.szCSDVersion[0x74] = 0x3c;
    item_9c.szCSDVersion[0x75] = 0x43;
    item_9c.szCSDVersion[0x76] = 0x53;
    item_9c.szCSDVersion[0x77] = 0;

    if (GetEnvironmentVariableA(item_9c.szCSDVersion[0x74], item_9c.szCSDVersion[0x78],
        item_9c.szCSDVersion[0x7c]))
    {
        char* entity_1 = &item_1230;

        if (item_1230)
        {
            do
            {
                char data_2 = *entity_1;

                if (data_2 >= 0x61 && data_2 <= 0x7a)
                    *entity_1 = data_2 - 0x20;

                entity_1 = &entity_1[1];
            } while (*entity_1);
        }

        item_9c.szCSDVersion[0x7c] = 0x16;
        item_9c.szCSDVersion[0x7d] = 0;
        item_9c.szCSDVersion[0x7e] = 0;
        item_9c.szCSDVersion[0x7f] = 0;
        item_9c.szCSDVersion[0x78] = &item_1230;
        item_9c.szCSDVersion[0x74] = 0x24;
        item_9c.szCSDVersion[0x75] = 0x43;
        item_9c.szCSDVersion[0x76] = 0x53;
        item_9c.szCSDVersion[0x77] = 0;
        char* data_4;

        if (Camera_ApplyLineFilter_21(item_9c.szCSDVersion[0x74], item_9c.szCSDVersion[0x78],
            item_9c.szCSDVersion[0x7c]))
        {
            item_9c.szCSDVersion[0x7c] = 4;
            item_9c.szCSDVersion[0x7d] = 1;
            item_9c.szCSDVersion[0x7e] = 0;
            item_9c.szCSDVersion[0x7f] = 0;
            char item_1a0;
            item_9c.szCSDVersion[0x78] = &item_1a0;
            item_9c.szCSDVersion[0x74] = 0;
            item_9c.szCSDVersion[0x75] = 0;
            item_9c.szCSDVersion[0x76] = 0;
            item_9c.szCSDVersion[0x77] = 0;
            GetModuleFileNameA(item_9c.szCSDVersion[0x74], item_9c.szCSDVersion[0x78],
                item_9c.szCSDVersion[0x7c]);
            char* entity_2 = &item_1a0;

            if (item_1a0)
            {
                do
                {
                    char data_5 = *entity_2;

                    if (data_5 >= 0x61 && data_5 <= 0x7a)
                        *entity_2 = data_5 - 0x20;

                    entity_2 = &entity_2[1];
                } while (*entity_2);
            }

            item_9c.szCSDVersion[0x7c] = &item_1a0;
            item_9c.szCSDVersion[0x78] = &item_1230;
            data_4 = Camera_UpdateViewCone_6(item_9c.szCSDVersion[0x78], item_9c.szCSDVersion[0x7c]);
            int32_t entity_3;
            entity_3 = item_9c.szCSDVersion[0x7c];
            *(&entity_3 + 1) = item_9c.szCSDVersion[0x7d];
            *(&entity_3 + 2) = item_9c.szCSDVersion[0x7e];
            *(&entity_3 + 3) = item_9c.szCSDVersion[0x7f];
        }
        else
            data_4 = &item_1230;

        if (data_4)
        {
            item_9c.szCSDVersion[0x7c] = 0x2c;
            item_9c.szCSDVersion[0x7d] = 0;
            item_9c.szCSDVersion[0x7e] = 0;
            item_9c.szCSDVersion[0x7f] = 0;
            item_9c.szCSDVersion[0x78] = data_4;
            item_9c.szCSDVersion[0x79] = *(&data_4 + 1);
            item_9c.szCSDVersion[0x7a] = *(&data_4 + 2);
            item_9c.szCSDVersion[0x7b] = *(&data_4 + 3);
            void* data_6 = Camera_ApplyLineFilter_19(item_9c.szCSDVersion[0x7c]);
            int32_t entity_4;
            entity_4 = item_9c.szCSDVersion[0x7c];
            *(&entity_4 + 1) = item_9c.szCSDVersion[0x7d];
            *(&entity_4 + 2) = item_9c.szCSDVersion[0x7e];
            *(&entity_4 + 3) = item_9c.szCSDVersion[0x7f];

            if (data_6)
            {
                char* entity_5 = data_6 + 1;

                if (*(data_6 + 1))
                {
                    do
                    {
                        if (*entity_5 != 0x3b)
                            entity_5 = &entity_5[1];
                        else
                            *entity_5 = 0;
                    } while (*entity_5);
                }

                item_9c.szCSDVersion[0x7c] = 0xa;
                item_9c.szCSDVersion[0x7d] = 0;
                item_9c.szCSDVersion[0x7e] = 0;
                item_9c.szCSDVersion[0x7f] = 0;
                item_9c.szCSDVersion[0x78] = 0;
                item_9c.szCSDVersion[0x79] = 0;
                item_9c.szCSDVersion[0x7a] = 0;
                item_9c.szCSDVersion[0x7b] = 0;
                item_9c.szCSDVersion[0x74] = (data_6 + 1);
                item_9c.szCSDVersion[0x75] = *(&(data_6 + 1) + 1);
                item_9c.szCSDVersion[0x76] = *(&(data_6 + 1) + 2);
                item_9c.szCSDVersion[0x77] = *(&(data_6 + 1) + 3);
                int32_t result = Camera_UpdateTransform_21(item_9c.szCSDVersion[0x74], item_9c.szCSDVersion[0x78],
                    item_9c.szCSDVersion[0x7c]);

                if (result == 2 || result == 3 || result == 1)
                    return result;
            }
        }
    }

    item_9c.szCSDVersion[0x7c] = &item_8;
    HMODULE data_8 = Camera_ApplyWideScreen_8(item_9c.szCSDVersion[0x7c]);
    int32_t entity_6;
    entity_6 = item_9c.szCSDVersion[0x7c];
    *(&entity_6 + 1) = item_9c.szCSDVersion[0x7d];
    *(&entity_6 + 2) = item_9c.szCSDVersion[0x7e];
    *(&entity_6 + 3) = item_9c.szCSDVersion[0x7f];
    return data_8 - data_8 + 3;
}
