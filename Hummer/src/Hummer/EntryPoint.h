#pragma once

#ifdef HM_PLATFORM_MAC

extern Hummer::Application* Hummer::CreateApplication();

int main(int argc, char **argv){
    printf("Hummer Engine is runmning!\n");

    auto app = Hummer::CreateApplication();
    app->Run();
    delete app;

    return 0;
}
#endif
