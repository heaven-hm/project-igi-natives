// Original IGI.EXE function: TypeWriterBox_Process (VA 0x0041A4D0; static CFG gate PASS, CFG score 1.000).
#include "TypeWriterBox_Process.h"
int32_t TypeWriterBox_Process(void* context, int32_t param_2)

{
    int32_t i_3 = 4;
    void* data_val = *(context + 0x44);
    int32_t* source_val = context + 0x78;
    *(context + 0x58) = 0x539c48;
    *(context + 0x5c) = 0x82;
    int32_t* context_val = source_val;
    int32_t i;

    do
    {
        int32_t* data_1 = *context_val;

        if (data_1)
            Sys_ReadFileBlock_18(data_1);

        context_val = &context_val[1];
        i = i_3;
        i_3 -= 1;
    } while (i != 1);

    if (data_val)
    {
        char* item_10 = "font1.fnt";
        char* item_c_1 = "font2.fnt";
        char* item_8_1 = "font3.fnt";
        char* item_4_1 = "font4.fnt";
        char** context_1 = &item_10;
        int32_t i_4 = 4;
        int32_t i_1;

        do
        {
            void* data_3 = Menu_HandleInput_3(data_val, *context_1);

            if (data_3)
            {
                int32_t** data_4 = Sys_OpenFileStream_18(data_3, 0, 0, &g_567c74);
                *source_val = data_4;
                data_4[8] = 0;
            }

            context_1 = &context_1[1];
            source_val = &source_val[1];
            i_1 = i_4;
            i_4 -= 1;
        } while (i_1 != 1);
        int32_t i_2 = 0;

        if (*(context + 0x5c) > 0)
        {
            void* context_2 = nullptr;

            do
            {
                void* source_2 = context_2 + *(context + 0x58);

                if (!*(source_2 + 0x18))
                    *(source_2 + 0x20) = *(source_2 + 0x1c);
                else
                    *(source_2 + 0x20) = Menu_LocalSS(*(context + 0x44), *(source_2 + 0x1c));

                i_2 += 1;
                context_2 += 0x24;
            } while (i_2 < *(context + 0x5c));
        }
    }

    return (*(((Script_ParseEnumReal32_8() * 0x180 + Menu_PlayMusic_13()) << 2) + &g_a96ae0))(context, param_2);
}
