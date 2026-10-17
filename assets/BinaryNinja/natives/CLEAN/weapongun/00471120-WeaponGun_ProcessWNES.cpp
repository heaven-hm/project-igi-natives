// IGI native provenance: WeaponGun_ProcessWNES - 0x00471120 - CFG score 100.0% (PASS; structural only); runtime behavior not verified.
// Evidence: 00471120-WeaponGun_ProcessWNES.md; Binary Ninja/Radare2 CFG record; catalog: assets/BinaryNinja/IGINatives_VERIFIED.json.
#include "WeaponGun_ProcessWNES.h"

int32_t __convention("regparm") WeaponGun_ProcessWNES(int32_t arg1, int32_t arg2, int32_t arg3, void* arg4)

{
    int32_t var_4 = arg3;
    *(&var_4 + 2) = 0;
    *(&var_4 + 3) = 0;
    void* dest_ptr = arg4 + 0x2b54;
    int32_t i_1 = 0xc;
    int32_t i;

    do
    {
        Weapon_UpdateZoom(dest_ptr, 0x1e, 0x3ca3d70a);
        dest_ptr += 0x14;
        i = i_1;
        i_1 -= 1;
    } while (i != 1);
    *(arg4 + 0x20) = Sys_OpenFileStream_18(g_5bddc0, 0, 0, &g_script_ret_type);
    *(arg4 + 0x34) = Sys_OpenFileStream_18(g_5bddc0, 0, 0, &g_script_ret_type);
    *(&var_4 + 2) = data_5402a8[0];
    *(arg4 + 0x24) = Sys_OpenFileStream_18(g_5bddc0, 0, 0, (&var_4 + 2));
    *(&var_4 + 2) = data_5402a8[1][0];
    *(arg4 + 0x28) = Sys_OpenFileStream_18(g_5bddc0, 0, 0, (&var_4 + 2));
    *(&var_4 + 2) = data_5402a8[2][0];
    *(arg4 + 0x2c) = Sys_OpenFileStream_18(g_5bddc0, 0, 0, (&var_4 + 2));
    *(&var_4 + 2) = data_5402a8[3][0];
    int32_t** eax_6 = Sys_OpenFileStream_18(g_5bddc0, 0, 0, (&var_4 + 2));
    *(arg4 + 0x60) = 0;
    *(arg4 + 0x68) = 0;
    *(arg4 + 0x70) = 0;
    *(arg4 + 0x30) = eax_6;
    *(arg4 + 0x64) = 0;
    *(arg4 + 0x6c) = 0;
    *(arg4 + 0x74) = 0;
    *(arg4 + 0x7c) = 0x3f800000;
    *(arg4 + 0x80) = 0;
    *(arg4 + 0x84) = 0;
    Sys_ResolveSymbol_13(arg4 + 0x138);
    Weapon_EjectMagazine(arg4 + 0x14c, 0x18);
    *(arg4 + 0x148) = 0;
    *(arg4 + 0x144) = 0;
    __builtin_memset(arg4 + 0x2c44, 0, 0x1b8);
    return 0;
}
