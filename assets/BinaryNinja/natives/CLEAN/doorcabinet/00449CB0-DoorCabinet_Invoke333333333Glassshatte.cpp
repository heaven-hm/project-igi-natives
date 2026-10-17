// IGI native provenance: DoorCabinet_Invoke333333333Glassshatte - 0x00449CB0 - CFG score 100.0% (PASS; structural only); runtime behavior not verified.
// Evidence: 00449CB0-DoorCabinet_Invoke333333333Glassshatte.md; Binary Ninja/Radare2 CFG record; catalog: assets/BinaryNinja/IGINatives_VERIFIED.json.
#include "DoorCabinet_Invoke333333333Glassshatte.h"

struct status_msg* DoorCabinet_Invoke333333333Glassshatte(struct status_msg* arg1, int32_t* arg2)

{
    arg2[2] = 1;

    if (arg1->sprite[0x90])
        return arg1;

    int32_t source_ptr;
    source_ptr = arg1->sprite[0x8c];
    *(&source_ptr + 1) = arg1->sprite[0x8d];
    *(&source_ptr + 2) = arg1->sprite[0x8e];
    *(&source_ptr + 3) = arg1->sprite[0x8f];
    arg1->sprite[0x88] = source_ptr;
    arg1->sprite[0x89] = *(&source_ptr + 1);
    arg1->sprite[0x8a] = *(&source_ptr + 2);
    arg1->sprite[0x8b] = *(&source_ptr + 3);
    arg1->sprite[0x90] = 1;
    int32_t var_c_1 = 0x46400000;
    return Env_333333333Glassshatte(arg1->head[0x1b], &arg1->head[0x1c], &arg1->head[8],
        *arg2 + 0x20, 204.800003f);
}
