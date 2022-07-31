#pragma once
#include "Core.h"

namespace Hummer{
    // comment: use defination HUMMER_API to replace
    // class __declspec(dllexport) Application{
    class HUMMER_API Application{
        public:
            Application();
            virtual ~Application();

            void Run();
    };

    // To be defined in client
    Application* CreateApplication();
}
