#pragma once
#include <stdint.h>
#include <stdbool.h>
/* 0x00401cf0 TaskType_IsDerivedFrom | CFG gate PASS score=1.000 BN(b=5,c=0) r2(b=5,c=0) */
bool TaskType_IsDerivedFrom(uint16_t typeId, uint16_t baseTypeId);
