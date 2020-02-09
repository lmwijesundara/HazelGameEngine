#pragma once

#include "Hazel/Renderer/GraphicContext.h"

struct GLFWwindow;

namespace Hazel
{
	class OpenGLContext : public GraphicContext
	{
	public:
		OpenGLContext(GLFWwindow* Window);

		virtual void Init() override;
		virtual void SwapBuffers() override;

	private:
		GLFWwindow* m_WindowHandle;
	};
}


