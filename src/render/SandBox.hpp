#include <iostream>
#include <glad/glad.h>
#include <GLFW/glfw3.h>
#include <glm/glm.hpp>


class SandBox 
{
public:
	static unsigned int SCR_WIDTH;
	static unsigned int SCR_HEIGHT;
	static const char* TITLE;
	
public:
	SandBox();
	void run();

private:
	GLFWwindow* window;

private:
	void processInput(GLFWwindow* window);
};