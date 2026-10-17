// IGI native provenance: Qvm_ProcessPUSH - 0x004BECB0 - CFG score 100.0% (PASS; structural only); runtime behavior not verified.
// Evidence: 004BECB0-Qvm_ProcessPUSH.md; Binary Ninja/Radare2 CFG record; catalog: assets/BinaryNinja/IGINatives_VERIFIED.json.
#include "Qvm_ProcessPUSH.h"

int32_t Qvm_ProcessPUSH(int32_t arg1, int32_t arg2)

{
    char* dest_ptr;

    if (arg2 > 0x2f)
        dest_ptr = "ILLEGAL";
    else
        switch (arg2)
        {
            case 0:
            {
                dest_ptr = &data_547d5c;
                break;
            }
            case 1:
            {
                dest_ptr = &data_547d58;
                break;
            }
            case 2:
            {
                dest_ptr = "PUSH";
                break;
            }
            case 3:
            {
                dest_ptr = "PUSHB";
                break;
            }
            case 4:
            {
                dest_ptr = "PUSHW";
                break;
            }
            case 5:
            {
                dest_ptr = "PUSHF";
                break;
            }
            case 6:
            {
                dest_ptr = "PUSHA";
                break;
            }
            case 7:
            {
                dest_ptr = "PUSHS";
                break;
            }
            case 8:
            {
                dest_ptr = "PUSHSI";
                break;
            }
            case 9:
            {
                dest_ptr = "PUSHSIB";
                break;
            }
            case 0xa:
            {
                dest_ptr = "PUSHSIW";
                break;
            }
            case 0xb:
            {
                dest_ptr = "PUSHI";
                break;
            }
            case 0xc:
            {
                dest_ptr = "PUSHII";
                break;
            }
            case 0xd:
            {
                dest_ptr = "PUSHIIB";
                break;
            }
            case 0xe:
            {
                dest_ptr = "PUSHIIW";
                break;
            }
            case 0xf:
            {
                dest_ptr = "PUSH0";
                break;
            }
            case 0x10:
            {
                dest_ptr = "PUSH1";
                break;
            }
            case 0x11:
            {
                dest_ptr = "PUSHM";
                break;
            }
            case 0x12:
            {
                dest_ptr = &data_547cd4;
                break;
            }
            case 0x13:
            {
                dest_ptr = &data_547cd0;
                break;
            }
            case 0x14:
            {
                dest_ptr = &data_547ccc;
                break;
            }
            case 0x15:
            {
                dest_ptr = &data_547cc8;
                break;
            }
            case 0x16:
            {
                dest_ptr = &data_547cc4;
                break;
            }
            case 0x17:
            {
                dest_ptr = &data_547cc0;
                break;
            }
            case 0x18:
            {
                dest_ptr = "CALL";
                break;
            }
            case 0x19:
            {
                dest_ptr = &data_547cb4;
                break;
            }
            case 0x1a:
            {
                dest_ptr = &data_547cb0;
                break;
            }
            case 0x1b:
            {
                dest_ptr = &data_547cac;
                break;
            }
            case 0x1c:
            {
                dest_ptr = &data_547ca8;
                break;
            }
            case 0x1d:
            {
                dest_ptr = &data_547ca4;
                break;
            }
            case 0x1e:
            {
                dest_ptr = &data_547ca0;
                break;
            }
            case 0x1f:
            {
                dest_ptr = &data_547c9c;
                break;
            }
            case 0x20:
            {
                dest_ptr = &data_547c98;
                break;
            }
            case 0x21:
            {
                dest_ptr = &data_547c94;
                break;
            }
            case 0x22:
            {
                dest_ptr = "LAND";
                break;
            }
            case 0x23:
            {
                dest_ptr = &data_547c88;
                break;
            }
            case 0x24:
            {
                dest_ptr = &data_547c84;
                break;
            }
            case 0x25:
            {
                dest_ptr = &data_547c80;
                break;
            }
            case 0x26:
            {
                dest_ptr = &data_547c7c;
                break;
            }
            case 0x27:
            {
                dest_ptr = &data_547c78;
                break;
            }
            case 0x28:
            {
                dest_ptr = &data_547c74;
                break;
            }
            case 0x29:
            {
                dest_ptr = &data_547c70;
                break;
            }
            case 0x2a:
            {
                dest_ptr = "ASSIGN";
                break;
            }
            case 0x2b:
            {
                dest_ptr = "PLUS";
                break;
            }
            case 0x2c:
            {
                dest_ptr = "MINUS";
                break;
            }
            case 0x2d:
            {
                dest_ptr = &data_547c54;
                break;
            }
            case 0x2e:
            {
                dest_ptr = &data_547c50;
                break;
            }
            case 0x2f:
            {
                dest_ptr = &data_547c4c;
                break;
            }
        }

    int32_t i = 0xffffffff;

    while (i)
    {
        bool cond:1_1 = 0 != *dest_ptr;
        dest_ptr = &dest_ptr[1];
        i -= 1;

        if (!cond:1_1)
            break;
    }

    int32_t result = ~i;
    int32_t esi_1;
    int32_t edi_3;
    edi_3 = __builtin_memcpy(arg1, dest_ptr - result, result & 0xfffffffc);
    __builtin_memcpy(edi_3, esi_1, result & 3);
    return result;
}
