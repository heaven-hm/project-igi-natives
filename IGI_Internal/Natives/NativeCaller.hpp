#pragma once
#include "../Common.hpp"
#include "../Utils/Logger.hpp"
#include "../CommonConst.hpp"
#include "Natives.hpp"

namespace IGI {
    using NativeHash = uint32_t;
    using Void = void*;

    class NativeCaller {
        bool m_hash_found = false;

    public:
        template<typename ReturnType = Void, typename... Args>
        ReturnType Invoke(Void native_hash, Args... args) {
            const int argument_count = sizeof...(Args);
            m_hash_found = (native_hash != nullptr);

            // Log call details
            std::stringstream ss;
            ss << "Hash: " << native_hash;
            int index = 0;
            ((ss << " Param" << ++index << "="
                << HEX_ADDR_FMT(args)
                << " type=" << TYPE(args)), ...);
            ss << " Argc=" << argument_count;
            LOG_FILE("%s(): %s", FUNC_NAME, ss.str().c_str());

            if (m_hash_found) {
                LOG_FILE("Found handler for Hash %p Symbol: %s", native_hash,
                    ::g_Natives->FindNativeName(reinterpret_cast<NativeHash>(native_hash)).c_str());

                using FunctionType = ReturnType(__cdecl*)(Args...);
				auto function = reinterpret_cast<FunctionType>(native_hash); // Like std::invoke for function pointer.

                if constexpr (std::is_void_v<ReturnType>) {
                    function(args...);
                }
                else {
                    return function(args...);
                }
            }
            else {
                LOG_FILE("Error finding handler for Hash 0x%X", reinterpret_cast<NativeHash>(native_hash));
            }

            if constexpr (!std::is_void_v<ReturnType>) {
                if constexpr (std::is_pointer_v<ReturnType>)
                    return nullptr;
                else
                    return ReturnType{};
            }
        }
    };

    inline NativeCaller g_NativeCaller;
}
