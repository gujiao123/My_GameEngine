#pragma once


#include "core.h"
namespace Hazel {
	class HAZEL_API Application
	{
	public:
		Application();
		virtual ~Application(); //�������������ã�1.֧����Ķ�̬ 2.ȷ������ָ�봴���������������ö�Ӧ��������������ȷ�ͷ��ڴ�

		void Run();
	};

	// To be defined in CLIENT
	Application* CreateApplication();
}