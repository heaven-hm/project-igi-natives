// Original IGI.EXE function: DynObj_LookupHashItem_6 (VA 0x004C5710; static CFG gate FAIL, CFG score 0.833).
#include "DynObj_LookupHashItem_6.h"
int32_t DynObj_LookupHashItem_6(int32_t a1, void* a2, int32_t a3)

{
    DynObj_LookupHashItem_9(a2);
    *(a2 + 0x68) = a1;
    *(a2 + 0x6c) = a3;
    *(a2 + 0x70) = 0x3f800000;
    *(a2 + 0x74) = 0;
    *(a2 + 0x78) = 0;
    *(a2 + 0x7c) = 0;
    *(a2 + 0x80) = 0x3f800000;
    *(a2 + 0x84) = 0;
    *(a2 + 0x88) = 0;
    *(a2 + 0x8c) = 0;
    *(a2 + 0x90) = 0x3f800000;
    *(a2 + 0x94) = 0;
    *(a2 + 0x98) = 0x3f800000;
    *(a2 + 0x9c) = 0x3f800000;
    *(a2 + 0xa0) = 0x3f800000;
    *(a2 + 0xe4) = 0;
    *(a2 + 0xa4) = 0;
    *(a2 + 0xd4) = 2;
    *(a2 + 0xa8) = 0x3f800000;
    *(a2 + 0xac) = 0x3f800000;
    *(a2 + 0xb0) = 0x3f800000;
    __builtin_memset(a2 + 0xb4, 0, 0x20);
    *(a2 + 0xd8) = 1;
    *(a2 + 0xdc) = 0;
    *(a2 + 0xe0) = 1;
    *(a2 + 0xe8) = 0;
    *(a2 + 0xec) = 1;
    return 0;
}
