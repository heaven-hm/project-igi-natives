# IGI Debug Keys

This document describes the built-in debug functionality available in IGI (Project I.G.I.: I'm Going In) that this DLL utilizes instead of implementing duplicate hotkeys.

## Setup

To use the debug keys, add command-line arguments `DebugKeys` and `DebugText` (without quotes) to the IGI.exe shortcut.

## Usage

In-game, use the key combination **LCtrl + LShift + KEY** to activate any of the following functions:

| KEY | FUNCTION |
|-----|----------|
| F9 | Unlock all missions |
| F11 | Show position/angle info |
| F12 | Load next level |
| P | Give all weapons and ammo |
| R | Restart mission |
| I | Toggle invincible mode |
| Numpad + | Increase zoom level |
| Numpad - | Decrease zoom level |
| Numpad Enter | Reset zoom level |
| Numpad * | Toggle 3rd person view |
| F | Toggle fly mode |
| F10 | Show debug info |
| Q | Cycle to next camera |
| A | Back to default camera |
| E | Cycle to previous camera |
| Numpad 9 | Decrease 3rd person camera distance |
| Numpad 3 | Increase 3rd person camera distance |
| Numpad 8 | Decrease 3rd person camera pitch |
| Numpad 2 | Increase 3rd person camera pitch |
| Numpad 4 | Decrease 3rd person camera yaw |
| Numpad 6 | Increase 3rd person camera yaw |

## Integration with IGI-Internals DLL

This DLL has been designed to avoid conflicts with IGI's built-in debug keys. All duplicate functionality has been removed from our custom hotkey implementations to ensure seamless integration.

## Credits

Special thanks to **BlankName** for discovering and documenting these debug keys.

**Repository:** https://github.com/BlanknameES/IGIPatch
