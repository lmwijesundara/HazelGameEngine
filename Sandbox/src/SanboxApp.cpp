#include <Hazel.h>

class Sanbox : public Hazel::Application
{
public:
	Sanbox()
	{
	}

	~Sanbox()
	{
	}
};

Hazel::Application* Hazel::createApplication()
{
	return new Sanbox();
}
