// Original IGI.EXE function: Camera_ApplyWideScreen_19 (VA 0x004AA19E; static CFG gate PASS, CFG score 0.917).
#include "Camera_ApplyWideScreen_19.h"
int32_t Camera_ApplyWideScreen_19(uint32_t context)

{
    uint32_t CodePage = Camera_ApplyPostProcess_19(context);

    if (CodePage != g_c32200)
    {
        if (!CodePage)
        {
        label_4aa321:
            Camera_ResetMatrix_19();
        }
        else
        {
            int32_t temp_1 = 0;
            int32_t* data_val = &g_5445b8;

            while (true)
            {
                if (*data_val == CodePage)
                {
                    void* i = nullptr;
                    int32_t source_2 = temp_1 * 0x30;
                    *memset(0xc32320, 0, 0x100) = 0;
                    char* context_1 = source_2 + 0x5445c8;

                    do
                    {
                        char* entity_2 = context_1;

                        if (*context_1)
                        {
                            do
                            {
                                char temp_4 = entity_2[1];

                                if (!temp_4)
                                    break;

                                uint32_t data_2 = *entity_2;
                                uint32_t dest_5 = temp_4;

                                if (data_2 <= dest_5)
                                {
                                    char temp_6 = *(i + 0x5445b0);

                                    do
                                    {
                                        *(data_2 + 0xc32321) |= temp_6;
                                        data_2 += 1;
                                    } while (data_2 <= dest_5);
                                }

                                entity_2 = &entity_2[2];
                            } while (*entity_2);
                        }

                        i += 1;
                        context_1 = &context_1[8];
                    } while (i < 4);

                    g_c3221c = 1;
                    g_c32200 = CodePage;
                    int32_t data_4 = Camera_UpdateViewCone_19(CodePage);
                    g_c32210 = *(source_2 + 0x5445bc);
                    int32_t* dest_6 = &g_c32214;
                    int32_t* source_4 = source_2 + 0x5445c0;
                    *dest_6 = *source_4;
                    g_c32424 = data_4;
                    dest_6[1] = source_4[1];
                    break;
                }

                data_val = &data_val[0xc];
                temp_1 += 1;

                if (data_val >= 0x5446a8)
                {
                    CPINFO cPInfo;

                    if (GetCPInfo(CodePage, &cPInfo) != 1)
                    {
                        if (!g_9361fc)
                            return 0xffffffff;

                        goto label_4aa321;
                    }

                    bool flag_2_1 = cPInfo.MaxCharSize <= 1;
                    g_c32200 = CodePage;
                    *memset(0xc32320, 0, 0x100) = 0;
                    g_c32424 = 0;

                    if (flag_2_1)
                        g_c3221c = 0;
                    else
                    {
                        if (cPInfo.LeadByte[0])
                        {
                            item_15;
                            char* entity_1 = &item_15;

                            do
                            {
                                char temp_3 = *entity_1;

                                if (!temp_3)
                                    break;

                                for (uint32_t i_1 = entity_1[0xffffffff]; i_1 <= temp_3; i_1 += 1)
                                    *(i_1 + 0xc32321) |= 4;

                                entity_1 = &entity_1[2];
                            } while (entity_1[0xffffffff]);
                        }

                        for (void* i_2 = 1; i_2 < 0xff; i_2 += 1)
                            *(i_2 + 0xc32321) |= 8;

                        g_c32424 = Camera_UpdateViewCone_19(CodePage);
                        g_c3221c = 1;
                    }

                    g_c32210 = 0;
                    int32_t* dest_9 = &g_c32214;
                    *dest_9 = 0;
                    dest_9[1] = 0;
                    goto label_4aa326;
                }
            }
        }

    label_4aa326:
        Camera_UpdateTransform_20();
    }

    return 0;
}
