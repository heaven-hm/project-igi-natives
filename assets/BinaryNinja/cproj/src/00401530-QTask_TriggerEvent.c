#include "gi_platform.h"
#include "00401530-QTask_TriggerEvent.h"
int32_t QTask_TriggerEvent(int16_t a1, int32_t a2, int32_t a3)

{
    uint32_t dispatch_depth = g_567c70 + 1u;
    g_536148 += 1;
    g_567c70 = dispatch_depth;

    uint32_t event_table_row = (uint32_t)a2 * 0x180u;
    uint32_t event_table_index = event_table_row + (uint16_t)a1;
    uint32_t* callback_entry = (uint32_t*)GI_PE_DATA_PTR(
        0x00a96ae0u + event_table_index * sizeof(uint32_t));
    *callback_entry = (uint32_t)a3;

    uint8_t* dispatch_flag_row = (uint8_t*)GI_PE_DATA_PTR(0x0054ff34u) + event_table_row;
    dispatch_flag_row[(uint16_t)a1] = (uint8_t)(dispatch_depth == 1u);

    uint32_t task_index = 0;
    uint8_t* task_record = (uint8_t*)GI_PE_DATA_PTR(0x00af5ee8u);
    uint8_t* task_records_end = (uint8_t*)GI_PE_DATA_PTR(0x00afa6e8u);

    for (; task_record < task_records_end; task_record += 0x30u)
    {
        uint16_t task_type = *(uint16_t*)task_record;
        bool task_is_active = task_record[0x1du] != 0;
        bool event_is_being_dispatched = dispatch_flag_row[task_index] != 0;

        if (task_is_active && task_type == (uint16_t)a1 && !event_is_being_dispatched)
        {
            QTask_TriggerEvent((int16_t)task_index, a2, a3);
        }

        task_index += 1u;
    }

    QTask_DeleteTask();
    g_567c70 = (int32_t)(dispatch_depth - 1u);
    return g_567c70;
}
