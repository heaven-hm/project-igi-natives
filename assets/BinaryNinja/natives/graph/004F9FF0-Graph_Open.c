// Original IGI.EXE function: Graph_Open (VA 0x004F9FF0; static CFG gate PASS, CFG score 1.000).
#include "Graph_Open.h"
int32_t Graph_Open(void* context )

// Sig: void Graph_Open(uint32_t level,char* graph_str)
// Note: Open graph of level,Params: with str 'Graph4019.dat'
{
    void* saved_edi_4 = context;
    int32_t* data_val = QFile_ReadWrite(saved_edi_4, "r");

    if (!data_val)
    {
        void* saved_edi_1 = saved_edi_4;
        return Warning_Show("Unable to open %s for reading");
    }

    void item_1c;
    void* item_14 = &item_1c;
    Resource_Unpack(data_val, &context, 4);
    void* arg_4;

    if (context != 0xffeeddcc)
    {
        Sys_ResolveSymbol_4(data_val);
        Sys_ExecuteBytecode_4(data_val, 0, 0);
        Script_SpawnNewTask_25(arg_4, &item_1c);
    }
    else
    {
        void* dest_1 = arg_4;
        void* item_10_1 = dest_1;
        int32_t item_c_1 = 0;
        int32_t item_8_1 = 0;

        if (!Sys_DispatchOpcode_4(data_val))
        {
            int32_t i;

            do
            {
                int32_t item_20;
                Script_FormatString_26(&item_1c, &item_20);
                int32_t* data_6;
                uint32_t entity_1;
                data_6 = Script_FormatString_24(item_20);

                if (!data_6)
                {
                    int32_t item_2c_5 = 2;
                    void* item_30_3 = &item_1c;
                    Script_ParseEnumInt32_25(entity_1);
                }
                else
                {
                    Script_CallNativeHandler_26(&item_1c, &arg_4);
                    uint32_t item_4_1 = arg_4;
                    data_6[4](&item_14);
                }

                i = Sys_DispatchOpcode_4(data_val);
            } while (!i);
        }

        int32_t item_2c_7 = 0;
        void* item_30_4 = dest_1;
    }
    Sys_ResolveSymbol_4(data_val);
    return Sys_ReadFileBlock_4(data_val);
}
