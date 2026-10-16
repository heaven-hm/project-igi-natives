#include "0048E920-Patrol_Tick.h"
/* 0x0048e920 Patrol_Tick full linked: callers=0 callees=21 */
int32_t* sub_48e920(int32_t* a1, int32_t* a2)

{
    int32_t esi = a1;
    int32_t eax = *(esi + 0x1514);
    void* eax_1 = sub_453720(esi + eax * 0x1c + 0x14fc);

    if (*(esi + eax * 0x1c + 0x1510))
        sub_48ef70(esi, 1, 1f);

    int32_t* result;
    int32_t ecx_2;

    if (!*(esi + eax * 0x1c + 0x1511))
        result = sub_452660(esi);
    else
        result = sub_4525e0(esi);

    if (eax_1)
    {
        int32_t eax_3 = sub_453540(eax_1);
        result = sub_485320(eax_1);

        switch (eax_3)
        {
            case 0:
            {
                int32_t* result_3 = result;
                char* var_30_4 = "Patrolling, Standaction : %d";
                int32_t var_34_3 = 0xffffffff;
                int32_t var_38_2 = esi;

                if (*(esi + eax * 0x1c + 0x1514) == 0xffffffff)
                {
                    int32_t var_2c_5 = ecx_2;
                    *(esi + eax * 0x1c + 0x1514) = 0;
                    return sub_48ef70(esi, 3, result);
                }

                int32_t var_2c_7;

                if (!*(esi + eax * 0x1c + 0x1510))
                    var_2c_7 = 0;
                else
                    var_2c_7 = 1;

                result = sub_48efe0(esi, var_2c_7);

                if (result)
                {
                    result = sub_453760(esi + eax * 0x1c + 0x14fc);
                    *(esi + eax * 0x1c + 0x1514) = 0xffffffff;
                }
                break;
            }
            case 1:
            {
                if (*(esi + eax * 0x1c + 0x1514) == 0xffffffff)
                    *(esi + eax * 0x1c + 0x1514) = Frames_GetUpdateCounter() + result;

                uint32_t eax_7 = Frames_GetUpdateCounter();
                int32_t var_2c_4 = *(esi + eax * 0x1c + 0x1514) - eax_7;
                char* var_30_3 = "Patrolling, Delay : %d";
                int32_t var_34_2 = 0xffffffff;
                int32_t var_38_1 = esi;
                result = Frames_GetUpdateCounter();

                if (result > *(esi + eax * 0x1c + 0x1514))
                {
                    result = sub_453760(esi + eax * 0x1c + 0x14fc);
                    *(esi + eax * 0x1c + 0x1514) = 0xffffffff;
                }
                break;
            }
            case 2:
            case 3:
            {
                int32_t var_3c_2;
                int32_t var_38_4;

                if (eax_3 == 2)
                {
                    *(esi + eax * 0x1c + 0x1510) = 0;
                    *(esi + eax * 0x1c + 0x1511) = 1;
                    int32_t var_2c_9 = *(esi + 0x3e2c);
                    int32_t* result_2 = result;
                    char* var_34_7 = "Patrolling, Walkto:%d, Cur:%d";
                    var_38_4 = 0xffffffff;
                    var_3c_2 = esi;
                }
                else if (eax_3 == 3)
                {
                    *(esi + eax * 0x1c + 0x1510) = 0;
                    *(esi + eax * 0x1c + 0x1511) = 0;
                    int32_t var_2c_8 = *(esi + 0x3e2c);
                    int32_t* result_1 = result;
                    char* var_34_6 = "Patrolling, Runto:%d, Cur:%d";
                    var_38_4 = 0xffffffff;
                    var_3c_2 = esi;
                }
                result = sub_4522a0(esi, result, nullptr, 1);

                if (result)
                {
                    result = sub_453760(esi + eax * 0x1c + 0x14fc);
                    *(esi + eax * 0x1c + 0x1514) = 0xffffffff;
                }
                break;
            }
            case 4:
            {
                *(esi + eax * 0x1c + 0x1510) = 1;
                result = sub_453760(esi + eax * 0x1c + 0x14fc);
                *(esi + eax * 0x1c + 0x1514) = 0xffffffff;
                break;
            }
            case 5:
            {
                int32_t* result_4 = result;
                char* var_30_6 = "Patrolling, LookAtNode : %d";
                int32_t var_34_5 = 0xffffffff;
                int32_t var_38_3 = esi;
                double var_18[0x3];
                sub_4f9770(&var_18, sub_4f9720(*(esi + 0x3b6c), result));
                result = sub_452580(esi, &var_18, 0.052359879f, 0);

                if (result)
                {
                    result = sub_453760(esi + eax * 0x1c + 0x14fc);
                    *(esi + eax * 0x1c + 0x1514) = 0xffffffff;
                }
                break;
            }
            case 7:
            {
                return sub_450ff0(esi, a2);
                break;
            }
        }
    }

    return result;
}
