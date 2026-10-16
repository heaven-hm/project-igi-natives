#include "gi_platform.h"
#include "004017C0-QTask_UnableToAllocateEven.h"
int32_t QTask_UnableToAllocateEvent(int16_t task_type)

{
    int32_t task_slot_index = 0x20;
    uint8_t* task_slot_active_flag = (uint8_t*)GI_PE_DATA_PTR(0x0054f9f2u);
    const uint8_t* task_slot_active_flag_end =
        (const uint8_t*)GI_PE_DATA_PTR(0x0054ff26u);

    for (; task_slot_active_flag < task_slot_active_flag_end;
         task_slot_active_flag += 6u, task_slot_index += 1)
    {
        if (*task_slot_active_flag == 0)
        {
            uint32_t task_slot_offset = (uint32_t)task_slot_index * 6u;
            uint8_t* task_slot = (uint8_t*)GI_PE_DATA_PTR(0x0054f930u + task_slot_offset);

            *(uint16_t*)task_slot = (uint16_t)task_type;
            task_slot[2u] = 1u;
            task_slot[3u] = 1u;
            return task_slot_index;
        }
    }

    Error_Show("Unable to allocate event");

    for (;;)
    {
    }
}
