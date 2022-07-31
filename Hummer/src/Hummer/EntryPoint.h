#pragma once

#ifdef HM_PLATFORM_MAC

extern Hummer::Application* Hummer::CreateApplication();

int main(int argc, char **argv){
    printf("Hummer Engine is runmning!\n");

    Hummer::Log::Init(); 
    HM_CORE_ERROR("Initialized log!");
    int a = 5;
    HM_INFO("Hello! Var={0}",a);

    auto app = Hummer::CreateApplication();
    app->Run();
    delete app;

    return 0;
}
#endif

