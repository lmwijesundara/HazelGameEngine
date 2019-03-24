#pragma once

#ifdef HZ_PLATFORM_WINDOWS
	extern Hazel::Application* Hazel::createApplication();

	int main(int argc, char** argv)
	{
		//Hazel::Log::init();
		//Hazel::Log::getCoreLogger()->warn("Initialized Log!");
		
		Hazel::Application* app = Hazel::createApplication();

		Hazel::Log::init();
		HZ_CORE_WARN("Initialized Log!");

		int a = 10;
		HZ_INFO("Hello Var={0}", a);

		app->run();
		delete app;
	}
#endif