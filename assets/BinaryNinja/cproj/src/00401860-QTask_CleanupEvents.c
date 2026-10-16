#include "gi_platform.h"
#include "00401860-QTask_CleanupEvents.h"
uint32_t QTask_CleanupEvents(int16_t task_type, char task_slot_index)

{
    uint32_t masked_task_slot_index = (uint8_t)task_slot_index;
    uint32_t task_slot_offset = masked_task_slot_index * 6u;
    uint8_t* task_slot = (uint8_t*)GI_PE_DATA_PTR(0x0054f930u + task_slot_offset);

    *(uint16_t*)task_slot = (uint16_t)task_type;
    task_slot[2u] = 1u;
    task_slot[3u] = 1u;
    return task_slot_offset;
}
