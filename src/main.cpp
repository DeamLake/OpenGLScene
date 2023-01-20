#include "SandBox.hpp"

// settings
unsigned int SandBox::SCR_WIDTH = 800;
unsigned int SandBox::SCR_HEIGHT = 600;
const char* SandBox::TITLE = "OpenGLScene";

int main()
{
	SandBox box = SandBox();
	box.buildScene();
	box.run();
}