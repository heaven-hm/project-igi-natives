# IGI native catalog

This directory contains one readable record per catalog native. The canonical source is ../IGINatives.json.

| Address | Name | Signature | Data types |
|---|---|---|---|
| 0x004EC070 | [AnimTrigger_ParseConfigFile](004EC070-AnimTrigger_ParseConfigFile.md) | void AnimTrigger_ParseConfigFile(uint* path) | scalar/opaque ABI only |
| 0x004B83D0 | [Qvm_Cleanup](004B83D0-Qvm_Cleanup.md) | void Qvm_Cleanup(void* qvm) | scalar/opaque ABI only |
| 0x004F0CF0 | [Config_Compile](004F0CF0-Config_Compile.md) | int Config_Compile(int context, char* cfgName, int flags) | scalar/opaque ABI only |
| 0x00405850 | [Config_Read](00405850-Config_Read.md) | int Config_Read(char* cfg_file) | scalar/opaque ABI only |
| 0x00405BD0 | [Config_Write](00405BD0-Config_Write.md) | void Config_Write(char* cfg_file) | scalar/opaque ABI only |
| 0x00415AB0 | [Game_CutsceneDelete](00415AB0-Game_CutsceneDelete.md) | void Game_CutsceneDelete(void) | scalar/opaque ABI only |
| 0x004AF7B0 | [Error_Show](004AF7B0-Error_Show.md) | void Error_Show(char* format, ...) | scalar/opaque ABI only |
| 0x00402820 | [Frames_Set](00402820-Frames_Set.md) | void Frames_Set(int frames) | scalar/opaque ABI only |
| 0x00408350 | [GameMaterial_LoadParameters](00408350-GameMaterial_LoadParameters.md) | void GameMaterial_LoadParameters(void) | scalar/opaque ABI only |
| 0x00403B70 | [Config_ResetGraphicOptions](00403B70-Config_ResetGraphicOptions.md) | void Config_ResetGraphicOptions() | GraphicOptions, ProfileRecord |
| 0x004F9FF0 | [Graph_Open](004F9FF0-Graph_Open.md) | void Graph_Open(uint level,char* graph_str) | scalar/opaque ABI only |
| 0x004137A0 | [HumanPlayer_LoadParameters](004137A0-HumanPlayer_LoadParameters.md) | void HumanPlayer_LoadParameters(void) | HumanPlayer |
| 0x004157D0 | [Game_DisablePlayerInput](004157D0-Game_DisablePlayerInput.md) | void Game_DisablePlayerInput(void) | scalar/opaque ABI only |
| 0x00415830 | [Game_EnablePlayerInput](00415830-Game_EnablePlayerInput.md) | void Game_EnablePlayerInput(void) | scalar/opaque ABI only |
| 0x004BBC30 | [Log_Add](004BBC30-Log_Add.md) | void Log_Add(char* format, ...) | scalar/opaque ABI only |
| 0x004F0E10 | [Level_LoadObjects](004F0E10-Level_LoadObjects.md) | void Level_LoadObjects(int level_path,int level_len) | scalar/opaque ABI only |
| 0x00416550 | [Game_DeleteHandler](00416550-Game_DeleteHandler.md) | void Game_DeleteHandler(void) | scalar/opaque ABI only |
| 0x00416FE0 | [Game_Restart](00416FE0-Game_Restart.md) | void Game_Restart(void) | scalar/opaque ABI only |
| 0x00415B30 | [Level_Start](00415B30-Level_Start.md) | void Level_Start(int p1) | scalar/opaque ABI only |
| 0x00418B00 | [Menu_Manager](00418B00-Menu_Manager.md) | int* Menu_Manager(int p1,char *menu_str,char p3,char p4,int p5) | scalar/opaque ABI only |
| 0x00415A60 | [Game_DisableMusic](00415A60-Game_DisableMusic.md) | void Game_DisableMusic(void) | scalar/opaque ABI only |
| 0x00415A10 | [Game_EnableMusic](00415A10-Game_EnableMusic.md) | void Game_EnableMusic(void) | scalar/opaque ABI only |
| 0x00495F30 | [Music_SetSfxVolume](00495F30-Music_SetSfxVolume.md) | void Music_SetSfxVolume(float volume) | scalar/opaque ABI only |
| 0x00495E70 | [Music_SetVolume](00495E70-Music_SetVolume.md) | void Music_SetVolume(float volume1,float volume2) | scalar/opaque ABI only |
| 0x004158E0 | [Game_UpdateVolume](004158E0-Game_UpdateVolume.md) | void Game_UpdateVolume(void) | scalar/opaque ABI only |
| 0x004EDFE0 | [PhysicsObjType_ParseConfigFile](004EDFE0-PhysicsObjType_ParseConfigFile.md) | void PhysicsObjType_ParseConfigFile(char* cfg_file) | scalar/opaque ABI only |
| 0x004B0D60 | [Qhash_Init](004B0D60-Qhash_Init.md) | void Qhash_Init(char hash_val) | scalar/opaque ABI only |
| 0x004B0D90 | [Qhash_Reset](004B0D90-Qhash_Reset.md) | void Qhash_Reset(void) | scalar/opaque ABI only |
| 0x004B8410 | [Qsc_Compile](004B8410-Qsc_Compile.md) | int Qsc_Compile(char* qscPath) | scalar/opaque ABI only |
| 0x004F0E90 | [Qtask_Update](004F0E90-Qtask_Update.md) | void Qtask_Update(void) | TaskTypeRecord |
| 0x00401B20 | [Qtask_UpdateList](00401B20-Qtask_UpdateList.md) | void Qtask_UpdateList(int* p1) | TaskTypeRecord |
| 0x004BB270 | [QScript_Assemble](004BB270-QScript_Assemble.md) | int QScript_Assemble(char* srcText, int srcLen2) | scalar/opaque ABI only |
| 0x004B85B0 | [Qvm_Execute](004B85B0-Qvm_Execute.md) | int Qvm_Execute(void* qvm) | scalar/opaque ABI only |
| 0x004B80B0 | [Qvm_Load](004B80B0-Qvm_Load.md) | int* Qvm_Load(char* qvmPath) | scalar/opaque ABI only |
| 0x004BBCB0 | [QScript_ParseAndAssemble](004BBCB0-QScript_ParseAndAssemble.md) | int QScript_ParseAndAssemble(char* srcText, int options) | scalar/opaque ABI only |
| 0x004B63D0 | [Resource_Flush](004B63D0-Resource_Flush.md) | void Resource_Flush(void* resEntry) | scalar/opaque ABI only |
| 0x004B5F00 | [Resource_Load](004B5F00-Resource_Load.md) | int* Resource_Load(char* resourcePath, char** outBuffer) | scalar/opaque ABI only |
| 0x004B6380 | [Resource_Unload](004B6380-Resource_Unload.md) | void Resource_Unload(int *resource_file) | scalar/opaque ABI only |
| 0x004B5B90 | [Is_ResourceLoaded](004B5B90-Is_ResourceLoaded.md) | int Is_ResourceLoaded(char* resourcePath, char** outEntry) | scalar/opaque ABI only |
| 0x004B18B0 | [Resource_PackUnpack](004B18B0-Resource_PackUnpack.md) | int Resource_PackUnpack(char* resFile, char** outBuffer) | scalar/opaque ABI only |
| 0x004B16D0 | [Resource_Unpack](004B16D0-Resource_Unpack.md) | int Resource_Unpack(int* resPtr, int destAddr, int resSize) | scalar/opaque ABI only |
| 0x004F0E50 | [Script_Init](004F0E50-Script_Init.md) | void Script_Init(char* file_name,int8_t p2,int p3,int8_t p4) | scalar/opaque ABI only |
| 0x004B8930 | [Script_SetSymbolContext](004B8930-Script_SetSymbolContext.md) | void Script_SetSymbolContext(byte *symbol_name,int** symbol_buf) | scalar/opaque ABI only |
| 0x00485AD0 | [StatusMessageScreen_ClearMessages](00485AD0-StatusMessageScreen_ClearMessages.md) | void StatusMessageScreen_ClearMessages(void) | scalar/opaque ABI only |
| 0x00485970 | [StatusMessage_ShowFull](00485970-StatusMessage_ShowFull.md) | void StatusMessage_ShowFull(int timer, char* message, char* sprite, int styleByte) | scalar/opaque ABI only |
| 0x004C0460 | [Symbol_Remove](004C0460-Symbol_Remove.md) | int Symbol_Remove(int* symTable, char* symName) | scalar/opaque ABI only |
| 0x004B8810 | [TaskType_Set](004B8810-TaskType_Set.md) | void TaskType_Set(int** taskDef, int taskTypeId) | TaskTypeRecord |
| 0x004AF810 | [Warning_Show](004AF810-Warning_Show.md) | void Warning_Show(char* format, ...) | scalar/opaque ABI only |
| 0x004071E0 | [Weapon_ConfigRead](004071E0-Weapon_ConfigRead.md) | int Weapon_ConfigRead(int context, char* cfgText) | WeaponContext |
| 0x004C0560 | [Symbol_CheckRegister](004C0560-Symbol_CheckRegister.md) | void* Symbol_CheckRegister(int* symTable, char* symName, int extra) | scalar/opaque ABI only |
| 0x004B8890 | [Game_DefineOptions](004B8890-Game_DefineOptions.md) | void Game_DefineOptions(int **option_str,int option_func_addr,int opt1,int opt2) | scalar/opaque ABI only |
| 0x004C0200 | [Script_BufInit](004C0200-Script_BufInit.md) | void Script_BufInit(int* outBuf1, int buf2, int buf3, int bufSize) | scalar/opaque ABI only |
| 0x004E68D0 | [Sound_Load](004E68D0-Sound_Load.md) | void Sound_Load(char *sound_dir) | scalar/opaque ABI only |
| 0x004B0C60 | [Mem_Alloc](004B0C60-Mem_Alloc.md) | void* Mem_Alloc(int numBytes,int tag) | scalar/opaque ABI only |
| 0x004B0BE0 | [Mem_DeallocAll](004B0BE0-Mem_DeallocAll.md) | void Mem_DeallocAll(void) | scalar/opaque ABI only |
| 0x00484E60 | [Mission_Open](00484E60-Mission_Open.md) | void Mission_Open(char **ptr_file) | scalar/opaque ABI only |
| 0x004A5350 | [File_Open](004A5350-File_Open.md) | void* File_Open(char* path, char* mode) | scalar/opaque ABI only |
| 0x004B1510 | [QFile_ReadWrite](004B1510-QFile_ReadWrite.md) | void* QFile_ReadWrite(char* vpath, char* mode) | QFileAliasRecord, QFileDeviceRecord |
| 0x004C48E0 | [Rigid_DyncubeObjRead](004C48E0-Rigid_DyncubeObjRead.md) | void Rigid_DyncubeObjRead(uint *cfg_file) | scalar/opaque ABI only |
| 0x004C4930 | [Magic_ObjLoad](004C4930-Magic_ObjLoad.md) | void Magic_ObjLoad(char *path) | scalar/opaque ABI only |
| 0x004EC0C0 | [Anim_TriggerLoad](004EC0C0-Anim_TriggerLoad.md) | void Anim_TriggerLoad(char *path) | scalar/opaque ABI only |
| 0x004EE030 | [Physics_ObjLoad](004EE030-Physics_ObjLoad.md) | void Physics_ObjLoad(char *path) | scalar/opaque ABI only |
| 0x0047CAB0 | [Ammo_TypeOpen](0047CAB0-Ammo_TypeOpen.md) | void Ammo_TypeOpen(void) | scalar/opaque ABI only |
| 0x00413B70 | [Weapon_TypeOpen](00413B70-Weapon_TypeOpen.md) | void Weapon_TypeOpen(void) | WeaponContext |
| 0x004A53B3 | [Game_DataSymbolLoad](004A53B3-Game_DataSymbolLoad.md) | int Game_DataSymbolLoad(char* symBuf, char* symPath, char* symName) | scalar/opaque ABI only |
| 0x004B80A0 | [Game_DataSymbolRemoveThunk](004B80A0-Game_DataSymbolRemoveThunk.md) | void* Game_DataSymbolRemoveThunk(char* symBuf) | scalar/opaque ABI only |
| 0x004B7EE0 | [SymbolRegister_Bool8](004B7EE0-SymbolRegister_Bool8.md) | void* SymbolRegister_Bool8(int* table, char* name) | scalar/opaque ABI only |
| 0x004B7E80 | [SymbolRegister_Int16](004B7E80-SymbolRegister_Int16.md) | void* SymbolRegister_Int16(int* table, char* name) | scalar/opaque ABI only |
| 0x004B7FA0 | [SymbolRegister_Int32](004B7FA0-SymbolRegister_Int32.md) | void* SymbolRegister_Int32(int* table, char* name) | scalar/opaque ABI only |
| 0x004B7FC0 | [SymbolRegister_Real32](004B7FC0-SymbolRegister_Real32.md) | void* SymbolRegister_Real32(int* table, char* name) | scalar/opaque ABI only |
| 0x0048A440 | [LoadingScreen_Show](0048A440-LoadingScreen_Show.md) | void LoadingScreen_Show(int picVariant) | scalar/opaque ABI only |
| 0x004BAAC0 | [Q_TaskHashTableSet](004BAAC0-Q_TaskHashTableSet.md) | void Q_TaskHashTableSet(int** table, void* handler, int nameVal, int p4, int p5, int p6, int p7) | scalar/opaque ABI only |
| 0x00413BB0 | [Weapons_CountGet](00413BB0-Weapons_CountGet.md) | int Weapons_CountGet() | WeaponContext |
| 0x0045FFC0 | [Weapon_GunPickup](0045FFC0-Weapon_GunPickup.md) | void Weapon_GunPickup(void* player, void* pickupEntity) | HumanPlayer, WeaponContext, WeaponEntityView |
| 0x0045FF80 | [Weapon_AmmoPickup](0045FF80-Weapon_AmmoPickup.md) | void Weapon_AmmoPickup(void* player, void* pickupEntity) | HumanPlayer, WeaponContext, WeaponEntityView |
| 0x00416D80 | [Human_HitDamage](00416D80-Human_HitDamage.md) | uint Human_HitDamage(void) | HumanPlayer |
| 0x00463760 | [Human_ViewCam](00463760-Human_ViewCam.md) | void Human_ViewCam(HumanPlayer* human, int camValue) | HumanPlayer |
| 0x004659E0 | [Human_TaskViewReset](004659E0-Human_TaskViewReset.md) | void Human_TaskViewReset(HumanPlayer* human) | HumanPlayer |
| 0x00406220 | [Config_GetActivePlayerProfileRecord](00406220-Config_GetActivePlayerProfileRecord.md) | ProfileRecord* Config_GetActivePlayerProfileRecord() | ProfileRecord |
| 0x0045C440 | [Soldier_Execute](0045C440-Soldier_Execute.md) | void Soldier_Execute(void* context, Soldier* soldierPtr) | AIContext, Soldier |
| 0x00402780 | [Flow_RequestEvent](00402780-Flow_RequestEvent.md) | void Flow_RequestEvent(int eventId) | scalar/opaque ABI only |
| 0x004036B0 | [GO_Player](004036B0-GO_Player.md) | int GO_Player(char* name) | scalar/opaque ABI only |
| 0x004037C0 | [GO_InRemap](004037C0-GO_InRemap.md) | int GO_InRemap(int key1, int key2, int action) | scalar/opaque ABI only |
| 0x00403870 | [GO_InMouInv](00403870-GO_InMouInv.md) | int GO_InMouInv(int invert) | scalar/opaque ABI only |
| 0x004038E0 | [GO_InMouSens](004038E0-GO_InMouSens.md) | float GO_InMouSens(float sensitivity) | scalar/opaque ABI only |
| 0x00403950 | [GO_GfxDisp](00403950-GO_GfxDisp.md) | int GO_GfxDisp(int displayMode) | GraphicOptions, ProfileRecord |
| 0x00404010 | [GO_GfxDevice](00404010-GO_GfxDevice.md) | int GO_GfxDevice(int deviceIndex) | GraphicOptions, ProfileRecord |
| 0x00404080 | [GO_GfxGamma](00404080-GO_GfxGamma.md) | int GO_GfxGamma(float gamma) | GraphicOptions, ProfileRecord |
| 0x00403A00 | [GO_GameLang](00403A00-GO_GameLang.md) | int GO_GameLang(int language) | scalar/opaque ABI only |
| 0x00403AC0 | [GO_GameDiff](00403AC0-GO_GameDiff.md) | int GO_GameDiff(int difficulty) | scalar/opaque ABI only |
| 0x00403DF0 | [GO_IsBlood](00403DF0-GO_IsBlood.md) | int GO_IsBlood(int blood) | scalar/opaque ABI only |
| 0x00403E60 | [GO_SoundSpeech](00403E60-GO_SoundSpeech.md) | int GO_SoundSpeech(float volume) | ProfileRecord, SoundOptionsRecord |
| 0x00403EF0 | [GO_SoundMusic](00403EF0-GO_SoundMusic.md) | int GO_SoundMusic(float volume) | ProfileRecord, SoundOptionsRecord |
| 0x00403F80 | [GO_SoundFX](00403F80-GO_SoundFX.md) | int GO_SoundFX(float volume) | ProfileRecord, SoundOptionsRecord |
| 0x004040F0 | [GO_GfxPerformance](004040F0-GO_GfxPerformance.md) | int GO_GfxPerformance(int flags) | GraphicOptions, ProfileRecord |
| 0x00403750 | [GO_ActiveMission](00403750-GO_ActiveMission.md) | int GO_ActiveMission(int mission) | scalar/opaque ABI only |
| 0x00403C10 | [GO_ContentControlPW](00403C10-GO_ContentControlPW.md) | int GO_ContentControlPW(char* password) | scalar/opaque ABI only |
| 0x00404FA0 | [Config_FillPlayerProfileListBox](00404FA0-Config_FillPlayerProfileListBox.md) | void Config_FillPlayerProfileListBox() | ProfileRecord |
| 0x00405010 | [Config_GetActivePlayerProfileIndex](00405010-Config_GetActivePlayerProfileIndex.md) | int Config_GetActivePlayerProfileIndex() | ProfileRecord |
| 0x00405050 | [Config_SetActivePlayerProfileIndex](00405050-Config_SetActivePlayerProfileIndex.md) | void Config_SetActivePlayerProfileIndex(int index) | ProfileRecord |
| 0x004050A0 | [Config_CreateNewPlayerProfile](004050A0-Config_CreateNewPlayerProfile.md) | int Config_CreateNewPlayerProfile(char* name, int sourceIndex) | ProfileRecord |
| 0x00405400 | [Config_DeletePlayerProfile](00405400-Config_DeletePlayerProfile.md) | int Config_DeletePlayerProfile(int index) | ProfileRecord |
| 0x004057D0 | [Config_PlayerGetActiveMission](004057D0-Config_PlayerGetActiveMission.md) | int Config_PlayerGetActiveMission(int profileIndex) | scalar/opaque ABI only |
| 0x004054F0 | [Config_GetNumberOfPlayerProfiles](004054F0-Config_GetNumberOfPlayerProfiles.md) | int Config_GetNumberOfPlayerProfiles() | ProfileRecord |
| 0x00405660 | [Config_FillMissionSelectionBox](00405660-Config_FillMissionSelectionBox.md) | void Config_FillMissionSelectionBox() | scalar/opaque ABI only |
| 0x004056F0 | [Config_FillMissionPictureBox](004056F0-Config_FillMissionPictureBox.md) | void Config_FillMissionPictureBox() | scalar/opaque ABI only |
| 0x00405760 | [Config_FillMissionTextBox](00405760-Config_FillMissionTextBox.md) | void Config_FillMissionTextBox() | scalar/opaque ABI only |
| 0x00404450 | [Config_FillScreenResolutionListBox](00404450-Config_FillScreenResolutionListBox.md) | void Config_FillScreenResolutionListBox(int deviceIndex) | scalar/opaque ABI only |
| 0x004046A0 | [Config_FillRenderDeviceListBox](004046A0-Config_FillRenderDeviceListBox.md) | void Config_FillRenderDeviceListBox() | scalar/opaque ABI only |
| 0x004041D0 | [Config_GameOptionsInputGetInvertMouse](004041D0-Config_GameOptionsInputGetInvertMouse.md) | int Config_GameOptionsInputGetInvertMouse() | scalar/opaque ABI only |
| 0x00404290 | [Config_GameOptionsInputGetMouseSensitivity](00404290-Config_GameOptionsInputGetMouseSensitivity.md) | int Config_GameOptionsInputGetMouseSensitivity() | scalar/opaque ABI only |
| 0x00404340 | [Config_GameOptionsInputGetBloodEnabled](00404340-Config_GameOptionsInputGetBloodEnabled.md) | int Config_GameOptionsInputGetBloodEnabled() | scalar/opaque ABI only |
| 0x00404160 | [Config_GameOptionsInputSetInvertMouse](00404160-Config_GameOptionsInputSetInvertMouse.md) | void Config_GameOptionsInputSetInvertMouse(int invert) | scalar/opaque ABI only |
| 0x00404230 | [Config_GameOptionsInputSetMouseSensitivity](00404230-Config_GameOptionsInputSetMouseSensitivity.md) | void Config_GameOptionsInputSetMouseSensitivity(int value) | scalar/opaque ABI only |
| 0x004042E0 | [Config_GameOptionsInputSetBloodEnabled](004042E0-Config_GameOptionsInputSetBloodEnabled.md) | void Config_GameOptionsInputSetBloodEnabled(int blood) | scalar/opaque ABI only |
| 0x00404510 | [Config_GraphicOptionsSetResolution](00404510-Config_GraphicOptionsSetResolution.md) | void Config_GraphicOptionsSetResolution(int modeIndex) | GraphicOptions, ProfileRecord |
| 0x00404960 | [Config_GraphicOptionsSetTransparency](00404960-Config_GraphicOptionsSetTransparency.md) | void Config_GraphicOptionsSetTransparency(int onOff) | GraphicOptions, ProfileRecord |
| 0x004047F0 | [Config_GraphicOptionsSetDevice](004047F0-Config_GraphicOptionsSetDevice.md) | void Config_GraphicOptionsSetDevice(int deviceIndex) | GraphicOptions, ProfileRecord |
| 0x00404F00 | [Config_GraphicOptionsSetPerformanceFlags](00404F00-Config_GraphicOptionsSetPerformanceFlags.md) | void Config_GraphicOptionsSetPerformanceFlags(int flags) | GraphicOptions, ProfileRecord |
| 0x004045B0 | [Config_GraphicOptionsGetResolution](004045B0-Config_GraphicOptionsGetResolution.md) | int Config_GraphicOptionsGetResolution() | GraphicOptions, ProfileRecord |
| 0x004049C0 | [Config_GraphicOptionsGetTransparency](004049C0-Config_GraphicOptionsGetTransparency.md) | int Config_GraphicOptionsGetTransparency() | GraphicOptions, ProfileRecord |
| 0x00404710 | [Config_GraphicOptionsGetDevice](00404710-Config_GraphicOptionsGetDevice.md) | int Config_GraphicOptionsGetDevice() | GraphicOptions, ProfileRecord |
| 0x00404910 | [Config_GraphicOptionsGetGamma](00404910-Config_GraphicOptionsGetGamma.md) | float Config_GraphicOptionsGetGamma() | GraphicOptions, ProfileRecord |
| 0x00404F60 | [Config_GraphicOptionsGetPerformanceFlags](00404F60-Config_GraphicOptionsGetPerformanceFlags.md) | int Config_GraphicOptionsGetPerformanceFlags() | GraphicOptions, ProfileRecord |
| 0x004055C0 | [Config_GraphicOptionsGetPerfFlagsFromLevel](004055C0-Config_GraphicOptionsGetPerfFlagsFromLevel.md) | int Config_GraphicOptionsGetPerfFlagsFromLevel(int level) | GraphicOptions, ProfileRecord |
| 0x00405530 | [Config_GraphicOptionsGetPerfLevelFromFlags](00405530-Config_GraphicOptionsGetPerfLevelFromFlags.md) | int Config_GraphicOptionsGetPerfLevelFromFlags(int flags) | GraphicOptions, ProfileRecord |
| 0x00405620 | [Config_GraphicOptionsNumPerfLevels](00405620-Config_GraphicOptionsNumPerfLevels.md) | int Config_GraphicOptionsNumPerfLevels() | GraphicOptions, ProfileRecord |
| 0x00404A10 | [Config_SoundOptionsSetSoundsEffects](00404A10-Config_SoundOptionsSetSoundsEffects.md) | void Config_SoundOptionsSetSoundsEffects(int onOff) | ProfileRecord, SoundOptionsRecord |
| 0x00404AE0 | [Config_SoundOptionsSetSoundsEffectsVolume](00404AE0-Config_SoundOptionsSetSoundsEffectsVolume.md) | void Config_SoundOptionsSetSoundsEffectsVolume(float volume) | ProfileRecord, SoundOptionsRecord |
| 0x00404B90 | [Config_SoundOptionsSetMusic](00404B90-Config_SoundOptionsSetMusic.md) | void Config_SoundOptionsSetMusic(int onOff) | ProfileRecord, SoundOptionsRecord |
| 0x00404C40 | [Config_SoundOptionsSetMusicVolume](00404C40-Config_SoundOptionsSetMusicVolume.md) | void Config_SoundOptionsSetMusicVolume(float volume) | ProfileRecord, SoundOptionsRecord |
| 0x00404CF0 | [Config_SoundOptionsSetSpeech](00404CF0-Config_SoundOptionsSetSpeech.md) | void Config_SoundOptionsSetSpeech(int onOff) | ProfileRecord, SoundOptionsRecord |
| 0x00404DA0 | [Config_SoundOptionsSetSpeechVolume](00404DA0-Config_SoundOptionsSetSpeechVolume.md) | void Config_SoundOptionsSetSpeechVolume(float volume) | ProfileRecord, SoundOptionsRecord |
| 0x00404E50 | [Config_SoundOptionsSetReverseStereo](00404E50-Config_SoundOptionsSetReverseStereo.md) | void Config_SoundOptionsSetReverseStereo(int onOff) | ProfileRecord, SoundOptionsRecord |
| 0x00404A90 | [Config_SoundOptionsGetSoundsEffects](00404A90-Config_SoundOptionsGetSoundsEffects.md) | int Config_SoundOptionsGetSoundsEffects() | ProfileRecord, SoundOptionsRecord |
| 0x00404B40 | [Config_SoundOptionsGetSoundsEffectsVolume](00404B40-Config_SoundOptionsGetSoundsEffectsVolume.md) | float Config_SoundOptionsGetSoundsEffectsVolume() | ProfileRecord, SoundOptionsRecord |
| 0x00404BF0 | [Config_SoundOptionsGetMusic](00404BF0-Config_SoundOptionsGetMusic.md) | int Config_SoundOptionsGetMusic() | ProfileRecord, SoundOptionsRecord |
| 0x00404CA0 | [Config_SoundOptionsGetMusicVolume](00404CA0-Config_SoundOptionsGetMusicVolume.md) | float Config_SoundOptionsGetMusicVolume() | ProfileRecord, SoundOptionsRecord |
| 0x00404D50 | [Config_SoundOptionsGetSpeech](00404D50-Config_SoundOptionsGetSpeech.md) | int Config_SoundOptionsGetSpeech() | ProfileRecord, SoundOptionsRecord |
| 0x00404E00 | [Config_SoundOptionsGetSpeechVolume](00404E00-Config_SoundOptionsGetSpeechVolume.md) | float Config_SoundOptionsGetSpeechVolume() | ProfileRecord, SoundOptionsRecord |
| 0x00404EB0 | [Config_SoundOptionsGetReverseStereo](00404EB0-Config_SoundOptionsGetReverseStereo.md) | int Config_SoundOptionsGetReverseStereo() | ProfileRecord, SoundOptionsRecord |
| 0x00403C10 | [Config_SetContentControlPassword](00403C10-Config_SetContentControlPassword.md) | int Config_SetContentControlPassword() | scalar/opaque ABI only |
| 0x00403C70 | [Config_GetContentControlPassword](00403C70-Config_GetContentControlPassword.md) | char* Config_GetContentControlPassword() | scalar/opaque ABI only |
| 0x00403CC0 | [Config_VerifyContentControlPassword](00403CC0-Config_VerifyContentControlPassword.md) | int Config_VerifyContentControlPassword(char* password) | scalar/opaque ABI only |
| 0x00403D90 | [Config_IsContentControlPasswordEnabled](00403D90-Config_IsContentControlPasswordEnabled.md) | int Config_IsContentControlPasswordEnabled() | scalar/opaque ABI only |
| 0x00403B30 | [Config_IsGermany](00403B30-Config_IsGermany.md) | int Config_IsGermany() | scalar/opaque ABI only |
| 0x00407E30 | [DefineQ_Material](00407E30-DefineQ_Material.md) | void DefineQ_Material(...) | scalar/opaque ABI only |
| 0x00407F50 | [Define_GameMaterial](00407F50-Define_GameMaterial.md) | void Define_GameMaterial(...) | scalar/opaque ABI only |
| 0x004101C0 | [Define_HumanPlayerWeaponCycle](004101C0-Define_HumanPlayerWeaponCycle.md) | void Define_HumanPlayerWeaponCycle(...) | WeaponContext |
| 0x00410240 | [Define_HumanPlayerWeaponCategory](00410240-Define_HumanPlayerWeaponCategory.md) | void Define_HumanPlayerWeaponCategory(...) | WeaponContext |
| 0x004102D0 | [Define_HumanPlayerAmmoLimit](004102D0-Define_HumanPlayerAmmoLimit.md) | void Define_HumanPlayerAmmoLimit(...) | scalar/opaque ABI only |
| 0x004151E0 | [MovieSubtitle_RegisterFont](004151E0-MovieSubtitle_RegisterFont.md) | void MovieSubtitle_RegisterFont(...) | scalar/opaque ABI only |
| 0x00415260 | [MovieSubtitle_RegisterText](00415260-MovieSubtitle_RegisterText.md) | void MovieSubtitle_RegisterText(...) | scalar/opaque ABI only |
| 0x00415890 | [Game_SetMission](00415890-Game_SetMission.md) | void Game_SetMission(int mission) | scalar/opaque ABI only |
| 0x00415950 | [Game_SetMusicVolume](00415950-Game_SetMusicVolume.md) | void Game_SetMusicVolume(float volume) | scalar/opaque ABI only |
| 0x004159B0 | [Game_SetSFXVolume](004159B0-Game_SetSFXVolume.md) | void Game_SetSFXVolume(float volume) | scalar/opaque ABI only |
| 0x004174A0 | [MenuManager_RequestScreen](004174A0-MenuManager_RequestScreen.md) | void MenuManager_RequestScreen(int screenId, int flags) | scalar/opaque ABI only |
| 0x00417790 | [MenuManager_LeaveMenus](00417790-MenuManager_LeaveMenus.md) | void MenuManager_LeaveMenus(int param1, int param2) | scalar/opaque ABI only |
| 0x00417810 | [MenuManager_SetLanguage](00417810-MenuManager_SetLanguage.md) | void MenuManager_SetLanguage(int langIndex) | scalar/opaque ABI only |
| 0x00417690 | [MenuManager_PushScreen](00417690-MenuManager_PushScreen.md) | void MenuManager_PushScreen(int screenId) | scalar/opaque ABI only |
| 0x00417710 | [MenuManager_PopScreen](00417710-MenuManager_PopScreen.md) | void MenuManager_PopScreen(int param) | scalar/opaque ABI only |
| 0x00417880 | [MenuManager_ForceUpdateWindow](00417880-MenuManager_ForceUpdateWindow.md) | void MenuManager_ForceUpdateWindow(int param) | scalar/opaque ABI only |
| 0x00417900 | [MenuManager_ActivatePopupScreen](00417900-MenuManager_ActivatePopupScreen.md) | void MenuManager_ActivatePopupScreen(int popupId) | scalar/opaque ABI only |
| 0x00417960 | [MenuManager_DeactivatePopuScreen](00417960-MenuManager_DeactivatePopuScreen.md) | void MenuManager_DeactivatePopuScreen() | scalar/opaque ABI only |
| 0x004179B0 | [MenuManager_SetEnabled](004179B0-MenuManager_SetEnabled.md) | void MenuManager_SetEnabled(int enabled) | scalar/opaque ABI only |
| 0x004231E0 | [ControlsMenu_ConvertFloatFromOffset](004231E0-ControlsMenu_ConvertFloatFromOffset.md) | float ControlsMenu_ConvertFloatFromOffset(int offset) | scalar/opaque ABI only |
| 0x00423240 | [ControlsMenu_ConvertOffsetFromFloat](00423240-ControlsMenu_ConvertOffsetFromFloat.md) | int ControlsMenu_ConvertOffsetFromFloat(float value) | scalar/opaque ABI only |
| 0x0044D0E0 | [AIAction_Patrol](0044D0E0-AIAction_Patrol.md) | void AIAction_Patrol(int target, int mustBeZero, int flags) | AIContext |
| 0x0044D160 | [AIAction_Combat](0044D160-AIAction_Combat.md) | void AIAction_Combat(int param) | AIContext |
| 0x0044D260 | [AIAction_Dead](0044D260-AIAction_Dead.md) | void AIAction_Dead(int param) | AIContext |
| 0x0044D2C0 | [AIAction_FallFlat](0044D2C0-AIAction_FallFlat.md) | void AIAction_FallFlat(int param1, int param2) | AIContext |
| 0x0044D420 | [AIAction_Activate](0044D420-AIAction_Activate.md) | void AIAction_Activate(int target, int param2, int flags) | AIContext |
| 0x0044D4A0 | [AIAction_WalkToNode](0044D4A0-AIAction_WalkToNode.md) | void AIAction_WalkToNode(int nodeId, int flags) | AIContext |
| 0x0044D510 | [AIAction_RunToNode](0044D510-AIAction_RunToNode.md) | void AIAction_RunToNode(int nodeId, int flags) | AIContext |
| 0x0044D580 | [AIAction_FireAtNode](0044D580-AIAction_FireAtNode.md) | void AIAction_FireAtNode(int nodeId, int p1, int p2, int p3, int p4) | AIContext |
| 0x0044D630 | [AIAction_FireAtTask](0044D630-AIAction_FireAtTask.md) | void AIAction_FireAtTask(int taskId, int p1, int p2, int p3, int p4) | AIContext |
| 0x0044D6E0 | [AIAction_PlayAnimation](0044D6E0-AIAction_PlayAnimation.md) | void AIAction_PlayAnimation(int animationId, int flags) | AIContext |
| 0x0044D750 | [AIAction_PlaySound](0044D750-AIAction_PlaySound.md) | void AIAction_PlaySound(int soundId, int param2, int flags) | AIContext |
| 0x0044D7D0 | [AIAction_MoveToEvent](0044D7D0-AIAction_MoveToEvent.md) | void AIAction_MoveToEvent(int eventId, int flags) | AIContext |
| 0x0044D870 | [AIAction_LookAtEvent](0044D870-AIAction_LookAtEvent.md) | void AIAction_LookAtEvent(int eventId, int flags) | AIContext |
| 0x0044D8F0 | [AIAction_Stunned](0044D8F0-AIAction_Stunned.md) | void AIAction_Stunned(int param1, int flags) | AIContext |
| 0x0044D960 | [AIAction_KickGrenade](0044D960-AIAction_KickGrenade.md) | void AIAction_KickGrenade(int param) | AIContext |
| 0x0044DA00 | [AIAction_RunPanicking](0044DA00-AIAction_RunPanicking.md) | void AIAction_RunPanicking(int param1, int flags) | AIContext |
| 0x0044DA80 | [AIAction_Idle](0044DA80-AIAction_Idle.md) | void AIAction_Idle(int param) | AIContext |
| 0x0044DAE0 | [AIAction_SetCombat](0044DAE0-AIAction_SetCombat.md) | void AIAction_SetCombat(int enemyId) | AIContext |
| 0x0044E060 | [AIFunction_DefaultHandler](0044E060-AIFunction_DefaultHandler.md) | void AIFunction_DefaultHandler() | AIContext |
| 0x0044DBC0 | [AIFunction_RemoveAlarmActions](0044DBC0-AIFunction_RemoveAlarmActions.md) | void AIFunction_RemoveAlarmActions() | AIContext |
| 0x0044DC40 | [AIFunction_SetViewLength](0044DC40-AIFunction_SetViewLength.md) | void AIFunction_SetViewLength(int length) | AIContext |
| 0x0044DCD0 | [AIFunction_SetAlarmViewLength](0044DCD0-AIFunction_SetAlarmViewLength.md) | void AIFunction_SetAlarmViewLength(int length) | AIContext |
| 0x0044DD30 | [AIFunction_SetViewAlpha](0044DD30-AIFunction_SetViewAlpha.md) | void AIFunction_SetViewAlpha(int alpha) | AIContext |
| 0x0044DD90 | [AIFunction_SetViewGamma](0044DD90-AIFunction_SetViewGamma.md) | void AIFunction_SetViewGamma(int gamma) | AIContext |
| 0x0044DDF0 | [AIFunction_SetSecondaryViewLength](0044DDF0-AIFunction_SetSecondaryViewLength.md) | void AIFunction_SetSecondaryViewLength(int length) | AIContext |
| 0x0044DE80 | [AIFunction_SetSecondaryAlarmViewLength](0044DE80-AIFunction_SetSecondaryAlarmViewLength.md) | void AIFunction_SetSecondaryAlarmViewLength(int length) | AIContext |
| 0x0044DEE0 | [AIFunction_SetSecondaryViewAlpha](0044DEE0-AIFunction_SetSecondaryViewAlpha.md) | void AIFunction_SetSecondaryViewAlpha(int alpha) | AIContext |
| 0x0044DF40 | [AIFunction_SetSecondaryViewGamma](0044DF40-AIFunction_SetSecondaryViewGamma.md) | void AIFunction_SetSecondaryViewGamma(int gamma) | AIContext |
| 0x0044E0C0 | [AIFunction_SetEventPriority](0044E0C0-AIFunction_SetEventPriority.md) | void AIFunction_SetEventPriority(int priority) | AIContext |
| 0x0044E150 | [AIFunction_SetInvulnerability](0044E150-AIFunction_SetInvulnerability.md) | void AIFunction_SetInvulnerability(int onOff) | AIContext |
| 0x0044E1B0 | [AIFunction_SetInstantDeath](0044E1B0-AIFunction_SetInstantDeath.md) | void AIFunction_SetInstantDeath(int onOff) | AIContext |
| 0x0044E210 | [AIFunction_SetDeathAnimation](0044E210-AIFunction_SetDeathAnimation.md) | void AIFunction_SetDeathAnimation(int animId) | AIContext |
| 0x0044E270 | [AIFunction_SetAlarmTriggerID](0044E270-AIFunction_SetAlarmTriggerID.md) | void AIFunction_SetAlarmTriggerID(int id) | AIContext |
| 0x0044E2D0 | [AIFunction_SetAlarmControlID](0044E2D0-AIFunction_SetAlarmControlID.md) | void AIFunction_SetAlarmControlID(int id) | AIContext |
| 0x0044E330 | [AIFunction_SetAlarmAccess](0044E330-AIFunction_SetAlarmAccess.md) | void AIFunction_SetAlarmAccess(int access) | AIContext |
| 0x0044E390 | [AIFunction_SetGunnerID](0044E390-AIFunction_SetGunnerID.md) | void AIFunction_SetGunnerID(int gunnerId) | AIContext |
| 0x0044E6D0 | [AIFunction_SetScriptIntegerValue](0044E6D0-AIFunction_SetScriptIntegerValue.md) | void AIFunction_SetScriptIntegerValue(int varId, int value) | AIContext |
| 0x0044E790 | [AIFunction_SetScriptRealValue](0044E790-AIFunction_SetScriptRealValue.md) | void AIFunction_SetScriptRealValue(int varId, float value) | AIContext |
| 0x0044EAF0 | [AIFunction_SetAnimationInterval](0044EAF0-AIFunction_SetAnimationInterval.md) | void AIFunction_SetAnimationInterval(int entryIndex, int interval) | AIContext |
| 0x0044EBB0 | [AIFunction_AddAnimationEntry](0044EBB0-AIFunction_AddAnimationEntry.md) | void AIFunction_AddAnimationEntry(int animationId, int data) | AIContext |
| 0x0044EE40 | [AIFunction_SendResponse](0044EE40-AIFunction_SendResponse.md) | void AIFunction_SendResponse() | AIContext |
| 0x0047CAD0 | [Define_AmmoType](0047CAD0-Define_AmmoType.md) | void Define_AmmoType(...) | scalar/opaque ABI only |
| 0x00484F60 | [Define_Mission](00484F60-Define_Mission.md) | void Define_Mission(...) | scalar/opaque ABI only |
| 0x00488E00 | [LevelFlow_GetBreakCutSceneKey](00488E00-LevelFlow_GetBreakCutSceneKey.md) | int LevelFlow_GetBreakCutSceneKey() | scalar/opaque ABI only |
| 0x00488E50 | [LevelFlow_LevelFailed](00488E50-LevelFlow_LevelFailed.md) | void LevelFlow_LevelFailed() | scalar/opaque ABI only |
| 0x00488E90 | [LevelFlow_IsCountryUSA](00488E90-LevelFlow_IsCountryUSA.md) | int LevelFlow_IsCountryUSA() | scalar/opaque ABI only |
| 0x004B8C60 | [Script_SetWarningLevel](004B8C60-Script_SetWarningLevel.md) | void Script_SetWarningLevel(int level) | scalar/opaque ABI only |
| 0x004B8C10 | [Break_Script](004B8C10-Break_Script.md) | void Break_Script() | scalar/opaque ABI only |
| 0x004C4520 | [Define_MagicObj](004C4520-Define_MagicObj.md) | void Define_MagicObj(...) | scalar/opaque ABI only |
| 0x004C6760 | [Create_TerrainTileMap](004C6760-Create_TerrainTileMap.md) | void Create_TerrainTileMap(...) | scalar/opaque ABI only |
| 0x004EBA90 | [Define_Group](004EBA90-Define_Group.md) | void Define_Group(...) | scalar/opaque ABI only |
| 0x004E8C60 | [Define_Sound](004E8C60-Define_Sound.md) | void Define_Sound(...) | scalar/opaque ABI only |
| 0x004EAD20 | [Define_Graph](004EAD20-Define_Graph.md) | void Define_Graph(...) | scalar/opaque ABI only |
| 0x004E9EC0 | [Define_TriggerOnce](004E9EC0-Define_TriggerOnce.md) | void Define_TriggerOnce(...) | scalar/opaque ABI only |
| 0x004F0780 | [Task_New](004F0780-Task_New.md) | void Task_New(...) | TaskTypeRecord |
| 0x004F0740 | [Task_DeclareParameters](004F0740-Task_DeclareParameters.md) | void Task_DeclareParameters(...) | TaskTypeRecord |
| 0x0044E3F0 | [AIFunction_GetAlarmTriggerID](0044E3F0-AIFunction_GetAlarmTriggerID.md) | int AIFunction_GetAlarmTriggerID() | AIContext |
| 0x0044E430 | [AIFunction_GetAlarmControlID](0044E430-AIFunction_GetAlarmControlID.md) | int AIFunction_GetAlarmControlID() | AIContext |
| 0x0044E470 | [AIFunction_GetAlarmAccess](0044E470-AIFunction_GetAlarmAccess.md) | int AIFunction_GetAlarmAccess() | AIContext |
| 0x0044E4B0 | [AIFunction_GetGunnerID](0044E4B0-AIFunction_GetGunnerID.md) | int AIFunction_GetGunnerID() | AIContext |
| 0x0044E4F0 | [AIFunction_GetAlarmControlStatus](0044E4F0-AIFunction_GetAlarmControlStatus.md) | int AIFunction_GetAlarmControlStatus() | AIContext |
| 0x0044E5E0 | [AIFunction_GetGunnerStatus](0044E5E0-AIFunction_GetGunnerStatus.md) | int AIFunction_GetGunnerStatus() | AIContext |
| 0x0044E740 | [AIFunction_GetScriptIntegerValue](0044E740-AIFunction_GetScriptIntegerValue.md) | int AIFunction_GetScriptIntegerValue(int varId) | AIContext |
| 0x0044DFA0 | [AIFunction_GetCurrentEventType](0044DFA0-AIFunction_GetCurrentEventType.md) | int AIFunction_GetCurrentEventType() | AIContext |
| 0x0044E860 | [AIFunction_IsEventBehind](0044E860-AIFunction_IsEventBehind.md) | int AIFunction_IsEventBehind() | AIContext |
| 0x0044ECB0 | [AIFunction_GetAnimationToPlay](0044ECB0-AIFunction_GetAnimationToPlay.md) | int AIFunction_GetAnimationToPlay() | AIContext |
| 0x004048B0 | [Config_GraphicOptionsSetGamma](004048B0-Config_GraphicOptionsSetGamma.md) | void Config_GraphicOptionsSetGamma(float gamma) | GraphicOptions, ProfileRecord |
| 0x0044E800 | [AIFunction_GetScriptRealValue](0044E800-AIFunction_GetScriptRealValue.md) | float AIFunction_GetScriptRealValue(int varId) | AIContext |
| 0x0044E000 | [AIFunction_GetRandomValue](0044E000-AIFunction_GetRandomValue.md) | float AIFunction_GetRandomValue(float max) | AIContext |
| 0x0044E930 | [AIFunction_GetEventDistance](0044E930-AIFunction_GetEventDistance.md) | float AIFunction_GetEventDistance() | AIContext |
| 0x0044E9B0 | [AIFunction_GetAlarmTriggerDistance](0044E9B0-AIFunction_GetAlarmTriggerDistance.md) | float AIFunction_GetAlarmTriggerDistance() | AIContext |
| 0x0048F1A0 | [App_ContextSetDebugged](0048F1A0-App_ContextSetDebugged.md) | void App_ContextSetDebugged(int8_t state) | scalar/opaque ABI only |
| 0x0048F1E0 | [App_ContextSetDebugtextState](0048F1E0-App_ContextSetDebugtextState.md) | void App_ContextSetDebugtextState(int8_t state) | scalar/opaque ABI only |
| 0x0048F240 | [App_ContextSetLightmapsUsed](0048F240-App_ContextSetLightmapsUsed.md) | void App_ContextSetLightmapsUsed(int8_t used) | scalar/opaque ABI only |
| 0x0048F260 | [App_ContextSetTerrainLightmapsUsed](0048F260-App_ContextSetTerrainLightmapsUsed.md) | void App_ContextSetTerrainLightmapsUsed(int8_t used) | scalar/opaque ABI only |
| 0x00404590 | [Config_GetActiveGraphicOptions](00404590-Config_GetActiveGraphicOptions.md) | GraphicOptions* Config_GetActiveGraphicOptions() | GraphicOptions, ProfileRecord |
| 0x00491CF0 | [Display_GetActiveMode](00491CF0-Display_GetActiveMode.md) | void* Display_GetActiveMode() | DisplayMode |
| 0x00491E70 | [Display_SetBackgroundColourFn](00491E70-Display_SetBackgroundColourFn.md) | void Display_SetBackgroundColourFn(int8_t r, int8_t g, int8_t b) | DisplayMode |
| 0x00491A90 | [Display_SetMode](00491A90-Display_SetMode.md) | int Display_SetMode(void* modeStruct) | DisplayMode |
| 0x004B6E80 | [Picture_GetHeight](004B6E80-Picture_GetHeight.md) | int Picture_GetHeight(void* picture) | scalar/opaque ABI only |
| 0x004B6E70 | [Picture_GetWidth](004B6E70-Picture_GetWidth.md) | int Picture_GetWidth(void* picture) | scalar/opaque ABI only |
| 0x004B53B0 | [Qsprite_Register4Az](004B53B0-Qsprite_Register4Az.md) | void Qsprite_Register4Az(/*14 args*/) | scalar/opaque ABI only |
| 0x00497E70 | [Transcontext_SetActiveTransContext](00497E70-Transcontext_SetActiveTransContext.md) | void Transcontext_SetActiveTransContext(void* ctx) | TransContext |
| 0x004B0D40 | [QHash_ValueSet](004B0D40-QHash_ValueSet.md) | void QHash_ValueSet(int* table, char* key, int value) | scalar/opaque ABI only |
| 0x004B0DB0 | [QHash_ValueGet](004B0DB0-QHash_ValueGet.md) | int QHash_ValueGet(int* table, char* key) | scalar/opaque ABI only |
| 0x00415020 | [DEBUG_KEYSENABLEINVALID](00415020-DEBUG_KEYSENABLEINVALID.md) | void DEBUG_KEYSENABLEINVALID() | scalar/opaque ABI only |
| 0x004B1AC0 | [QScript_Cleanup](004B1AC0-QScript_Cleanup.md) | void QScript_Cleanup(int* script) | scalar/opaque ABI only |
| 0x004828D0 | [Human_FindNextCamera](004828D0-Human_FindNextCamera.md) | void Human_FindNextCamera(HumanPlayer* human) | CameraContext, HumanPlayer |
| 0x004F4B00 | [CutScene_TaskCreate](004F4B00-CutScene_TaskCreate.md) | void* CutScene_TaskCreate(void) | CutsceneTask |
| 0x004F51D0 | [CutScene_TaskUpdate](004F51D0-CutScene_TaskUpdate.md) | int CutScene_TaskUpdate(void* cutsceneTask) | CutsceneTask |
| 0x004109A0 | [Human_RunUpdate](004109A0-Human_RunUpdate.md) | void Human_RunUpdate(HumanPlayer* human) | HumanPlayer |
| 0x00412440 | [Human_DamageApply](00412440-Human_DamageApply.md) | void Human_DamageApply(HumanPlayer* human) | HumanPlayer |
| 0x00478900 | [Weapon_FireUpdate](00478900-Weapon_FireUpdate.md) | void Weapon_FireUpdate(WeaponContext* weaponCtx, int* state) | WeaponContext |
| 0x004779E0 | [Weapon_FlameUpdate](004779E0-Weapon_FlameUpdate.md) | void Weapon_FlameUpdate(WeaponContext* weaponCtx, int* state) | WeaponContext |
| 0x00479990 | [Weapon_ReloadStart](00479990-Weapon_ReloadStart.md) | void Weapon_ReloadStart(void* soldierCtx) | Soldier, WeaponContext |
| 0x00477040 | [Throwable_Create](00477040-Throwable_Create.md) | void Throwable_Create(void) | scalar/opaque ABI only |
| 0x00476040 | [Mine_ProximityCreate](00476040-Mine_ProximityCreate.md) | void Mine_ProximityCreate(void) | scalar/opaque ABI only |
| 0x004D9870 | [Camera_SubmitFrame](004D9870-Camera_SubmitFrame.md) | void Camera_SubmitFrame(CameraContext* camCtx) | CameraContext |
| 0x00402870 | [Frames_Get](00402870-Frames_Get.md) | int Frames_Get(void) | scalar/opaque ABI only |
| 0x00402880 | [Game_GetContext](00402880-Game_GetContext.md) | void* Game_GetContext(void) | GameContext |
| 0x00402890 | [Game_GetScriptContext](00402890-Game_GetScriptContext.md) | void* Game_GetScriptContext(void) | ScriptContext |
| 0x004028A0 | [Flow_SetState](004028A0-Flow_SetState.md) | void Flow_SetState(int stateId) | scalar/opaque ABI only |
| 0x004028B0 | [Frames_GetUpdateCounter](004028B0-Frames_GetUpdateCounter.md) | int Frames_GetUpdateCounter(void) | scalar/opaque ABI only |
| 0x004028C0 | [Frames_GetTaskCounter](004028C0-Frames_GetTaskCounter.md) | int Frames_GetTaskCounter(void) | scalar/opaque ABI only |
| 0x004028D0 | [Game_TimingBegin](004028D0-Game_TimingBegin.md) | void Game_TimingBegin(void) | GameContext |
| 0x004028F0 | [Game_TimingEnd](004028F0-Game_TimingEnd.md) | void Game_TimingEnd(void) | GameContext |
| 0x004D97F0 | [Qtask_SetCallbackData](004D97F0-Qtask_SetCallbackData.md) | void Qtask_SetCallbackData(void* task, unsigned int callbackData) | TaskTypeRecord |
| 0x004D9800 | [Qtask_GetCallbackData](004D9800-Qtask_GetCallbackData.md) | unsigned int Qtask_GetCallbackData(void* task) | TaskTypeRecord |
| 0x004D9810 | [Qtask_Initialize](004D9810-Qtask_Initialize.md) | void Qtask_Initialize(void) | TaskTypeRecord |
| 0x004D9830 | [Qtask_Shutdown](004D9830-Qtask_Shutdown.md) | void Qtask_Shutdown(void) | TaskTypeRecord |
| 0x004D9850 | [Qtask_GetEventId](004D9850-Qtask_GetEventId.md) | unsigned char Qtask_GetEventId(void) | TaskTypeRecord |
| 0x004D9860 | [Qtask_GetList](004D9860-Qtask_GetList.md) | void* Qtask_GetList(void) | TaskTypeRecord |
| 0x004D9950 | [Camera_ResetFrameCounters](004D9950-Camera_ResetFrameCounters.md) | void Camera_ResetFrameCounters(CameraContext* camCtx) | CameraContext |
| 0x004D9A00 | [MagicObj_Initialize](004D9A00-MagicObj_Initialize.md) | void MagicObj_Initialize(void) | scalar/opaque ABI only |
| 0x004D9F60 | [MagicObj_Shutdown](004D9F60-MagicObj_Shutdown.md) | void MagicObj_Shutdown(void) | scalar/opaque ABI only |
| 0x004D9FA0 | [MagicObj_GetTypeId](004D9FA0-MagicObj_GetTypeId.md) | unsigned short MagicObj_GetTypeId(void) | scalar/opaque ABI only |
| 0x004D9FB0 | [MagicObj_GetEventId](004D9FB0-MagicObj_GetEventId.md) | unsigned char MagicObj_GetEventId(void) | scalar/opaque ABI only |
| 0x00401900 | [TaskType_Register](00401900-TaskType_Register.md) | uint16_t TaskType_Register(uint32_t p1, uint32_t p2, uint16_t parentType, uint32_t p4) | TaskTypeRecord |
| 0x00401CF0 | [TaskType_IsDerivedFrom](00401CF0-TaskType_IsDerivedFrom.md) | bool TaskType_IsDerivedFrom(uint16_t typeId, uint16_t baseTypeId) | TaskTypeRecord |
| 0x00477C50 | [Weapon_EntityCreate](00477C50-Weapon_EntityCreate.md) | WeaponEntityView* Weapon_EntityCreate(uint32_t p1, uint16_t objectType, uint32_t weaponType, uint32_t p4, uint8_t p5) | WeaponContext, WeaponEntityView |
| 0x00477C10 | [Weapon_FiringStateGet](00477C10-Weapon_FiringStateGet.md) | uint8_t Weapon_FiringStateGet(void) | WeaponContext |
| 0x004E7200 | [Sound_EventTrigger](004E7200-Sound_EventTrigger.md) | void Sound_EventTrigger(const char* eventName, uint32_t eventId, const SoundEventParams* params) | SoundEventParams |
| 0x004A5702 | [String_VFormat](004A5702-String_VFormat.md) | int String_VFormat(char* buffer, const char* format, va_list args) | scalar/opaque ABI only |
| 0x004B1020 | [QFile_AliasResolve](004B1020-QFile_AliasResolve.md) | int QFile_AliasResolve(char* outputPath, const char* inputPath, int maxDepth) | QFileAliasRecord, QFileDeviceRecord |
| 0x004B11A0 | [QFile_DeviceIndex](004B11A0-QFile_DeviceIndex.md) | int QFile_DeviceIndex(const char* path) | QFileAliasRecord, QFileDeviceRecord |
| 0x004B1620 | [QFile_DeviceHandlerLookup](004B1620-QFile_DeviceHandlerLookup.md) | uint32_t QFile_DeviceHandlerLookup(const char* deviceName) | QFileAliasRecord, QFileDeviceRecord |
| 0x004B8A50 | [Profile_ValueSet](004B8A50-Profile_ValueSet.md) | void Profile_ValueSet(void* profile, int index) | ProfileRecord |
