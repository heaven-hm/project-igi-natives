# Structures Evidence Log — IGI_Structures.hpp

Every field in `IGI_Structures.hpp` mapped to the igi.exe machine code that proves it.
Binary: retail igi.exe (PE32, image base 0x400000). All addresses are VA.

## 1. ProfileRecord — stride 0xD14 (3348 B), accessor fcn.00406220

Root: `0xBC2388 + 0xD14 * [0xBC2384]`. Address algebra of 0x406220:
`((idx*3)<<3 - idx) * 3 * 5 * 4` = idx × 3348. Graphic sub-record view
(fcn.00404590) roots at `0xBC2394` = full record **+0x0C**; therefore every
graphic-sub-record offset below equals full-record offset +0x0C (both listed).

| Offset (full / gfx-view) | Field | Proof |
|---|---|---|
| +0x0C / +0x00 | width (default 640) | defaults-reset 0x403B70: `mov dword [eax+0xC], 0x280`; GetResolution 0x4045B0 reads `[rec+0x00]` after call 0x404590 |
| +0x10 / +0x04 | height (default 480) | 0x403B70: `mov dword [eax+0x10], 0x1E0`; 0x4045B0 reads `[rec+0x04]` |
| +0x14 / +0x08 | bpp (default 32) | 0x403B70: `mov dword [eax+0x14], 0x20`; SetResolution 0x404510 writes `(v>>26)&0x3F` to `[gfx+0x08]` |
| +0x18 / +0x0C | performanceFlags | SetPerfFlags 0x404F00: `mov [gfx+0x0C], esi`; GetPerfFlags 0x404F60 reads same; 0x403B70 zeroes it |
| +0x1C / +0x10 | transparency (byte, default 1) | SetTransparency 0x404960: `mov byte [gfx+0x10], bl`; GetTransparency 0x4049C0 `movsx`; 0x403B70 sets 1 |
| +0x1D, +0x1E | bool flags (default 1) | 0x403B70: `mov byte [eax+0x1D/0x1E], 1` (semantics TBD) |
| +0x11F | byte flag (default 0) | 0x403B70: `mov byte [eax+0x11F], 0` |
| +0x220 / +0x214 | gamma float (default 1.0f = 0x3F800000) | 0x403B70: `mov dword [eax+0x220], 0x3F800000`; menu setter 0x4048B0 stores arg at `[gfx+0x214]`; getter 0x404910 `fld dword [eax+0x214]` |

## 2. SoundOptionsRecord — stride 4140 (0x102C B), accessor fcn.00404A70

Address algebra: `(idx*23*3*5)*4 + 0xBC25AC` = base + 4140·idx.

| Offset | Field | Proof |
|---|---|---|
| +0x00 | sfxVolume (float) | GetSfxVolume 0x404B40: `fld dword [rec+0x00]`; SetSfxVolume 0x404AE0 stores float arg |
| +0x04 | musicVolume (float) | GetMusicVolume 0x404CA0: `fld dword [rec+0x04]` |
| +0x08..+0x0B | reserved (speech volume likely here — SpeechVol getter 0x404E00 reads [rec+0x00], re-check required before trusting) | flagged uncertain |
| +0x0C | sfxEnabled (byte) | 0x404A90 `movsx byte [rec+0x0C]`; setter pair |
| +0x0D | musicEnabled (byte) | 0x404BF0 `movsx byte [rec+0x0D]` |
| +0x0E | speechEnabled (byte) | SetSpeech 0x404CF0: `mov byte [rec+0x0E], bl` |
| +0x0F | reverseStereo (byte) | 0x404EB0 `movsx byte [rec+0x0F]` |

## 3. Soldier — entity ptr for SoldierExecute 0x45C440 and vtable .data 0x53EC90

Vtable family: 0x45C190, 0x45C1C0, 0x45C2E0, 0x45C330, 0x45C5A0, 0x45C650,
0x45C750, 0x45C8B0, 0x45CA50 (+ SoldierExecute 0x45C440 itself).

| Offset | Field | Proof |
|---|---|---|
| +0x68 | name/string area start | 0x45C440: `lea eax,[esi+0x68]` passed alongside soldier ptr (extent unmapped → declared as single-byte head + padding) |
| +0x254 | patrol/waypoint sub-struct base | 0x45C2E0: `lea eax,[esi+0x254]`, then reads `[eax+0x94]`, calls 0x489E10(eax, …) |
| +0x2EC | paramPtr slot | `lea edi,[esi+0x2ec]` @ 0x45D093 (SoldierExecute complex) |
| +0x33D | state flag byte (cleared on reset) | 0x45C1C0/0x45C2E0/0x45C330: `mov byte [esi+0x33D], 0` |
| +0x4C4 | objectRef passed to spawner | 0x45C440/0x45C5A0/0x45C650: `lea ebx,[esi+0x4C4]` → push → call 0x4F2060 |
| +0x696 | active/enable latch (0=off, 1=on) | 0x45C199 `mov byte [eax+0x696],0`; 0x45C2F2 `mov byte [esi+0x696],1`; 0x45CA5B `…,0` |
| +0x800 | pointer field | 0x45C44D: `mov ebp,[esi+0x800]` |
| +0xD0C | entity id (0xFFFFFFFF = unset) | 0x45C750: `cmp eax,0xFFFFFFFF; je skip` after loading `[esi+0xD0C]` |
| +0xD14 | dword (zeroed on reset) | 0x45C330: `mov dword [esi+0xD14], eax(0)` |
| +0xD1C | pointer field | 0x45C4DF: `mov ecx,[esi+0xD1C]` |

