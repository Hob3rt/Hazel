#pragma once
#ifdef HZ_PLATFORM_WINDOWS
extern Hazel::Application* Hazel::CreateApplication();
int main(int argc, char** argv)
{
	Hazel::Log::Init();
	HZ_CORE_WARN("Initialized Log!");
	int a = 11;
	HZ_INFO("hello Var = {0}", a);


	printf("Welcome to Hazel!");
	auto app = Hazel::CreateApplication();
	app->Run();
	delete app;
}
#endif