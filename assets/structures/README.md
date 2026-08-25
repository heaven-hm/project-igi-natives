# IGI data types

Only fields, offsets, strides, and sizes directly supported by retail igi.exe machine code are typed. Opaque-pointer types record ABI boundaries without claiming an unproven object layout.

| Type | Kind | Size | Root | Native references |
|---|---|---|---|---|
| [ProfileRecord](ProfileRecord.md) | partial | 0xD14 | 0x00BC2388 + 0xD14 * activeIndex | 0x00403950, 0x00403B70, 0x00403E60, 0x00403EF0, 0x00403F80, 0x00404010, 0x00404080, 0x004040F0, 0x00404510, 0x00404590, 0x004045B0, 0x00404710, 0x004047F0, 0x004048B0, 0x00404910, 0x00404960, 0x004049C0, 0x00404A10, 0x00404A90, 0x00404AE0, 0x00404B40, 0x00404B90, 0x00404BF0, 0x00404C40, 0x00404CA0, 0x00404CF0, 0x00404D50, 0x00404DA0, 0x00404E00, 0x00404E50, 0x00404EB0, 0x00404F00, 0x00404F60, 0x00404FA0, 0x00405010, 0x00405050, 0x004050A0, 0x00405400, 0x004054F0, 0x00405530, 0x004055C0, 0x00405620, 0x00406220, 0x004B8A50 |
| [GraphicOptions](GraphicOptions.md) | overlay | 0x218+ | ProfileRecord + 0x0C | 0x00403950, 0x00403B70, 0x00404010, 0x00404080, 0x004040F0, 0x00404510, 0x00404590, 0x004045B0, 0x00404710, 0x004047F0, 0x004048B0, 0x00404910, 0x00404960, 0x004049C0, 0x00404F00, 0x00404F60, 0x00405530, 0x004055C0, 0x00405620 |
| [SoundOptionsRecord](SoundOptionsRecord.md) | partial | 0x102C | 0x00BC25AC + 4140 * profileIndex | 0x00403E60, 0x00403EF0, 0x00403F80, 0x00404A10, 0x00404A90, 0x00404AE0, 0x00404B40, 0x00404B90, 0x00404BF0, 0x00404C40, 0x00404CA0, 0x00404CF0, 0x00404D50, 0x00404DA0, 0x00404E00, 0x00404E50, 0x00404EB0 |
| [Soldier](Soldier.md) | partial | unknown | soldier pointer passed to 0x0045C440 | 0x0045C440, 0x00479990 |
| [HumanPlayer](HumanPlayer.md) | partial | unknown | DLL humanplayer pointer | 0x004109A0, 0x00412440, 0x004137A0, 0x00416D80, 0x0045FF80, 0x0045FFC0, 0x00463760, 0x004659E0, 0x004828D0 |
| [DisplayMode](DisplayMode.md) | partial | unknown | 0x00C28B40 | 0x00491A90, 0x00491CF0, 0x00491E70 |
| [TransContext](TransContext.md) | raw-copy | 0xA8 | 0x00BCAAE0 | 0x00497E70 |
| [TaskTypeRecord](TaskTypeRecord.md) | partial | 0x18 | 0x00AF5EE8 | 0x00401900, 0x00401B20, 0x00401CF0, 0x004B8810, 0x004D97F0, 0x004D9800, 0x004D9810, 0x004D9830, 0x004D9850, 0x004D9860, 0x004F0740, 0x004F0780, 0x004F0E90 |
| [WeaponEntityView](WeaponEntityView.md) | partial | 0x148 | entity returned by 0x00477C50 | 0x0045FF80, 0x0045FFC0, 0x00477C50 |
| [QFileAliasRecord](QFileAliasRecord.md) | opaque-stride | 0x94 | 0x00942330 | 0x004B1020, 0x004B11A0, 0x004B1510, 0x004B1620 |
| [QFileDeviceRecord](QFileDeviceRecord.md) | opaque-stride | 0x8C | 0x009437B8 | 0x004B1020, 0x004B11A0, 0x004B1510, 0x004B1620 |
| [SoundEventParams](SoundEventParams.md) | payload | 0x20 | third parameter to 0x004E7200 | 0x004E7200 |
| [CameraContext](CameraContext.md) | partial | unknown | camera context passed to Camera_SubmitFrame and Camera_ResetFrameCounters | 0x004828D0, 0x004D9870, 0x004D9950 |
| [AIContext](AIContext.md) | opaque-pointer | unknown | AI task/action context associated with the soldier task family | 0x0044D0E0, 0x0044D160, 0x0044D260, 0x0044D2C0, 0x0044D420, 0x0044D4A0, 0x0044D510, 0x0044D580, 0x0044D630, 0x0044D6E0, 0x0044D750, 0x0044D7D0, 0x0044D870, 0x0044D8F0, 0x0044D960, 0x0044DA00, 0x0044DA80, 0x0044DAE0, 0x0044DBC0, 0x0044DC40, 0x0044DCD0, 0x0044DD30, 0x0044DD90, 0x0044DDF0, 0x0044DE80, 0x0044DEE0, 0x0044DF40, 0x0044DFA0, 0x0044E000, 0x0044E060, 0x0044E0C0, 0x0044E150, 0x0044E1B0, 0x0044E210, 0x0044E270, 0x0044E2D0, 0x0044E330, 0x0044E390, 0x0044E3F0, 0x0044E430, 0x0044E470, 0x0044E4B0, 0x0044E4F0, 0x0044E5E0, 0x0044E6D0, 0x0044E740, 0x0044E790, 0x0044E800, 0x0044E860, 0x0044E930, 0x0044E9B0, 0x0044EAF0, 0x0044EBB0, 0x0044ECB0, 0x0044EE40, 0x0045C440 |
| [WeaponContext](WeaponContext.md) | opaque-pointer | unknown | weapon context passed to Weapon_FireUpdate and Weapon_FlameUpdate | 0x004071E0, 0x004101C0, 0x00410240, 0x00413B70, 0x00413BB0, 0x0045FF80, 0x0045FFC0, 0x004779E0, 0x00477C10, 0x00477C50, 0x00478900, 0x00479990 |
| [GameContext](GameContext.md) | opaque-pointer | unknown | pointer returned by Game_GetContext | 0x00402880, 0x004028D0, 0x004028F0 |
| [ScriptContext](ScriptContext.md) | opaque-pointer | unknown | pointer returned by Game_GetScriptContext | 0x00402890 |
| [CutsceneTask](CutsceneTask.md) | opaque-pointer | unknown | task pointer passed to CutScene_TaskUpdate | 0x004F4B00, 0x004F51D0 |
