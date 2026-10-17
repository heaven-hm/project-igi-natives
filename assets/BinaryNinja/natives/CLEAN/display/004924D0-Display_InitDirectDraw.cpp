// IGI native provenance: Display_InitDirectDraw - 0x004924D0 - CFG score 100.0% (PASS; structural only); runtime behavior not verified.
// Evidence: 004924D0-Display_InitDirectDraw.md; Binary Ninja/Radare2 CFG record; catalog: assets/BinaryNinja/IGINatives_VERIFIED.json.
#include "Display_InitDirectDraw.h"

❓  void* const __stdcall Display_InitDirectDraw(int32_t* pThis )
// This function has unresolved stack usage. View graph of stack usage to resolve.

{
    Camera_UpdateTransform_5(0x1019c);
    int32_t* pThis_1 = pThis;
    int32_t frame_ptr = 0;
    int32_t* counter_val = pThis_1[1];
    int32_t arg_10 = 0;
    int32_t arg_18 = 0;
    int32_t arg_14 = 0;
    void arg_92c;
    void* arg_1c = &arg_92c;
    Display_CloseDevice_6(&arg_10);
    void* return_addr_2 = pThis_1[2];
    void* return_addr_1 = *counter_val;
    return_addr = return_addr_1;

    if (return_addr_1 >= return_addr_2)
        return_addr = return_addr_2;

    void* const result = return_addr;
    void* const result_1 = nullptr;

    if (result > 0)
    {
        void* base_ptr_1 = &arg_92c;

        while (true)
        {
            int32_t scratch_val_2 = frame_ptr + *pThis_1;
            void* dest_ptr_1 = base_ptr_1 + 0x80;
            int32_t i = 0xffffffff;

            while (i)
            {
                bool cond:2_1 = 0 != *dest_ptr_1;
                dest_ptr_1 += 1;
                i -= 1;

                if (!cond:2_1)
                    break;
            }

            int32_t counter_val_2 = ~i;
            int32_t source_ptr_2;
            int32_t dest_ptr_4;
            dest_ptr_4 = memcpy(scratch_val_2 + 0x80, dest_ptr_1 - counter_val_2, counter_val_2 & 0xfffffffc);
            memcpy(dest_ptr_4, source_ptr_2, counter_val_2 & 3);
            void* dest_ptr_5 = base_ptr_1;
            int32_t i_1 = 0xffffffff;

            while (i_1)
            {
                bool cond:3_1 = 0 != *dest_ptr_5;
                dest_ptr_5 += 1;
                i_1 -= 1;

                if (!cond:3_1)
                    break;
            }

            int32_t counter_val_6 = ~i_1;
            int32_t source_ptr_4;
            int32_t dest_ptr_8;
            dest_ptr_8 = memcpy(scratch_val_2, dest_ptr_5 - counter_val_6, counter_val_6 & 0xfffffffc);
            memcpy(dest_ptr_8, source_ptr_4, counter_val_6 & 3);
            int32_t* lplpDD;
            HRESULT result_val_3 = Camera_ApplyPostProcess_30(*(base_ptr_1 + 0x100), &lplpDD, 0x534a50, 0);
            void arg_52c;

            if (result_val_3)
            {
                Game_DataSymbolLoad(&arg_52c, "Couldn't create DirectDraw object");
                int32_t local_20_3 = DDERR_GENERIC(result_val_3);
                void* local_24_2 = &arg_52c;
                Error_Show("%s\n\nDirectX error message: %s");

                while (true)
                    /* nop */
            }
            else
            {
                int32_t* lplpDD_1 = lplpDD;
                int32_t result_val_4 = (*(*lplpDD_1 + 0x20))(lplpDD_1, result_val_3, result_val_3, base_ptr_1, sub_492670);

                if (result_val_4)
                {
                    Game_DataSymbolLoad(&arg_52c, "Couldn't enumerate display modes.");
                    int32_t local_20_4 = DDERR_GENERIC(result_val_4);
                    void* local_24_3 = &arg_52c;
                    Error_Show("%s\n\nDirectX error message: %s");

                    while (true)
                        /* nop */
                }
                else
                {
                    int32_t* lplpDD_2 = lplpDD;
                    (*(*lplpDD_2 + 8))(lplpDD_2);
                    result = result_1 + 1;
                    frame_ptr += 0x100;
                    base_ptr_1 += 0x4f8;
                    result_1 = result;

                    if (result >= return_addr)
                        break;

                    pThis_1 = pThis;
                }
            }
        }
    }

    int16_t fpu_control;
    Display_ClearSurfaces_16(fpu_control);
    return result;
}
