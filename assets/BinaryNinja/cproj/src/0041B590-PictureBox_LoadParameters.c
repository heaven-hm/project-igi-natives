#include "gi_platform.h"
#include "0041B590-PictureBox_LoadParameters.h"
int32_t* PictureBox_LoadParameters(int80_t a1 , void* a2)

{
    int32_t* result = Script_FormatString_6(a2 + 0x9ac);

    if (result)
    {
        Script_SpawnNewTask_7(a2 + 0x9ac, a2);
        int32_t objC1 = (*(int32_t*)(uintptr_t)(a2 + 0x958));
        result = nullptr;

        if (objC1 > 0)
        {
            int32_t* tmpD1 = a2 + 0x94;

            while (a1 != *tmpD1)
            {
                result += 1;
                tmpD1 = &tmpD1[0x12];

                if (result >= objC1)
                    return result;
            }

            (*(int32_t*)(uintptr_t)(a2 + 0x954)) = result;
        }
    }

    return result;
}
