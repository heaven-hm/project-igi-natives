# LoadingScreen_Show

Address: 0x0048A440
Signature: void LoadingScreen_Show(int picVariant)
Data types: scalar/opaque ABI only

## Recovered behavior

Shows the LOADING SCREEN: allocates a 0x1C-byte screen object, queries the active display mode (0x491CF0), and loads "LOCAL:menusystem/loadingscreen.res" with picture "LOCAL:menusystem/loading.pic" - or "loading_us.pic" for USA country builds. Param: picVariant = loading-screen type selector. Call before long loads so the player sees feedback.

## Evidence classification

syntax-fallback

Use only the typed fields and prototypes proven in assets/IGINatives.json. Unknown regions remain opaque.
