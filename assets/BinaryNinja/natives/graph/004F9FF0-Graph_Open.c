// Original IGI.EXE function: Graph_Open (VA 0x004F9FF0; static CFG gate PASS, CFG score 1.000).
#include "Graph_Open.h"
int32_t Graph_Open(void* a1 @ 0x8)

// Sig: void Graph_Open(uint32_t level,char* graph_str)
// Note: Open graph of level,Params: with str 'Graph4019.dat'
{
    void* __saved_edi_4 = a1;
    int32_t* valA = QFile_ReadWrite(__saved_edi_4, "r");

    if (!valA)
    {
        void* __saved_edi_1 = __saved_edi_4;
        return Warning_Show("Unable to open %s for reading");
    }

    void v_1c;
    void* v_14 = &v_1c;
    Resource_Unpack(valA, &a1, 4);
    void* arg_4;

    if (a1 != 0xffeeddcc)
    {
        Sys_ResolveSymbol_4(valA);
        Sys_ExecuteBytecode_4(valA, 0, 0);
        Script_SpawnNewTask_25(arg_4, &v_1c);
    }
    else
    {
        void* dstD1 = arg_4;
        void* v_10_1 = dstD1;
        int32_t v_c_1 = 0;
        int32_t v_8_1 = 0;

        if (!Sys_DispatchOpcode_4(valA))
        {
            int32_t i;

            do
            {
                int32_t v_20;
                Script_FormatString_26(&v_1c, &v_20);
                int32_t* valA6;
                uint32_t objC1;
                valA6 = Script_FormatString_24(v_20);

                if (!valA6)
                {
                    int32_t v_2c_5 = 2;
                    void* v_30_3 = &v_1c;
                    Script_ParseEnumInt32_25(objC1);
                }
                else
                {
                    Script_CallNativeHandler_26(&v_1c, &arg_4);
                    uint32_t v_4_1 = arg_4;
                    valA6[4](&v_14);
                }

                i = Sys_DispatchOpcode_4(valA);
            } while (!i);
        }

        int32_t v_2c_7 = 0;
        void* v_30_4 = dstD1;
    }
    Sys_ResolveSymbol_4(valA);
    return Sys_ReadFileBlock_4(valA);
}
