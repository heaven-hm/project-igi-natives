#pragma once
#include <stdint.h>
#include <stdbool.h>
/* 0x00477c50 Weapon_EntityCreate | CFG gate PASS score=1.000 BN(b=6,c=7) r2(b=6,c=7) */
WeaponEntityView* Weapon_EntityCreate(uint32_t p1, uint16_t objectType, uint32_t weaponType, uint32_t p4, uint8_t p5);
