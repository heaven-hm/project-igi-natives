#pragma once
#include <stdint.h>
/* 004B0B00 Sys_FreeMemory_2 | gate PASS | openigi False */
int Sys_FreeMemory_2(int* allocation_record,
                     int entry_size_bytes,
                     int entry_count,
                     int requested_alignment);