## 4. HumanPlayer

| Offset | Field | Proof |
|---|---|---|
| +0x1E4 | fovTangentH (float) | Human_TaskViewReset 0x4659E0: `fld qword [0x5335E8]; fptan; fstp dword [eax+0x1E4]` |
| +0x1E8 | fovTangentV (float) | same fn: `fld qword [0x5339C0]; fptan; fstp dword [eax+0x1E8]` |
| +0x1EC | scratch dword (zeroed) | 0x4659E0: `mov dword [eax+0x1EC], 0` |
| +0x4F0 | camValue | Human_ViewCam 0x463760: `mov ecx,[esp+4]; mov eax,[esp+8]; mov [ecx+0x4F0], eax; ret` (setter only) |
| +0x664 | scaled float A | 0x463770: `fld [eax+0x664]; fmul [0x533470]; fstp [eax+0x664]` (const ≈ 0.99) |
| +0x668 | scaled float B | 0x463786: identical pattern at +0x668 |

## 5. DisplayMode — instance at global 0xC28B40

Getter 0x491CF0 returns 0xC28B40. Setter 0x491A90 validates candidate fields by
comparing against global mirrors:

| Offset | Field | Proof (compare site in 0x491A90) |
|---|---|---|
| +0x04 | mode identity dword A | vs global 0xC28B44 |
| +0x08 | mode identity dword B | vs global 0xC28B48 |
| +0x10 | dword C | vs 0xC28B50 |
| +0x16 | flag byte | vs byte 0xC28B56 |
| +0x18 | dword D | vs 0xC28B58 |
| +0x1C | deviceName char[] (NUL-terminated) | `repne scasb` length pass @0x491AB1 + byte-compare loop vs 0xC28B5C (@0x491B23-0x491B3B) |

## 6. TransContext — global copy at 0xBCAAE0

Setter 0x497E70 copies exactly **0x2A dwords (168 bytes)** (`mov ecx,0x2A` +
dword loop) from source into 0xBCAAE0, then updates counters at 0x6E5BB0/B4.
Individual field semantics unmapped → declared as `uint32_t words[42]` with a
`static_assert(sizeof == 168)`.

## Confidence notes

- **High confidence**: ProfileRecord graphic fields, SoundOptions bytes,
  HumanPlayer FOV/cam fields, TransContext size, DisplayMode compare offsets —
  each backed by direct read/write instructions cited above.
- **Medium confidence**: Soldier fields (all backed by instruction operands, but
  semantic labels like "objectRef"/"paramPtr" are inferred from usage context).
- **Open questions**: speech-volume exact offset in SoundOptionsRecord; meanings
  of ProfileRecord +0x1D/+0x1E/+0x1F/+0x11F flags; Soldier +0x68 string extent.

## 7. TaskTypeRecord - 0x18-byte records rooted at 0xAF5EE8

`TaskType_IsDerivedFrom` at `0x00401CF0` scales the queried type id by
`0x18`, reads the parent id at the record base, and repeats until the retail
sentinel. `TaskType_Register` at `0x00401900` allocates and populates the same
task-type table. Only the parent field and stride are typed in C++; the rest is
opaque because the registration body writes several handler/config fields whose
individual meanings are not needed by the native wrapper.

## 8. WeaponEntityView - proven constructor offsets

`Weapon_EntityCreate` at `0x00477C50` validates a weapon type, allocates an
entity, initializes a byte at `+0xF1`, formats the weapon type into storage
beginning at `+0x104`, writes a word at `+0x124`, and stores a handler/context
value at `+0x144`. The formatted storage extent is not proven, so the C++ view
uses an opaque span and exposes only the byte, word, and dword with proven
offsets.

## 9. QFileAliasRecord and QFileDeviceRecord

`QFile_AliasResolve` at `0x004B1020` walks the alias table rooted at
`0x00942330` in `0x94`-byte records and resolves semicolon-separated aliases.
`QFile_DeviceIndex` at `0x004B11A0` walks the device table rooted at
`0x009437B8` in `0x8C`-byte records. The record sizes are proven by the index
arithmetic; field names are deliberately omitted until direct field uses are
mapped.

## 10. SoundEventParams - eight-word event payload

`Sound_EventTrigger` at `0x004E7200` receives a string, an event id/value, and a
pointer to an eight-dword parameter block. The dispatcher reads/copies this
payload while routing the event through active object handlers. The payload is
therefore represented as `SoundEventParams::words[8]`; per-event semantics are
not generalized.
