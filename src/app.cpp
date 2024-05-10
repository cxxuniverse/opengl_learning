#include "../include/app.h"

App::App()
{
    /* Initialize the library */
    if (!glfwInit())
        std::exit(-1);
}

void App::create_window(int width, int height, const char *title)
{
    window = glfwCreateWindow(width, height, title, NULL, NULL);

    // check if the window was created successfully
    if (!window)
    {
        glfwTerminate();
        std::exit(-1);
    }
}