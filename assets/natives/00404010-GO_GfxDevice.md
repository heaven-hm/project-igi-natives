# GO_GfxDevice

Address: 0x00404010
Signature: int GO_GfxDevice(int deviceIndex)
Data types: GraphicOptions, ProfileRecord

## Recovered behavior

Sets render-device (D3D device/GUID) selection for the current profile. Param: deviceIndex = index into the render-device list filled by Config_FillRenderDeviceListBox. Use in config scripts. Returns 1.

## Evidence classification

retail-string

Use only the typed fields and prototypes proven in assets/IGINatives.json. Unknown regions remain opaque.
