# Recovered IGI structures

Only offsets, strides, and sizes directly supported by retail machine code are typed; unknown bytes remain opaque.

| Structure | Kind | Size | Root | Evidence |
|---|---|---|---|---|
| [ProfileRecord](ProfileRecord.md) | `partial` | `0xD14` | `0x00BC2388 + 0xD14 * activeIndex` | `0x00406220`, `0x00403B70`, `0x00404590`, `0x004048B0` |
| [GraphicOptions](GraphicOptions.md) | `overlay` | `0x218+` | `ProfileRecord + 0x0C` | `0x00404590`, `0x00404510`, `0x004048B0`, `0x00404F00` |
| [SoundOptionsRecord](SoundOptionsRecord.md) | `partial` | `0x102C` | `0x00BC25AC + 4140 * profileIndex` | `0x00404A70`, `0x00404AE0`, `0x00404B40`, `0x00404CA0`, `0x00404CF0`, `0x00404EB0` |
| [Soldier](Soldier.md) | `partial` | `unknown` | `soldier pointer passed to 0x0045C440` | `0x0053EC90`, `0x0045C190`, `0x0045C440`, `0x0045C750` |
| [HumanPlayer](HumanPlayer.md) | `partial` | `unknown` | `DLL humanplayer pointer` | `0x00463760`, `0x004659E0`, `0x00463770` |
| [DisplayMode](DisplayMode.md) | `partial` | `unknown` | `0x00C28B40` | `0x00491CF0`, `0x00491A90` |
| [TransContext](TransContext.md) | `raw-copy` | `0xA8` | `0x00BCAAE0` | `0x00497E70`, `0x006E5BB0`, `0x006E5BB4` |
| [TaskTypeRecord](TaskTypeRecord.md) | `partial` | `0x18` | `0x00AF5EE8` | `0x00401CF0`, `0x00401900` |
| [WeaponEntityView](WeaponEntityView.md) | `partial` | `0x148` | `entity returned by 0x00477C50` | `0x00477C50` |
| [QFileAliasRecord](QFileAliasRecord.md) | `opaque-stride` | `0x94` | `0x00942330` | `0x004B1020` |
| [QFileDeviceRecord](QFileDeviceRecord.md) | `opaque-stride` | `0x8C` | `0x009437B8` | `0x004B11A0` |
| [SoundEventParams](SoundEventParams.md) | `payload` | `0x20` | `third parameter to 0x004E7200` | `0x004E7200` |
