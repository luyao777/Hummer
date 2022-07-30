#include "Application.h"
#include "stdio.h"

namespace Hummer{
    Application::Application(){}
    Application::~Application(){}

    void Application::Run(){
        while(true){
            printf("Hummer Engine is running\n");
        };
    }
}
