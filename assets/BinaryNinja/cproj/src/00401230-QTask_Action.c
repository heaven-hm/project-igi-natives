#include "gi_platform.h"
#include "00401230-QTask_Action.h"
void QTask_Action(void)
{
    int32_t task_index = 0;

    for (uint8_t* task_record = (uint8_t*)&g_af5f05;
         task_record < (uint8_t*)GI_PE_DATA_PTR(0x00afa705u);
         task_record += 0x30u)
    {
        if (*task_record != 0)
        {
            uint32_t task_type_name_address =
                (uint32_t)QTask_RegisterEventCallback_2((int16_t)task_index);
            const char* task_type_name =
                (const char*)GI_GUEST_MEMORY_PTR(task_type_name_address, 1u);

            if (task_type_name != NULL)
            {
                Warning_Show("QTasktype \"%s\" not deallocated", task_type_name);
            }
        }

        task_index += 1;
    }
}
