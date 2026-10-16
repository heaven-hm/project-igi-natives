#include "gi_platform.h"

#include <assert.h>

int32_t QTask_RemoveEventCallback(int16_t task_type, int32_t event_kind, int32_t callback_address);
int32_t QTask_TriggerEvent(int16_t task_type, int32_t event_kind, int32_t callback_address);
int32_t QTask_UnableToAllocateEvent(int16_t task_type);
int32_t QTask_UnableToAllocateEven_2(int16_t task_type);
uint32_t QTask_CleanupEvents(int16_t task_type, char task_slot_index);
int32_t QTask_QtaskTypeSNotDefined(char* requested_task_type_name);

static uint32_t delete_task_call_count = 0;
static char allocation_error_message[64];

int QTask_DeleteTask(void)
{
    delete_task_call_count += 1u;
    return 0;
}

int Error_Show(const char* format, ...)
{
    snprintf(allocation_error_message, sizeof(allocation_error_message), "%s", format);
    return 0;
}

static void initialize_task_record(uint32_t task_index, uint16_t task_type)
{
    uint8_t* task_record = (uint8_t*)GI_PE_DATA_PTR(0x00af5ee8u + task_index * 0x30u);

    *(uint16_t*)task_record = task_type;
    task_record[0x1du] = 1u;
}

static uint32_t read_callback_entry(uint32_t event_table_index)
{
    const uint32_t* callback_entry = (const uint32_t*)GI_PE_DATA_PTR(
        0x00a96ae0u + event_table_index * sizeof(uint32_t));

    return *callback_entry;
}

static void verify_event_dispatch(
    int32_t (*dispatch_function)(int16_t, int32_t, int32_t),
    uint32_t depth_counter_address)
{
    const uint16_t task_type = 7u;
    const uint32_t event_kind = 2u;
    const uint32_t callback_address = 0x00412345u;
    const uint32_t event_table_row = event_kind * 0x180u;
    const uint32_t event_table_index = event_table_row + task_type;
    uint8_t* dispatch_flag_row =
        (uint8_t*)GI_PE_DATA_PTR(0x0054ff34u) + event_table_row;
    uint32_t* depth_counter = (uint32_t*)GI_PE_DATA_PTR(depth_counter_address);

    memset(gi_pe_data_image, 0, sizeof(gi_pe_data_image));
    delete_task_call_count = 0u;
    initialize_task_record(2u, task_type);
    initialize_task_record(5u, task_type);
    initialize_task_record(7u, task_type);

    assert(dispatch_function((int16_t)task_type, (int32_t)event_kind, (int32_t)callback_address) == 0);
    assert(*depth_counter == 0u);
    assert(g_536148 == 3u);
    assert(delete_task_call_count == 3u);
    assert(read_callback_entry(event_table_index) == callback_address);
    assert(read_callback_entry(event_table_row + 2u) == callback_address);
    assert(read_callback_entry(event_table_row + 5u) == callback_address);
    assert(dispatch_flag_row[task_type] == 1u);
    assert(dispatch_flag_row[2u] == 0u);
    assert(dispatch_flag_row[5u] == 0u);
}

static void verify_task_event_slot_allocation(void)
{
    const uint16_t task_type = 0x1234u;
    const uint32_t task_slot_index = 0x20u;
    const uint32_t task_slot_address = 0x0054f930u + task_slot_index * 6u;
    const uint8_t* task_slot = (const uint8_t*)GI_PE_DATA_PTR(task_slot_address);

    memset(gi_pe_data_image, 0, sizeof(gi_pe_data_image));
    memset(allocation_error_message, 0, sizeof(allocation_error_message));

    assert(QTask_UnableToAllocateEvent((int16_t)task_type) == (int32_t)task_slot_index);
    assert(*(const uint16_t*)task_slot == task_type);
    assert(task_slot[2u] == 1u);
    assert(task_slot[3u] == 1u);
    assert(allocation_error_message[0] == '\0');

    memset(gi_pe_data_image, 0, sizeof(gi_pe_data_image));

    assert(QTask_UnableToAllocateEven_2((int16_t)task_type) == (int32_t)task_slot_index);
    assert(*(const uint16_t*)task_slot == task_type);
    assert(task_slot[2u] == 1u);
    assert(task_slot[3u] == 0u);

    const uint32_t masked_task_slot_index = 0xffu;
    const uint32_t masked_task_slot_offset = masked_task_slot_index * 6u;
    const uint8_t* masked_task_slot = (const uint8_t*)GI_PE_DATA_PTR(
        0x0054f930u + masked_task_slot_offset);

    memset(gi_pe_data_image, 0, sizeof(gi_pe_data_image));

    assert(QTask_CleanupEvents((int16_t)task_type, (char)masked_task_slot_index) ==
           masked_task_slot_offset);
    assert(*(const uint16_t*)masked_task_slot == task_type);
    assert(masked_task_slot[2u] == 1u);
    assert(masked_task_slot[3u] == 1u);
}

static void verify_task_type_name_lookup(void)
{
    const char requested_task_type_name[] = "SyntheticTask";
    const size_t task_type_name_size = sizeof(requested_task_type_name);
    uint32_t guest_task_type_name_address = gi_guest_heap_allocate(task_type_name_size, 1u);
    uint8_t* task_record = (uint8_t*)GI_PE_DATA_PTR(0x00af5f05u);
    uint32_t* task_type_name_entry = (uint32_t*)GI_PE_DATA_PTR(0x00af5ee0u);
    char* guest_task_type_name =
        (char*)GI_GUEST_MEMORY_PTR(guest_task_type_name_address, task_type_name_size);

    assert(guest_task_type_name_address != 0u);
    assert(guest_task_type_name != NULL);
    memset(gi_pe_data_image, 0, sizeof(gi_pe_data_image));
    memcpy(guest_task_type_name, requested_task_type_name, task_type_name_size);
    *task_type_name_entry = guest_task_type_name_address;
    *task_record = 1u;

    assert(QTask_QtaskTypeSNotDefined((char*)requested_task_type_name) == 0);
    gi_guest_heap_deallocate(guest_task_type_name_address);
}

int main(void)
{
    verify_task_event_slot_allocation();
    verify_task_type_name_lookup();
    verify_event_dispatch(QTask_RemoveEventCallback, 0x00567c6cu);
    verify_event_dispatch(QTask_TriggerEvent, 0x00567c70u);
    return 0;
}
