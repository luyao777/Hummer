#pragma once
#ifdef HM_PLATFORM_WINDOWS
    #ifdef HM_BUILD_DLL
        #define HUMMER_API __declspec(dllexport)
    #else
        #define HUMMER_API __declspec(dllimport)
    #endif
#elif HM_PLATFORM_MAC
    #ifdef HM_BUILD_DLL
        #define HUMMER_API __declspec(dllexport)
    #else
        #define HUMMER_API __declspec(dllimport)
    #endif
#else
    #error Hummer only support mac or windows
#endif
