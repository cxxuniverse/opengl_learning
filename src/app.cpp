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

/* Loop until the user closes the window */
void App::game_loop()
{
    while (!glfwWindowShouldClose(window))
    {
        /* Render here */
        glClear(GL_COLOR_BUFFER_BIT);

        /* Swap front and back buffers */
        glfwSwapBuffers(window);

        /* Poll for and process events */
        glfwPollEvents();
    }
}