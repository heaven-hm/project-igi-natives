#include "Human_TaskViewReset.h"
void* Human_TaskViewReset(void* a1)

// Sig: void Human_TaskViewReset(HumanPlayer* human)
// Note: Resets the human's VIEW TANGENT fields to retail defaults: computes
// tan() of the half-FOV globals 0x5335E8/0x5339C0 (the same globals
// ENHANCER::FOV_SET writes) and stores them into human+0x1E4 and human+0x1E8,
// clearing human+0x1EC. Param: human = Human/soldier struct ptr. This is THE
// retail restore path - call after custom FOV/binocular zoom to return to
// normal view.
{
    long double fp0;
    bool c1;
    bool c2;
    fp0 = __fptan(0.78539818525314331);
    *(a1 + 0x1ec) = 0;
🚫🚫🚫    /* unimplemented  {fstp fp0, fp0} */
    /* unimplemented  {fstp fp0, fp0} */
🚫🚫🚫    *(a1 + 0x1e4) =
    /* unimplemented  {fstp dword [valA+0x1e4], fp0} */
🚫🚫    /* unimplemented  {fld fp0, qword [&g_5339c0]} */
🚫🚫🚫🚫    long double fp0_1;
    bool c1_1;
    bool c2_1;
    fp0_1 = __fptan(/* fp0_1, c1_1, c2_1 = __fptan(unimplemented  {fptan }) */);
    /* unimplemented  {fptan } */

    if (!c2_1)
        /* unimplemented  {fptan } */

🚫🚫🚫    /* unimplemented  {fstp fp0, fp0} */
    /* unimplemented  {fstp fp0, fp0} */
🚫🚫🚫    *(a1 + 0x1e8) =
    /* unimplemented  {fstp dword [valA+0x1e8], fp0} */
    return a1;
}
