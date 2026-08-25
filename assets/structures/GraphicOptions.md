# GraphicOptions

Kind: overlay
Size: 0x218+
Root: ProfileRecord + 0x0C
C++ type: IGI::GraphicOptions
Status: PROVEN_STATIC

Graphics view overlay for width, height, device bits, performance flags, transparency, and gamma.

## Proven fields

| Field | Offset | Type | Evidence |
|---|---|---|---|
| width | 0x000 | uint32_t | 0x00404510, 0x004045B0 |
| height | 0x004 | uint32_t | 0x00404510, 0x004045B0 |
| deviceBits | 0x008 | uint32_t | 0x00404510 |
| performanceFlags | 0x00C | uint32_t | 0x00404F00, 0x00404F60 |
| transparency | 0x010 | uint8_t | 0x00404960, 0x004049C0 |
| gammaSetting | 0x214 | float | 0x004048B0, 0x00404910 |

## Native references

0x00403950, 0x00403B70, 0x00404010, 0x00404080, 0x004040F0, 0x00404510, 0x00404590, 0x004045B0, 0x00404710, 0x004047F0, 0x004048B0, 0x00404910, 0x00404960, 0x004049C0, 0x00404F00, 0x00404F60, 0x00405530, 0x004055C0, 0x00405620
