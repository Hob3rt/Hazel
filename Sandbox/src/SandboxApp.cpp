#include <Hazel.h>

class ExampleLayer : public Hazel::Layer
{
public:
    ExampleLayer()
        : Layer("Example")
    {
    }

    void OnUpdate() override
    {
        HZ_INFO("ExampleLayer::Update");
    }

    void OnEvent(Hazel::Event& event) override
    {
        HZ_TRACE("{0}", event.ToString());
    }

};

class Sandbox : public Hazel::Application
{
public:
	Sandbox()
	{
        PushLayer(new ExampleLayer());
        PushOverlay(new Hazel::ImGuiLayer());
	};
	~Sandbox()
	{

	};

private:

};

Hazel::Application* Hazel::CreateApplication()
{
	return new Sandbox();
}