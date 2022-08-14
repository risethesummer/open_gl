//#include <glad/glad.h>
//#include <GLFW/glfw3.h>
//
//const int height = 800, width = 800;
//
//void frameBufferSizeCallback(GLFWwindow* window, int width, int height)
//{
//	glViewport(0, 0, width, height);
//}
//
//void processInput(GLFWwindow* window)
//{
//	if (glfwGetKey(window, GLFW_KEY_ESCAPE) == GLFW_PRESS)
//	{
//		glfwSetWindowShouldClose(window, true);
//	}
//}
//
//int lecture_1()
//{
//	glfwInit();
//	glfwWindowHint(GLFW_CONTEXT_VERSION_MINOR, 3);
//	glfwWindowHint(GLFW_CONTEXT_VERSION_MAJOR, 3);
//	glfwWindowHint(GLFW_OPENGL_PROFILE, GLFW_OPENGL_CORE_PROFILE);
//	GLFWwindow* window = glfwCreateWindow(width, height, "OpenGL", NULL, NULL);
//
//	if (window == nullptr)
//	{
//		glfwTerminate();
//		return -1;
//	}
//
//	glfwMakeContextCurrent(window);
//
//	if (!gladLoadGLLoader((GLADloadproc)glfwGetProcAddress))
//	{
//		return -1;
//	}
//
//
//	glViewport(0, 0, width, height);
//	glfwSetFramebufferSizeCallback(window, frameBufferSizeCallback);
//
//	while (!glfwWindowShouldClose(window))
//	{
//		processInput(window);
//
//		glClearColor(0.2, 0.3, 0.2, 1.0);
//		glClear(GL_COLOR_BUFFER_BIT);
//		glfwSwapBuffers(window);
//		glfwPollEvents();
//	}
//
//	glfwTerminate();
//	return 0;
//}