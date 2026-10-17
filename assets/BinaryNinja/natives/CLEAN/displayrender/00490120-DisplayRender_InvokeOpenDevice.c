// IGI native provenance: DisplayRender_InvokeOpenDevice - 0x00490120 - CFG score 100.0% (PASS; structural only); runtime behavior not verified.
// Evidence: 00490120-DisplayRender_InvokeOpenDevice.md; Binary Ninja/Radare2 CFG record; catalog: assets/BinaryNinja/IGINatives_VERIFIED.json.
#include "DisplayRender_InvokeOpenDevice.h"

int32_t DisplayRender_InvokeOpenDevice(int32_t arg1, int32_t arg2, int32_t arg3)

{
    if (arg1 - 0x100 <= 5)
        switch (arg1)
        {
            case 0x100:
            case 0x104:
            {
                *(Display_OpenDevice(arg2, arg3) + 0xc28e80) = 0x80;
                break;
            }
            case 0x101:
            case 0x105:
            {
                *(Display_OpenDevice(arg2, arg3) + 0xc28e80) = 0;
                break;
            }
        }

    return 1;
}
