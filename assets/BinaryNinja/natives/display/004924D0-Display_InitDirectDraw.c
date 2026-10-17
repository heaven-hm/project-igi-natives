// Original IGI.EXE function: Display_InitDirectDraw (VA 0x004924D0; static CFG gate PASS, CFG score 1.000).
#include "Display_InitDirectDraw.h"

❓  void* const __stdcall Display_InitDirectDraw(int32_t* pThis @ 0x101a0)
// This function has unresolved stack usage. View graph of stack usage to resolve.

{
    Camera_UpdateTransform_5(0x1019c);
    int32_t* pThis_1 = pThis;
    int32_t ebp = 0;
    int32_t* ecx = pThis_1[1];
    int32_t arg_10 = 0;
    int32_t arg_18 = 0;
    int32_t arg_14 = 0;
    void arg_92c;
    void* arg_1c = &arg_92c;
    Display_CloseDevice_6(&arg_10);
    void* __return_addr_2 = pThis_1[2];
    void* __return_addr_1 = *ecx;
    __return_addr = __return_addr_1;

    if (__return_addr_1 >= __return_addr_2)
        __return_addr = __return_addr_2;

    void* const result = __return_addr;
    void* const result_1 = nullptr;

    if (result > 0)
    {
        void* ebx_1 = &arg_92c;

        while (true)
        {
            int32_t edx_2 = ebp + *pThis_1;
            void* edi_1 = ebx_1 + 0x80;
            int32_t i = 0xffffffff;

            while (i)
            {
                bool cond:2_1 = 0 != *edi_1;
                edi_1 += 1;
                i -= 1;

                if (!cond:2_1)
                    break;
            }

            int32_t ecx_2 = ~i;
            int32_t esi_2;
            int32_t edi_4;
            edi_4 = __builtin_memcpy(edx_2 + 0x80, edi_1 - ecx_2, ecx_2 & 0xfffffffc);
            __builtin_memcpy(edi_4, esi_2, ecx_2 & 3);
            void* edi_5 = ebx_1;
            int32_t i_1 = 0xffffffff;

            while (i_1)
            {
                bool cond:3_1 = 0 != *edi_5;
                edi_5 += 1;
                i_1 -= 1;

                if (!cond:3_1)
                    break;
            }

            int32_t ecx_6 = ~i_1;
            int32_t esi_4;
            int32_t edi_8;
            edi_8 = __builtin_memcpy(edx_2, edi_5 - ecx_6, ecx_6 & 0xfffffffc);
            __builtin_memcpy(edi_8, esi_4, ecx_6 & 3);
            int32_t* lplpDD;
            HRESULT eax_3 = Camera_ApplyPostProcess_30(*(ebx_1 + 0x100), &lplpDD, 0x534a50, 0);
            void arg_52c;

            if (eax_3)
            {
                Game_DataSymbolLoad(&arg_52c, "Couldn't create DirectDraw object");
                int32_t var_20_3 = DDERR_GENERIC(eax_3);
                void* var_24_2 = &arg_52c;
                Error_Show("%s\n\nDirectX error message: %s");

                while (true)
                    /* nop */
            }
            else
            {
                int32_t* lplpDD_1 = lplpDD;
                int32_t eax_4 = (*(*lplpDD_1 + 0x20))(lplpDD_1, eax_3, eax_3, ebx_1, sub_492670);

                if (eax_4)
                {
                    Game_DataSymbolLoad(&arg_52c, "Couldn't enumerate display modes.");
                    int32_t var_20_4 = DDERR_GENERIC(eax_4);
                    void* var_24_3 = &arg_52c;
                    Error_Show("%s\n\nDirectX error message: %s");

                    while (true)
                        /* nop */
                }
                else
                {
                    int32_t* lplpDD_2 = lplpDD;
                    (*(*lplpDD_2 + 8))(lplpDD_2);
                    result = result_1 + 1;
                    ebp += 0x100;
                    ebx_1 += 0x4f8;
                    result_1 = result;

                    if (result >= __return_addr)
                        break;

                    pThis_1 = pThis;
                }
            }
        }
    }

    int16_t x87control;
    Display_ClearSurfaces_16(x87control);
    return result;
}
