#include "gi_platform.h"
#include "00401A70-QTask_QtaskTypeSNotDefined.h"
int32_t QTask_QtaskTypeSNotDefined(char* requested_task_type_name)

{
    int32_t task_index = 0;
    uint8_t* task_record = (uint8_t*)GI_PE_DATA_PTR(0x00af5f05u);
    const uint8_t* task_records_end = (const uint8_t*)GI_PE_DATA_PTR(0x00afa705u);

    for (; task_record < task_records_end; task_record += 0x30u, task_index += 1)
    {
        if (*task_record != 0)
        {
            uint32_t task_type_name_address =
                (uint32_t)QTask_RegisterEventCallback_2((int16_t)task_index);
            const char* registered_task_type_name =
                (const char*)GI_GUEST_MEMORY_PTR(task_type_name_address, 1u);

            if (registered_task_type_name != NULL &&
                strcmp(registered_task_type_name, requested_task_type_name) == 0)
            {
                return task_index & 0xffff;
            }
        }
    }

    Error_Show("QTask type \"%s\" not defined", requested_task_type_name);

    for (;;)
    {
    }
}
