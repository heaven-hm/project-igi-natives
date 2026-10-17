// IGI native provenance: ExplosionObj_InvokeMissing_43DDB0 - 0x0043DDB0 - CFG score 100.0% (PASS; structural only); runtime behavior not verified.
// Evidence: 0043DDB0-ExplosionObj_InvokeMissing_43DDB0.md; Binary Ninja/Radare2 CFG record; catalog: assets/BinaryNinja/IGINatives_VERIFIED.json.
#include "ExplosionObj_InvokeMissing_43DDB0.h"

float ExplosionObj_InvokeMissing_43DDB0(float arg1, char* arg2) __location("result_val")

{
    float frame_ptr = arg1;
    DynObj_CreateMagicObject_5(frame_ptr, DynObj_Missing(frame_ptr + 0x170));
    int32_t data_val = *(frame_ptr + 0x1a4);
    __builtin_memcpy(frame_ptr + 0x70, frame_ptr + 0x120, 0x28);
    *(frame_ptr + 0x1a8) = *(frame_ptr + 0x1a0);
    *(frame_ptr + 0x1bc) = 0;
    *(frame_ptr + 0x190) = 0;
    *(frame_ptr + 0x1ac) = data_val;
    int32_t* esi_1 = frame_ptr + 0x1c4;
    int32_t i_1 = 0xa;
    int32_t i;

    do
    {
        Script_Isexists(esi_1, frame_ptr);
        esi_1 = &esi_1[0x14];
        i = i_1;
        i_1 -= 1;
    } while (i != 1);
    Script_Isexists(frame_ptr + 0x534, frame_ptr);
    Script_Isexists(frame_ptr + 0x4e4, frame_ptr);
    Script_Isexists(frame_ptr + 0x584, frame_ptr);
    arg1 = Physics_SimulateRigidBody(*(frame_ptr + 0x180));
    long double x87_r7_1 = *(frame_ptr + 0x188);
    long double temp1 = 0f;
    x87_r7_1 - temp1;
    *(frame_ptr + 0x184) = *(frame_ptr + 0x188);

    if (*(&((x87_r7_1 < temp1 ? 1 : 0) << 8 | (FCMP_UO(x87_r7_1, temp1) ? 1 : 0) << 0xa
            | (x87_r7_1 == temp1 ? 1 : 0) << 0xe) + 1) & 1)
        *(frame_ptr + 0x184) = 0;

    long double x87_r7_2 = *(frame_ptr + 0x188);
    long double temp2 = arg1;
    x87_r7_2 - temp2;

    if (!(*(&((x87_r7_2 < temp2 ? 1 : 0) << 8 | (FCMP_UO(x87_r7_2, temp2) ? 1 : 0) << 0xa
            | (x87_r7_2 == temp2 ? 1 : 0) << 0xe) + 1) & 0x41))
        *(frame_ptr + 0x184) = arg1;

    Vehicle_InitPlane_9(frame_ptr);

    if (arg2 && *arg2)
    {
        __builtin_memcpy(frame_ptr + 0x108, frame_ptr + 0x20, 0x18);
        __builtin_memcpy(frame_ptr + 0x148, frame_ptr + 0x70, 0x28);
    }

    __builtin_memcpy(frame_ptr + 0x108, frame_ptr + 0x20, 0x18);
    __builtin_memcpy(frame_ptr + 0x148, frame_ptr + 0x70, 0x28);
    g_57c0ec = arg1;
    *(frame_ptr + 0x5d7) = 0;
    *(frame_ptr + 0x5d8) = 0;
    *(frame_ptr + 0x640) = 1;
    return arg1;
}
