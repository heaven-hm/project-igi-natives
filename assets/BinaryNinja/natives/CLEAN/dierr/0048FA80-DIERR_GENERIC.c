// IGI native provenance: DIERR_GENERIC - 0x0048FA80 - CFG score 100.0% (PASS; structural only); runtime behavior not verified.
// Evidence: 0048FA80-DIERR_GENERIC.md; REA/Ghidra static record; catalog: assets/BinaryNinja/IGINatives_VERIFIED.json.
#include "DIERR_GENERIC.h"
int32_t DIERR_GENERIC(int32_t context)

{
    if (context == 0x80040209)
        return "DIERR_UNPLUGGED";

    if (context <= 0x80040202)
        switch (context)
        {
            case 0x80004001:
            {
                return "DIERR_UNSUPPORTED";
                break;
            }
            case 0x80004002:
            {
                return "DIERR_NOINTERFACE";
                break;
            }
            case 0x80004005:
            {
                return "DIERR_GENERIC";
                break;
            }
            case 0x80040110:
            {
                return "DIERR_NOAGGREGATION";
                break;
            }
            case 0x80040154:
            {
                return "DIERR_DEVICENOTREG";
                break;
            }
            case 0x80040200:
            {
                return "DIERR_INSUFFICIENTPRIVS";
                break;
            }
            case 0x80040201:
            {
                return "DIERR_DEVICEFULL";
                break;
            }
            case 0x80040202:
            {
                return "DIERR_MOREDATA";
                break;
            }
        }
    else if (context + 0x7ffbfdfd <= 5)
        switch (context)
        {
            case 0x80040203:
            {
                return "DIERR_NOTDOWNLOADED";
                break;
            }
            case 0x80040204:
            {
                return "DIERR_HASEFFECTS";
                break;
            }
            case 0x80040205:
            {
                return "DIERR_NOTEXCLUSIVEACQUIRED";
                break;
            }
            case 0x80040206:
            {
                return "DIERR_INCOMPLETEEFFECT";
                break;
            }
            case 0x80040207:
            {
                return "DIERR_NOTBUFFERED";
                break;
            }
            case 0x80040208:
            {
                return "DIERR_EFFECTPLAYING";
                break;
            }
        }

    switch (context)
    {
        case 0x8004020a:
        {
            return "DIERR_REPORTFULL";
            break;
        }
        case 0x80070002:
        {
            return "DIERR_NOTFOUND";
            break;
        }
        case 0x80070005:
        {
            return "DIERR_OTHERAPPHASPRIO";
            break;
        }
        case 0x8007000c:
        {
            return "DIERR_NOTACQUIRED";
            break;
        }
        case 0x8007000e:
        {
            return "DIERR_OUTOFMEMORY";
            break;
        }
        case 0x80070015:
        {
            return "DIERR_NOTINITIALIZED";
            break;
        }
        case 0x8007001e:
        {
            return "DIERR_INPUTLOST";
            break;
        }
        case 0x80070057:
        {
            return "DIERR_INVALIDPARAM";
            break;
        }
        case 0x80070077:
        {
            return "DIERR_BADDRIVERVER";
            break;
        }
        case 0x800700aa:
        {
            return "DIERR_ACQUIRED";
            break;
        }
        case 0x8007047e:
        {
            return "DIERR_OLDDIRECTINPUTVERSION";
            break;
        }
        case 0x80070481:
        {
            return "DIERR_BETADIRECTINPUTVERSION";
            break;
        }
        case 0x800704df:
        {
            return "DIERR_ALREADYINITIALIZED";
            break;
        }
    }

    return "Unknown error";
}
