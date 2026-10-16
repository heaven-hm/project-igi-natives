#include "gi_platform.h"
#include "004011D0-QTask_OnEvent.h"
void QTask_OnEvent(void)

{
    for (uint32_t guest_address = 0x0054f932u;
         guest_address < 0x0054ff26u;
         guest_address += 6u)
    {
        uint8_t* event_record = GI_PE_DATA_PTR(guest_address);
        event_record[0] = 0;
    }
}
