// IGI native provenance: ComputerButtonItem_Process - 0x0046B5C0 - CFG score 100.0% (PASS; structural only); runtime behavior not verified.
// Evidence: 0046B5C0-ComputerButtonItem_Process.md; REA/Ghidra static record; catalog: assets/BinaryNinja/IGINatives_VERIFIED.json.
#include "ComputerButtonItem_Process.h"
int32_t ComputerButtonItem_Process(void* context)

{
    char data_val = *(context + 0x4e);
    int32_t* data_1;

    if (!data_val)
        data_1 = *(context + 0x88);
    else if (*(context + 0x80))
        data_1 = *(context + 0x90);
    else if (!data_val)
        data_1 = *(context + 0x88);
    else
        data_1 = *(context + 0x8c);

    Sys_AllocateMemory_15(data_1, *(context + 0x78), *(context + 0x7c), 128.0f, 128.0f, 128.0f, 0x3f800000, 0x44029eb8, 0,
        0x400c0000, 0xffffffff);
    int32_t result = *(context + 0x84);

    if (!result)
        return result;

    *(result + 0x20) = 0xffffffff;
    return Sys_CloseFileStream_18(*(context + 0x84));
}
