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
		//HZ_INFO("ExampleLayer::Update");

		if (Hazel::Input::IsKeyPressed(HZ_KEY_TAB))
		{
			//HZ_TRACE("Tab key is pressed (poll)!");
		}
	}

	void OnEvent(Hazel::Event& event) override
	{
		HZ_TRACE("{0}", event);
		if (event.GetEventType() == Hazel::EventType::KeyPressed)
		{
			Hazel::KeyPressedEvent& e = (Hazel::KeyPressedEvent&)event;
			if (e.GetKeyCode() == HZ_KEY_TAB)
				HZ_TRACE("Tab key is pressed (event)!");
			HZ_TRACE("{0}", (char)e.GetKeyCode());
		}
	}
};
class Sanbox : public Hazel::Application
{
public:
	Sanbox()
	{
		PushLayer(new ExampleLayer());
	}

	~Sanbox()
	{
	}
};

Hazel::Application* Hazel::createApplication()
{
	return new Sanbox();
}
