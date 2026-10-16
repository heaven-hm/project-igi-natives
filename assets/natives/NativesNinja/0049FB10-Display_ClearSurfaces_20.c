#include "0049FB10-Display_ClearSurfaces_20.h"
/* 0x0049fb10 Display_ClearSurfaces_20 full linked: callers=0 callees=52 */
int32_t* sub_49fb10(int32_t* a1)

{
    int32_t* esi = a1;
    int32_t eax_1 = *(*esi + 0x20);

    if (!eax_1)
    {
        void* eax_35 = esi[1];
        *(*esi + 0x24) = sub_4b74d0(sub_4b7590(sub_4b7490(eax_35), 0x52443344), eax_35);
        void* eax_39 = esi[1];
        void* edi_2 = *(*esi + 0x24);
        *(edi_2 + 0x10) = sub_4b74d0(sub_4b7590(sub_4b7490(eax_39), 0x56525458), eax_39);
        void* eax_43 = esi[1];
        *(edi_2 + 0x14) = sub_4b74d0(sub_4b7590(sub_4b7490(eax_43), 0x52454e44), eax_43);
        sub_49b430(nullptr, *esi, *(edi_2 + 0xc));
    }
    else if (eax_1 == 1)
    {
        void* eax_22 = esi[1];
        *(*esi + 0x24) = sub_4b74d0(sub_4b7590(sub_4b7490(eax_22), 0x52443344), eax_22);
        void* edi_1 = *(*esi + 0x24);
        void* eax_27 = esi[1];
        *(edi_1 + 0x18) = sub_4b74d0(sub_4b7590(sub_4b7490(eax_27), 0x56525458), eax_27);
        void* eax_31 = esi[1];
        *(edi_1 + 0x1c) = sub_4b74d0(sub_4b7590(sub_4b7490(eax_31), 0x52454e44), eax_31);
    }
    else
    {
        void* edi;

        if (eax_1 == 3)
        {
            void* eax_5 = esi[1];
            *(*esi + 0x24) = sub_4b74d0(sub_4b7590(sub_4b7490(eax_5), 0x52443344), eax_5);
            void* eax_9 = esi[1];
            edi = *(*esi + 0x24);
            *(edi + 0x14) = sub_4b74d0(sub_4b7590(sub_4b7490(eax_9), 0x56525458), eax_9);
            void* eax_13 = esi[1];
            *(edi + 0x1c) = sub_4b74d0(sub_4b7590(sub_4b7490(eax_13), 0x52454e44), eax_13);
            void* eax_17 = esi[1];
            *(edi + 0x18) = sub_4b74d0(sub_4b7590(sub_4b7490(eax_17), 0x4c544d50), eax_17);
        }
        else
        {
            Error_Show("Mesh format not supported");

            while (true)
                /* nop */
        }

        sub_49b430(1, *esi, *(edi + 0x10));
    }

    if (!*(*esi + 0x28))
    {
        int32_t* ebx = sub_4b7490(esi[1]);
        int32_t* ebp = sub_4b7490(esi[1]);
        a1 = sub_4b7490(esi[1]);
        int32_t* var_8 = sub_4b7490(esi[1]);
        int32_t* result = sub_4b7590(sub_4b7490(esi[1]), 0x434d5348);
        *(*esi + 0x2c) = 0;

        if (result)
        {
            int32_t* result_1 = 2;
            *(*esi + 0x2c) = sub_4b74d0(result, esi[1]);
            void** edi_3 = *(*esi + 0x2c) + 0x10;
            bool cond:1_1;

            do
            {
                ebx = sub_4b7590(sub_4b7470(ebx), 0x43565458);
                ebp = sub_4b7590(sub_4b7470(ebp), 0x43464345);
                a1 = sub_4b7590(sub_4b7470(a1), 0x434d4154);
                var_8 = sub_4b7590(sub_4b7470(var_8), 0x43535048);
                edi_3[1] = sub_4b74d0(ebx, esi[1]);
                *edi_3 = sub_4b74d0(ebp, esi[1]);
                edi_3[2] = sub_4b74d0(a1, esi[1]);
                edi_3[3] = sub_4b74d0(var_8, esi[1]);
                edi_3 = &edi_3[8];
                result = result_1 - 1;
                cond:1_1 = result_1 != 1;
                result_1 = result;
            } while (cond:1_1);
        }

        return result;
    }

    Error_Show("Mesh format not supported");

    while (true)
        /* nop */
}
