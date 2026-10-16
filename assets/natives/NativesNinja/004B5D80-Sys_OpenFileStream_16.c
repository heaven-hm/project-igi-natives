#include "004B5D80-Sys_OpenFileStream_16.h"
/* 0x004b5d80 Sys_OpenFileStream_16 full linked: callers=4 callees=3 */
void* sub_4b5d80(void* a1, int32_t a2, void* a3)

{
    void* var_210;

    if (Is_ResourceLoaded(a1, &var_210))
    {
        void* eax_1 = var_210;

        if (*(eax_1 + 0x24) == 4)
        {
            char* ebp_1 = *(eax_1 + 0x34);
            char var_200[0x200];
            char (* var_20c)[0x200] = &var_200;
            char var_204_1 = 0;
            char i = *ebp_1;

            if (!i)
                return eax_1;

            int32_t eax_3;

            do
            {
                int32_t esi_1 = 0;
                int32_t edi_1 = 0;

                if (i)
                {
                    char* eax_2 = ebp_1;

                    do
                    {
                        if (i == 0x3b)
                        {
                            esi_1 += 1;
                            break;
                        }

                        esi_1 += 1;
                        *(&var_200 - ebp_1 + eax_2) = *eax_2;
                        i = eax_2[1];
                        eax_2 = &eax_2[1];
                        edi_1 += 1;
                    } while (i);
                }

                var_200[edi_1] = 0;
                void* var_214;
                eax_3 = Is_ResourceLoaded(&var_200, &var_214);

                if (eax_3)
                {
                    int32_t var_208_1 = *(var_214 + 0x28);
                    eax_3 = a2(&var_20c, a3);
                }

                i = ebp_1[esi_1];
                ebp_1 = &ebp_1[esi_1];
            } while (i);

            return eax_3;
        }
    }

    return sub_4b1420(a1, a2, a3);
}
