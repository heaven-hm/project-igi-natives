#include "004A5234-Camera_UpdateTransform_4.h"
/* 0x004a5234 Camera_UpdateTransform_4 full linked: callers=7 callees=4 */
int32_t sub_4a5234(int32_t* a1)

{
    int32_t result_1 = 0xffffffff;
    char eax = a1[3];
    int32_t result;

    if (!(eax & 0x40))
    {
        if (eax & 0x83)
        {
            result_1 = sub_4a6bd2(a1);
            sub_4a6b6c(a1);
            int32_t eax_2;
            void** ecx_1;
            eax_2 = sub_4a6ab9(a1[4]);

            if (eax_2 >= 0)
            {
                int32_t eax_3 = a1[7];

                if (eax_3)
                {
                    int32_t var_c_2 = eax_3;
                    sub_4a6a50(ecx_1);
                    a1[7] = 0;
                }
            }
            else
                result_1 = 0xffffffff;
        }

        result = result_1;
    }
    else
        result = 0xffffffff;

    a1[3] = 0;
    return result;
}
