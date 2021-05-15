#include <GLFW/glfw3.h>

int main()
{
    glfwInit();
    glfwDefaultWindowHints();

    GLFWwindow* window = glfwCreateWindow(640, 480, "Hello, cpproj!", nullptr, nullptr);

    while (!glfwWindowShouldClose(window))
    {
        glfwPollEvents();

        glfwSwapBuffers(window);
    }

    glfwDestroyWindow(window);
    glfwTerminate();

    return 0;
}
