#pragma once

#include <iostream>
#include <glad/glad.h>
#include <GLFW/glfw3.h>
#include <glm/glm.hpp>
#include <vector>

#include "Shader.hpp"

struct ObjectData
{
	unsigned int VAO;
	unsigned int vertexNum;
	std::vector<unsigned int> textures;
	Shader* shader;
};


class SandBox 
{
public:
	static unsigned int SCR_WIDTH;
	static unsigned int SCR_HEIGHT;
	static const char* TITLE;
	
public:
	SandBox();
	void buildScene();
	void run();

private:
	GLFWwindow* window;
	std::vector<ObjectData> staticObjects;

private:
	void processInput(GLFWwindow* window);
};