#include<Hazel.h>
///•	公有继承意味着基类的公有成员在派生类中仍然是公有的，基类的保护成员在派生类中仍然是保护的。
class Sandbox : public Hazel::Application {
public:
	Sandbox() {

	}
	~Sandbox() {

	}
};


Hazel::Application* Hazel::CreateApplication() {
	return new Sandbox();
}