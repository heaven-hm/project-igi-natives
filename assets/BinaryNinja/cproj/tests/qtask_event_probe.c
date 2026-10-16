#include <stdint.h>
#include <stdio.h>
#include <string.h>

#include "gi_memory.h"

void QTask_OnEvent(void);

int main(void)
{
    const uint32_t first_event_address = 0x0054f932u;
    const uint32_t event_table_end_address = 0x0054ff26u;
    const size_t event_record_size = 6u;
    uint8_t* initialized_data = GI_PE_DATA_PTR(first_event_address - 1u);
    size_t initialized_data_size =
        (size_t)(event_table_end_address - first_event_address + 2u);
    memset(initialized_data, 0x7f, initialized_data_size);

    QTask_OnEvent();

    for (uint32_t guest_address = first_event_address;
         guest_address < event_table_end_address;
         guest_address += event_record_size)
    {
        const uint8_t* event_record = GI_PE_DATA_PTR(guest_address);
        if (event_record[0] != 0)
        {
            fprintf(stderr, "Event slot at 0x%08x was not cleared.\n", guest_address);
            return 1;
        }

        for (size_t field_index = 1; field_index < event_record_size; ++field_index)
        {
            if (event_record[field_index] != 0x7f)
            {
                fprintf(stderr,
                        "Event slot at 0x%08x changed byte %zu.\n",
                        guest_address,
                        field_index);
                return 1;
            }
        }
    }

    if (*((uint8_t*)GI_PE_DATA_PTR(first_event_address - 1u)) != 0x7f ||
        *((uint8_t*)GI_PE_DATA_PTR(event_table_end_address)) != 0x7f)
    {
        fprintf(stderr, "Event table clearing exceeded its verified bounds.\n");
        return 1;
    }

    puts("QTask event table clear matches the verified stride and bounds.");
    return 0;
}
