#include <Hummer.h>

class Sandbox : public Hummer::Application{
    public:
        Sandbox(){}
        ~Sandbox(){}
};



int main(){
    Sandbox* sandbox = new Sandbox();
    sandbox->run();
    delete sandbox;
    return 0;
}
