#include "DDERR_GENERIC.h"
int32_t DDERR_GENERIC(int32_t a1)

{
    if (a1 <= 0x8876023d)
    {
        if (a1 == 0x8876023d)
            return "DDERR_NOPALETTEHW";

        if (a1 <= 0x88760140)
        {
            if (a1 == 0x88760140)
                return "DDERR_NOT8BITCOLOR";

            if (a1 <= 0x887600aa)
            {
                if (a1 == 0x887600aa)
                    return "DDERR_NO3D";

                if (a1 <= 0x8876005a)
                {
                    if (a1 == 0x8876005a)
                        return "DDERR_HEIGHTALIGN";

                    if (a1 <= 0x88760005)
                    {
                        if (a1 == 0x88760005)
                            return "DDERR_ALREADYINITIALIZED";

                        if (a1 == 0x8007000e)
                            return "DDERR_OUTOFMEMORY";

                        if (a1 == 0x80004001)
                            return "DDERR_UNSUPPORTED";

                        if (a1 == 0x80004005)
                            return "DDERR_GENERIC";

                        if (a1 == 0x80070057)
                            return "DDERR_INVALIDPARAMS";
                    }
                    else if (a1 + 0x7789fff6 <= 0x2d)
                    {
                        int32_t objC1 = 0;
                        objC1 = *(a1 + 0x77d33082);

                        switch (objC1)
                        {
                            case 0:
                            {
                                return "DDERR_CANNOTATTACHSURFACE";
                                break;
                            }
                            case 1:
                            {
                                return "DDERR_CANNOTDETACHSURFACE";
                                break;
                            }
                            case 2:
                            {
                                return "DDERR_CURRENTLYNOTAVAIL";
                                break;
                            }
                            case 3:
                            {
                                return "DDERR_EXCEPTION";
                                break;
                            }
                        }
                    }
                }
                else if (a1 + 0x7789ffa1 <= 0x41)
                {
                    int32_t tmpD1 = 0;
                    tmpD1 = *(a1 + 0x77d33081);

                    switch (tmpD1)
                    {
                        case 0:
                        {
                            return "DDERR_INCOMPATIBLEPRIMARY";
                            break;
                        }
                        case 1:
                        {
                            return "DDERR_INVALIDCAPS";
                            break;
                        }
                        case 2:
                        {
                            return "DDERR_INVALIDCLIPLIST";
                            break;
                        }
                        case 3:
                        {
                            return "DDERR_INVALIDMODE";
                            break;
                        }
                        case 4:
                        {
                            return "DDERR_INVALIDOBJECT";
                            break;
                        }
                        case 5:
                        {
                            return "DDERR_INVALIDPIXELFORMAT";
                            break;
                        }
                        case 6:
                        {
                            return "DDERR_INVALIDRECT";
                            break;
                        }
                        case 7:
                        {
                            return "DDERR_LOCKEDSURFACES";
                            break;
                        }
                    }
                }
            }
            else if (a1 + 0x7789ff4c <= 0x89)
            {
                int32_t objC2 = 0;
                objC2 = *(a1 + 0x77d330bc);

                switch (objC2)
                {
                    case 0:
                    {
                        return "DDERR_NOALPHAHW";
                        break;
                    }
                    case 1:
                    {
                        return "DDERR_NOCLIPLIST";
                        break;
                    }
                    case 2:
                    {
                        return "DDERR_NOCOLORCONVHW";
                        break;
                    }
                    case 3:
                    {
                        return "DDERR_NOCOOPERATIVELEVELSET";
                        break;
                    }
                    case 4:
                    {
                        return "DDERR_NOCOLORKEY";
                        break;
                    }
                    case 5:
                    {
                        return "DDERR_NOCOLORKEYHW";
                        break;
                    }
                    case 6:
                    {
                        return "DDERR_NODIRECTDRAWSUPPORT";
                        break;
                    }
                    case 7:
                    {
                        return "DDERR_NOEXCLUSIVEMODE";
                        break;
                    }
                    case 8:
                    {
                        return "DDERR_NOFLIPHW";
                        break;
                    }
                    case 9:
                    {
                        return "DDERR_NOGDI";
                        break;
                    }
                    case 0xa:
                    {
                        return "DDERR_NOMIRRORHW";
                        break;
                    }
                    case 0xb:
                    {
                        return "DDERR_NOTFOUND";
                        break;
                    }
                    case 0xc:
                    {
                        return "DDERR_NOOVERLAYHW";
                        break;
                    }
                    case 0xd:
                    {
                        return "DDERR_NORASTEROPHW";
                        break;
                    }
                    case 0xe:
                    {
                        return "DDERR_NOROTATIONHW";
                        break;
                    }
                    case 0xf:
                    {
                        return "DDERR_NOSTRETCHHW";
                        break;
                    }
                    case 0x10:
                    {
                        return "DDERR_NOT4BITCOLOR";
                        break;
                    }
                    case 0x11:
                    {
                        return "DDERR_NOT4BITCOLORINDEX";
                        break;
                    }
                }
            }
        }
        else if (a1 + 0x7789feb6 <= 0xf2)
        {
            int32_t tmpD2 = 0;
            tmpD2 = *(a1 + 0x77d3314a);

            switch (tmpD2)
            {
                case 0:
                {
                    return "DDERR_NOTEXTUREHW";
                    break;
                }
                case 1:
                {
                    return "DDERR_NOVSYNCHW";
                    break;
                }
                case 2:
                {
                    return "DDERR_NOZBUFFERHW";
                    break;
                }
                case 3:
                {
                    return "DDERR_NOZOVERLAYHW";
                    break;
                }
                case 4:
                {
                    return "DDERR_OUTOFCAPS";
                    break;
                }
                case 5:
                {
                    return "DDERR_OUTOFVIDEOMEMORY";
                    break;
                }
                case 6:
                {
                    return "DDERR_OVERLAYCANTCLIP";
                    break;
                }
                case 7:
                {
                    return "DDERR_OVERLAYCOLORKEYONLYONEACTIVE";
                    break;
                }
                case 8:
                {
                    return "DDERR_PALETTEBUSY";
                    break;
                }
                case 9:
                {
                    return "DDERR_COLORKEYNOTSET";
                    break;
                }
                case 0xa:
                {
                    return "DDERR_SURFACEALREADYATTACHED";
                    break;
                }
                case 0xb:
                {
                    return "DDERR_SURFACEALREADYDEPENDENT";
                    break;
                }
                case 0xc:
                {
                    return "DDERR_SURFACEBUSY";
                    break;
                }
                case 0xd:
                {
                    return "DDERR_CANTLOCKSURFACE";
                    break;
                }
                case 0xe:
                {
                    return "DDERR_SURFACEISOBSCURED";
                    break;
                }
                case 0xf:
                {
                    return "DDERR_SURFACELOST";
                    break;
                }
                case 0x10:
                {
                    return "DDERR_SURFACENOTATTACHED";
                    break;
                }
                case 0x11:
                {
                    return "DDERR_TOOBIGHEIGHT";
                    break;
                }
                case 0x12:
                {
                    return "DDERR_TOOBIGSIZE";
                    break;
                }
                case 0x13:
                {
                    return "DDERR_TOOBIGWIDTH";
                    break;
                }
                case 0x14:
                {
                    return "DDERR_UNSUPPORTEDFORMAT";
                    break;
                }
                case 0x15:
                {
                    return "DDERR_UNSUPPORTEDMASK";
                    break;
                }
                case 0x16:
                {
                    return "DDERR_VERTICALBLANKINPROGRESS";
                    break;
                }
                case 0x17:
                {
                    return "DDERR_WASSTILLDRAWING";
                    break;
                }
                case 0x18:
                {
                    return "DDERR_XALIGN";
                    break;
                }
                case 0x19:
                {
                    return "DDERR_INVALIDDIRECTDRAWGUID";
                    break;
                }
                case 0x1a:
                {
                    return "DDERR_DIRECTDRAWALREADYCREATED";
                    break;
                }
                case 0x1b:
                {
                    return "DDERR_NODIRECTDRAWHW";
                    break;
                }
                case 0x1c:
                {
                    return "DDERR_PRIMARYSURFACEALREADYEXISTS";
                    break;
                }
                case 0x1d:
                {
                    return "DDERR_NOEMULATION";
                    break;
                }
                case 0x1e:
                {
                    return "DDERR_REGIONTOOSMALL";
                    break;
                }
                case 0x1f:
                {
                    return "DDERR_CLIPPERISUSINGHWND";
                    break;
                }
                case 0x20:
                {
                    return "DDERR_NOCLIPPERATTACHED";
                    break;
                }
                case 0x21:
                {
                    return "DDERR_NOHWND";
                    break;
                }
                case 0x22:
                {
                    return "DDERR_HWNDSUBCLASSED";
                    break;
                }
                case 0x23:
                {
                    return "DDERR_HWNDALREADYSET";
                    break;
                }
                case 0x24:
                {
                    return "DDERR_NOPALETTEATTACHED";
                    break;
                }
            }
        }
    }
    else if (a1 + 0x7789fdc2 <= 0xc8)
    {
        int32_t objC3 = 0;
        objC3 = *(a1 + 0x77d33276);

        switch (objC3)
        {
            case 0:
            {
                return "DDERR_BLTFASTCANTCLIP";
                break;
            }
            case 1:
            {
                return "DDERR_NOBLTHW";
                break;
            }
            case 2:
            {
                return "DDERR_NODDROPSHW";
                break;
            }
            case 3:
            {
                return "DDERR_OVERLAYNOTVISIBLE";
                break;
            }
            case 4:
            {
                return "DDERR_NOOVERLAYDEST";
                break;
            }
            case 5:
            {
                return "DDERR_INVALIDPOSITION";
                break;
            }
            case 6:
            {
                return "DDERR_NOTAOVERLAYSURFACE";
                break;
            }
            case 7:
            {
                return "DDERR_EXCLUSIVEMODEALREADYSET";
                break;
            }
            case 8:
            {
                return "DDERR_NOTFLIPPABLE";
                break;
            }
            case 9:
            {
                return "DDERR_CANTDUPLICATE";
                break;
            }
            case 0xa:
            {
                return "DDERR_NOTLOCKED";
                break;
            }
            case 0xb:
            {
                return "DDERR_CANTCREATEDC";
                break;
            }
            case 0xc:
            {
                return "DDERR_NODC";
                break;
            }
            case 0xd:
            {
                return "DDERR_WRONGMODE";
                break;
            }
            case 0xe:
            {
                return "DDERR_IMPLICITLYCREATED";
                break;
            }
            case 0xf:
            {
                return "DDERR_NOTPALETTIZED";
                break;
            }
            case 0x10:
            {
                return "DDERR_UNSUPPORTEDMODE";
                break;
            }
            case 0x11:
            {
                return "DDERR_NOMIPMAPHW";
                break;
            }
            case 0x12:
            {
                return "DDERR_INVALIDSURFACETYPE";
                break;
            }
            case 0x13:
            {
                return "DDERR_DCALREADYCREATED";
                break;
            }
            case 0x14:
            {
                return "DDERR_CANTPAGELOCK";
                break;
            }
            case 0x15:
            {
                return "DDERR_CANTPAGEUNLOCK";
                break;
            }
            case 0x16:
            {
                return "DDERR_NOTPAGELOCKED";
                break;
            }
            case 0x17:
            {
                return "D3DERR_BADMAJORVERSION";
                break;
            }
            case 0x18:
            {
                return "D3DERR_BADMINORVERSION";
                break;
            }
            case 0x19:
            {
                return "D3DERR_INVALID_DEVICE";
                break;
            }
            case 0x1a:
            {
                return "D3DERR_INITFAILED";
                break;
            }
            case 0x1b:
            {
                return "D3DERR_EXECUTE_CREATE_FAILED";
                break;
            }
            case 0x1c:
            {
                return "D3DERR_EXECUTE_DESTROY_FAILED";
                break;
            }
            case 0x1d:
            {
                return "D3DERR_EXECUTE_LOCK_FAILED";
                break;
            }
            case 0x1e:
            {
                return "D3DERR_EXECUTE_UNLOCK_FAILED";
                break;
            }
            case 0x1f:
            {
                return "D3DERR_EXECUTE_LOCKED";
                break;
            }
            case 0x20:
            {
                return "D3DERR_EXECUTE_NOT_LOCKED";
                break;
            }
            case 0x21:
            {
                return "D3DERR_EXECUTE_FAILED";
                break;
            }
            case 0x22:
            {
                return "D3DERR_CLIPPED_FAILED";
                break;
            }
            case 0x23:
            {
                return "D3DERR_TEXTURE_NO_SUPPORT";
                break;
            }
            case 0x24:
            {
                return "D3DERR_TEXTURE_CREATE_FAILED";
                break;
            }
            case 0x25:
            {
                return "D3DERR_TEXTURE_DESTROY_FAILED";
                break;
            }
            case 0x26:
            {
                return "D3DERR_TEXTURE_LOCK_FAILED";
                break;
            }
            case 0x27:
            {
                return "D3DERR_TEXTURE_UNLOCK_FAILED";
                break;
            }
            case 0x28:
            {
                return "D3DERR_LOAD_FAILED";
                break;
            }
            case 0x29:
            {
                return "D3DERR_SWAP_FAILED";
                break;
            }
            case 0x2a:
            {
                return "D3DERR_TEXTURE_LOCKED";
                break;
            }
            case 0x2b:
            {
                return "D3DERR_TEXTURE_NOT_LOCKED";
                break;
            }
            case 0x2c:
            {
                return "D3DERR_TEXTURE_GETSURF_FAILED";
                break;
            }
            case 0x2d:
            {
                return "D3DERR_MATRIX_CREATE_FAILED";
                break;
            }
            case 0x2e:
            {
                return "D3DERR_MATRIX_DESTROY_FAILED";
                break;
            }
            case 0x2f:
            {
                return "D3DERR_MATRIX_SETDATA_FAILED";
                break;
            }
            case 0x30:
            {
                return "D3DERR_MAXTRIX_GETDATA_FAILED";
                break;
            }
            case 0x31:
            {
                return "D3DERR_SETVIEWPORTDATA_FAILED";
                break;
            }
            case 0x32:
            {
                return "D3DERR_INVALIDCURRENTVIEWPORT";
                break;
            }
            case 0x33:
            {
                return "D3DERR_INVALIDPRIMITIVETYPE";
                break;
            }
            case 0x34:
            {
                return "D3DERR_INVALIDVERTEXTYPE";
                break;
            }
            case 0x35:
            {
                return "D3DERR_TEXTURE_BADSIZE";
                break;
            }
            case 0x36:
            {
                return "D3DERR_MATERIAL_CREATE_FAILED";
                break;
            }
            case 0x37:
            {
                return "D3DERR_MATERIAL_DESTROY_FAILED";
                break;
            }
            case 0x38:
            {
                return "D3DERR_MATERIAL_SETDATA_FAILED";
                break;
            }
            case 0x39:
            {
                return "D3DERR_MATERIAL_GETDATA_FAILED";
                break;
            }
            case 0x3a:
            {
                return "D3DERR_INVALIDPALETTE";
                break;
            }
            case 0x3b:
            {
                return "D3DERR_ZBUFF_NEEDS_SYSTEMMEMORY";
                break;
            }
            case 0x3c:
            {
                return "D3DERR_ZBUFF_NEEDS_VIDEOMEMORY";
                break;
            }
            case 0x3d:
            {
                return "D3DERR_SURFACENOTINVIDMEM";
                break;
            }
            case 0x3e:
            {
                return "D3DERR_LIGHT_SET_FAILED";
                break;
            }
            case 0x3f:
            {
                return "D3DERR_LIGHTHASVIEWPORT";
                break;
            }
            case 0x40:
            {
                return "D3DERR_LIGHTNOTINTHISVIEWPORT";
                break;
            }
            case 0x41:
            {
                return "D3DERR_SCENE_IN_SCENE";
                break;
            }
            case 0x42:
            {
                return "D3DERR_SCENE_NOT_IN_SCENE";
                break;
            }
            case 0x43:
            {
                return "D3DERR_SCENE_BEGIN_FAILED";
                break;
            }
            case 0x44:
            {
                return "D3DERR_SCENE_END_FAILED";
                break;
            }
            case 0x45:
            {
                return "D3DERR_INBEGIN";
                break;
            }
            case 0x46:
            {
                return "D3DERR_NOTINBEGIN";
                break;
            }
            case 0x47:
            {
                return "D3DERR_NOVIEWPORTS";
                break;
            }
            case 0x48:
            {
                return "D3DERR_VIEWPORTDATANOTSET";
                break;
            }
            case 0x49:
            {
                return "D3DERR_VIEWPORTHASNODEVICE";
                break;
            }
        }
    }

    return "Unknown error";
}
