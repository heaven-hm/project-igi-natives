#include "004494D0-Siren_LoadParameters.h"
/* 0x004494d0 Siren_LoadParameters full linked: callers=0 callees=7 */
struct status_msg* sub_4494d0(int80_t a1 @ st0, void* a2)

{
    (*((sub_481340() << 2) + &g_a970e0))(a2);
    *(a2 + 0x2d1) = *(a2 + 0x2d0);
    struct status_msg* result = sub_4f16e0(a2 + 0x278, a2);
    result = a1;
    *(a2 + 0x2d0) = result;

    if (!result)
    {
        result = *(a2 + 0x190);

        if (!result)
        {
            result = *(a2 + 0x2c8);

            if (result)
            {
                result = sub_4e6c00(result);
                *(a2 + 0x2c8) = 0;
            }
        }
    }

    result = *(a2 + 0x2d0);

    if (result)
    {
    label_44957c:
        result = *(a2 + 0x190);

        if (!result)
        {
            result = *(a2 + 0x2c8);

            if (!result)
            {
                result = sub_4e6b00(a2, a2 + 0x238);
                *(a2 + 0x2c8) = result;
            }
        }

        result = *(a2 + 0x2d0);

        if (result)
        {
            result = *(a2 + 0x190);

            if (result)
            {
                void* eax_5 = *(a2 + 0x2c8);

                if (eax_5)
                {
                    sub_4e6c00(eax_5);
                    *(a2 + 0x2c8) = 0;
                }

                result = *(a2 + 0x2cc);

                if (!result)
                {
                    result = sub_4e6b00(a2, a2 + 0x258);
                    *(a2 + 0x2cc) = result;
                }
            }
        }
    }
    else
    {
        result = *(a2 + 0x190);

        if (result)
        {
            result = *(a2 + 0x2cc);

            if (result)
            {
                result = sub_4e6c00(result);
                *(a2 + 0x2cc) = 0;
            }
        }

        result = *(a2 + 0x2d0);

        if (result)
            goto label_44957c;
    }

    return result;
}
