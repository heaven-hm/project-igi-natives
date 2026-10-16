#include "004F9FF0-Graph_Open.h"
/* 0x004f9ff0 Graph_Open full linked: callers=1 callees=15 */
int32_t Graph_Open(void* a1 @ 0x8)

// Sig: void Graph_Open(uint level,char* graph_str)
// Note: Open graph of level,Params: with str 'Graph4019.dat'
{
    void* __saved_edi_4 = a1;
    int32_t* eax = QFile_ReadWrite(__saved_edi_4, "r");

    if (!eax)
    {
        void* __saved_edi_1 = __saved_edi_4;
        return Warning_Show("Unable to open %s for reading");
    }

    void var_1c;
    void* var_14 = &var_1c;
    Resource_Unpack(eax, &a1, 4);
    void* arg_4;

    if (a1 != 0xffeeddcc)
    {
        sub_4b17c0(eax);
        sub_4b1730(eax, 0, 0);
        sub_4fa160(arg_4, &var_1c);
    }
    else
    {
        void* edi_1 = arg_4;
        void* var_10_1 = edi_1;
        int32_t var_c_1 = 0;
        int32_t var_8_1 = 0;

        if (!sub_4b1760(eax))
        {
            int32_t i;

            do
            {
                int32_t var_20;
                sub_4fa850(&var_1c, &var_20);
                int32_t* eax_6;
                uint32_t ecx_1;
                eax_6 = sub_4fa140(var_20);

                if (!eax_6)
                {
                    int32_t var_2c_5 = 2;
                    void* var_30_3 = &var_1c;
                    sub_4fa3b0(ecx_1);
                }
                else
                {
                    sub_4fa7e0(&var_1c, &arg_4);
                    uint32_t var_4_1 = arg_4;
                    eax_6[4](&var_14);
                }

                i = sub_4b1760(eax);
            } while (!i);
        }

        int32_t var_2c_7 = 0;
        void* var_30_4 = edi_1;
    }
    sub_4b17c0(eax);
    return sub_4b1690(eax);
}
