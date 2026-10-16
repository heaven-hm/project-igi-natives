#include "00453760-PatrolCursor_Advance.h"
/* 0x00453760 PatrolCursor_Advance full linked: callers=5 callees=5 */
int32_t* sub_453760(int32_t* a1)

{
    int32_t* result = sub_453730(a1);

    if (result)
    {
        int32_t eax_1 = sub_453540(result);

        if (eax_1 == 6)
        {
            if (result == a1[2])
                return 0;

            a1[1] = result;
            a1[2] = result;
            int32_t* result_1 = sub_453730(a1);

            if (result_1 == result || !result_1)
                return 0;

            result = result_1;
            eax_1 = sub_453540(result_1);
        }

        if (eax_1 >= 2)
        {
            if (eax_1 <= 3)
            {
                int32_t eax_3 = a1[3];
                a1[3] = result;
                a1[4] = eax_3;
            }
            else if (eax_1 == 6)
            {
                Error_Show("END command following END command");

                while (true)
                    /* nop */
            }
        }

        a1[1] = result;
    }

    return result;
}
