#include "0041A4D0-TypeWriterBox_Process.h"
/* 0x0041a4d0 TypeWriterBox_Process full linked: callers=0 callees=6 */
int32_t TypeWriterBox_Process(void* a1, int32_t a2)

{
    int32_t i_3 = 4;
    void* eax = *(a1 + 0x44);
    int32_t* esi = a1 + 0x78;
    *(a1 + 0x58) = 0x539c48;
    *(a1 + 0x5c) = 0x82;
    int32_t* ebx = esi;
    int32_t i;

    do
    {
        int32_t* eax_1 = *ebx;

        if (eax_1)
            sub_4b6f30(eax_1);

        ebx = &ebx[1];
        i = i_3;
        i_3 -= 1;
    } while (i != 1);

    if (eax)
    {
        char* var_10 = "font1.fnt";
        char* var_c_1 = "font2.fnt";
        char* var_8_1 = "font3.fnt";
        char* var_4_1 = "font4.fnt";
        char** ebx_1 = &var_10;
        int32_t i_4 = 4;
        int32_t i_1;

        do
        {
            void* eax_3 = Menu_HandleInput_3(eax, *ebx_1);

            if (eax_3)
            {
                int32_t** eax_4 = sub_4b6ec0(eax_3, 0, 0, &g_567c74);
                *esi = eax_4;
                eax_4[8] = 0;
            }

            ebx_1 = &ebx_1[1];
            esi = &esi[1];
            i_1 = i_4;
            i_4 -= 1;
        } while (i_1 != 1);
        int32_t i_2 = 0;

        if (*(a1 + 0x5c) > 0)
        {
            void* ebx_2 = nullptr;

            do
            {
                void* esi_2 = ebx_2 + *(a1 + 0x58);

                if (!*(esi_2 + 0x18))
                    *(esi_2 + 0x20) = *(esi_2 + 0x1c);
                else
                    *(esi_2 + 0x20) = Menu_LocalSS(*(a1 + 0x44), *(esi_2 + 0x1c));

                i_2 += 1;
                ebx_2 += 0x24;
            } while (i_2 < *(a1 + 0x5c));
        }
    }

    return (*(((sub_4f1a70() * 0x180 + Menu_PlayMusic_13()) << 2) + &g_a96ae0))(a1, a2);
}
