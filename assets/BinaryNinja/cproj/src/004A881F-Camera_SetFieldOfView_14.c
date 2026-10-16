#include "gi_platform.h"
#include "004A881F-Camera_SetFieldOfView_14.h"
void Camera_SetFieldOfView_14(int80_t a1 , char a2)

{
    int32_t objC;
    int32_t v_8 = objC;
    int32_t v_c = objC;
    char objC1 = a2;
    int16_t idx;
    bool c1;

    if (objC1 & 1)
    {
        g_544390;
        a2 = a1;
        idx = 1;
        c1 = /* c1 = unknown  {fistp dword [flagP+0x8], fp0} */;
    }

    if (objC1 & 8)
    {
        int32_t valA;
        bool c0;
        bool c2;
        bool c3;
        valA = (c0 ? 1 : 0) << 8 | (c1 ? 1 : 0) << 9 | (c2 ? 1 : 0) << 0xa | (c3 ? 1 : 0) << 0xe
            | (idx & 7) << 0xb;
🚫🚫        /* unimplemented  {fld fp0, tword [&g_544390]} */
🚫🚫🚫        int64_t f1_1 = /* int64_t f1_1 = unimplemented  {fstp qword [flagP-0x8], fp0} */;
        /* unimplemented  {fstp qword [flagP-0x8], fp0} */
        v_c = f1_1;
        bool c1_1 = /* bool c1_1 = unknown  {fstp qword [flagP-0x8], fp0} */;
        valA = (c0 ? 1 : 0) << 8 | (c1_1 ? 1 : 0) << 9 | (c2 ? 1 : 0) << 0xa | (c3 ? 1 : 0) << 0xe
            | (idx & 7) << 0xb;
    }

    if (objC1 & 0x10)
    {
🚫🚫        /* unimplemented  {fld fp0, tword [&g_54439c]} */
🚫🚫🚫        v_c = /* v_c.q = unimplemented  {fstp qword [flagP-0x8], fp0} */;
        /* unimplemented  {fstp qword [flagP-0x8], fp0} */
    }

    if (objC1 & 4)
    {
🚫🚫        /* unimplemented  {fldz } */
🚫🚫        /* unimplemented  {fld1 } */
🚫🚫🚫        /* unimplemented  {fdivrp fp1, fp0} */
        /* unimplemented  {fdivrp fp1, fp0} */
🚫🚫🚫        /* unimplemented  {fstp fp0, fp0} */
        /* unimplemented  {fstp fp0, fp0} */
    }

    if (!(objC1 & 0x20))
        return;

🚫🚫    /* unimplemented  {fldpi } */
🚫🚫🚫    v_c = /* v_c.q = unimplemented  {fstp qword [flagP-0x8], fp0} */;
    /* unimplemented  {fstp qword [flagP-0x8], fp0} */
}
