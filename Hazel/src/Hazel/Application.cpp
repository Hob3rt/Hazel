#include "hzpch.h"

#include "Application.h"
#include "Events/ApplicationEvent.h"
#include "Hazel/Log.h"
namespace Hazel
{
	Application::Application()
	{

	}

	Application::~Application()
	{

	}
	void Application::Run()
	{
		WindowResizeEvent e(1600, 1200);
		HZ_TRACE(e.ToString());
		while (true);
	}
	;
}