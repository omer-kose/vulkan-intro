// vulkan_guide.h : Include file for standard system include files,
// or project specific include files.

#pragma once

#include <vk_types.h>

class VulkanEngine 
{
public:
	static VulkanEngine& Get();

	//initializes everything in the engine
	void init();

	//shuts down the engine
	void cleanup();

	//draw loop
	void draw();

	//run main loop
	void run();
public:
	bool isInitialized{ false };
	int frameNumber{ 0 };
	bool stopRendering{ false };
	VkExtent2D windowExtent{ 1700 , 900 };

	struct SDL_Window* window{ nullptr };
};
