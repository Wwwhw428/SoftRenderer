//#include <GLFW/glfw3.h>
//#include <iostream>
//#include <windows.h>
//
//int main()
//{
//	if (!glfwInit())
//	{
//		// Initialization failed
//		std::cout << "init failed" << std::endl;
//	}
//
//	GLFWwindow* window = glfwCreateWindow(640, 480, "My Title", NULL, NULL);
//	if (!window)
//	{
//		// Window or OpenGL context creation failed
//		std::cout << "windows creation failed" << std::endl;
//
//	}
//
//	Sleep(5000);
//
//	return 0;
//}

#include "tgaimage.h"
const TGAColor white = TGAColor(255, 255, 255, 255);
const TGAColor red = TGAColor(255, 0, 0, 255);
int main(int argc, char** argv) {
    TGAImage image(100, 100, TGAImage::RGB);
    image.set(52, 41, red);
    image.flip_vertically(); // i want to have the origin at the left bottom corner of the image
    image.write_tga_file("output.tga");
    return 0;
}