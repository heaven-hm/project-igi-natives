// Original IGI.EXE function: Camera_SetFieldOfView_14 (VA 0x004A881F; static CFG gate PASS, CFG score 1.000).
#include "Camera_SetFieldOfView_14.h"
void Camera_SetFieldOfView_14(long double context , char param_2)

{
    int32_t entity_val;
    int32_t item_8 = entity_val;
    int32_t item_c = entity_val;
    char entity_1 = param_2;
    int16_t idx;
    bool c1;

    if (entity_1 & 1)
    {
        g_544390;
        param_2 = context;
        idx = 1;
        c1 = /* c1 = unknown  {fistp dword [flagP+0x8], fp0} */;
    }

    if (entity_1 & 8)
    {
        int32_t data_val;
        bool c0;
        bool c2;
        bool c3;
        data_val = (c0 ? 1 : 0) << 8 | (c1 ? 1 : 0) << 9 | (c2 ? 1 : 0) << 0xa | (c3 ? 1 : 0) << 0xe
            | (idx & 7) << 0xb;
🚫🚫        /* unimplemented  {fld fp0, tword [&g_544390]} */
🚫🚫🚫        int64_t f1_1 = /* int64_t f1_1 = unimplemented  {fstp qword [flagP-0x8], fp0} */;
        /* unimplemented  {fstp qword [flagP-0x8], fp0} */
        item_c = f1_1;
        bool c1_1 = /* bool c1_1 = unknown  {fstp qword [flagP-0x8], fp0} */;
        data_val = (c0 ? 1 : 0) << 8 | (c1_1 ? 1 : 0) << 9 | (c2 ? 1 : 0) << 0xa | (c3 ? 1 : 0) << 0xe
            | (idx & 7) << 0xb;
    }

    if (entity_1 & 0x10)
    {
🚫🚫        /* unimplemented  {fld fp0, tword [&g_54439c]} */
🚫🚫🚫        item_c = /* item_c.q = unimplemented  {fstp qword [flagP-0x8], fp0} */;
        /* unimplemented  {fstp qword [flagP-0x8], fp0} */
    }

    if (entity_1 & 4)
    {
🚫🚫        /* unimplemented  {fldz } */
🚫🚫        /* unimplemented  {fld1 } */
🚫🚫🚫        /* unimplemented  {fdivrp fp1, fp0} */
        /* unimplemented  {fdivrp fp1, fp0} */
🚫🚫🚫        /* unimplemented  {fstp fp0, fp0} */
        /* unimplemented  {fstp fp0, fp0} */
    }

    if (!(entity_1 & 0x20))
        return;

🚫🚫    /* unimplemented  {fldpi } */
🚫🚫🚫    item_c = /* item_c.q = unimplemented  {fstp qword [flagP-0x8], fp0} */;
    /* unimplemented  {fstp qword [flagP-0x8], fp0} */
}
