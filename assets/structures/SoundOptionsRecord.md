# SoundOptionsRecord

Kind: partial
Size: 0x102C
Root: 0x00BC25AC + 4140 * profileIndex
C++ type: IGI::SoundOptionsRecord
Status: PROVEN_STATIC

Per-profile sound settings with verified volume and enable/reverse-stereo fields.

## Proven fields

| Field | Offset | Type | Evidence |
|---|---|---|---|
| sfxVolume | 0x000 | float | 0x00404AE0, 0x00404B40 |
| musicVolume | 0x004 | float | 0x00404C40, 0x00404CA0 |
| sfxEnabled | 0x00C | uint8_t | 0x00404A10, 0x00404A90 |
| musicEnabled | 0x00D | uint8_t | 0x00404B90, 0x00404BF0 |
| speechEnabled | 0x00E | uint8_t | 0x00404CF0 |
| reverseStereo | 0x00F | uint8_t | 0x00404EB0 |

## Native references

0x00403E60, 0x00403EF0, 0x00403F80, 0x00404A10, 0x00404A90, 0x00404AE0, 0x00404B40, 0x00404B90, 0x00404BF0, 0x00404C40, 0x00404CA0, 0x00404CF0, 0x00404D50, 0x00404DA0, 0x00404E00, 0x00404E50, 0x00404EB0
