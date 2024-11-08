#pragma once


#include "core.h"
namespace Hazel {
	class HAZEL_API Application
	{
	public:
		Application();
		virtual ~Application(); //虚析构函数作用：1.支持类的多态 2.确保基类指针创建的派生类对象调用对应的析构函数，正确释放内存

		void Run();
	};

	// To be defined in CLIENT
	Application* CreateApplication();
}