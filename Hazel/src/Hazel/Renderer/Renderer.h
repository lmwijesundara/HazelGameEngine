#pragma once

namespace Hazel
{
	enum class RenderAPI
	{
		None = 0, OpenGL = 1
	};

	class Renderer
	{
	public:
		inline static RenderAPI getAPI() { return s_RenderAPI; };

	private:
		static RenderAPI s_RenderAPI;
		int a;

	};
}


