// IGI native provenance: Sys_OpenFileStream_16 - 0x004B5D80 - CFG score 100.0% (PASS; structural only); runtime behavior not verified.
// Evidence: 004B5D80-Sys_OpenFileStream_16.md; REA/Ghidra static record; catalog: assets/BinaryNinja/IGINatives_VERIFIED.json.
#include "Sys_OpenFileStream_16.h"
void* Sys_OpenFileStream_16(void* context, int32_t param_2, void* param_3)

{
    void* item_210;

    if (Is_ResourceLoaded(context, &item_210))
    {
        void* data_1 = item_210;

        if (*(data_1 + 0x24) == 4)
        {
            char* flagP1 = *(data_1 + 0x34);
            char item_200[0x200];
            char (* item_20c)[0x200] = &item_200;
            char item_204_1 = 0;
            char i = *flagP1;

            if (!i)
                return data_1;

            int32_t data_3;

            do
            {
                int32_t source_1 = 0;
                int32_t dest_1 = 0;

                if (i)
                {
                    char* data_2 = flagP1;

                    do
                    {
                        if (i == 0x3b)
                        {
                            source_1 += 1;
                            break;
                        }

                        source_1 += 1;
                        *(&item_200 - flagP1 + data_2) = *data_2;
                        i = data_2[1];
                        data_2 = &data_2[1];
                        dest_1 += 1;
                    } while (i);
                }

                item_200[dest_1] = 0;
                void* item_214;
                data_3 = Is_ResourceLoaded(&item_200, &item_214);

                if (data_3)
                {
                    int32_t item_208_1 = *(item_214 + 0x28);
                    data_3 = param_2(&item_20c, param_3);
                }

                i = flagP1[source_1];
                flagP1 = &flagP1[source_1];
            } while (i);

            return data_3;
        }
    }

    return Sys_IllegalDeviceNameInP(context, param_2, param_3);
}
