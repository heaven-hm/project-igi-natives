#include "00403660-GOStart.h"
/* 0x00403660 GOStart full linked: callers=0 callees=2 */
int32_t GOStart(int32_t a1, float a2 @ 0xc)

// Sig: unknown GOStart(unknown param1, unknown* out_buffer)
// Note: Registered at 0x403006 via registrar 0x4B8890 (push 0x403660 + name
// string 'GOStart'). Init counterpart of cataloged GOPlayer @0x4036B0: zeroes
// global 0xBC2380 and stores fcn.004B8A20 result to 0xBC2384; GOPlayer
// reads/increments 0xBC2380. Copies 6 dwords (24 bytes) into second param
// buffer, embedding pointer 0x567C74.  Verified: r2 forced-analysis confirmed
// exact start (size 75); P3 byte-level name<->address binding at registrar
// callsite 0x403006 via 0x4B8890; P6 SHA-256(first 32 code
// bytes)=6a2c07b5ab39d7b6373c45d2561127acfc24cfe9792a2d232bb848aef92d9a6a;
// re-agent reverser/checker loop ran on this native (C decompilation pending
// ARM64 native port).
{
    int32_t var_24 = 0;
    g_bc2380 = 0;
    g_bc2384 = sub_4b8a20(a2, var_24);
    int32_t var_18 = 0;
    int32_t var_10 = 0;
    int32_t var_c = 0;
    char* var_8 = &g_567c74;
    memcpy(a1, &var_18, 0x18);
    return a1;
}
