#include "../include/app.h"

int main(void)
{
    App app{};

    app.create_window(640, 480, "Hello World");

    glfwMakeContextCurrent(app.window);

    /* Loop until the user closes the window */
    while (!glfwWindowShouldClose(app.window))
    {
        /* Render here */
        glClear(GL_COLOR_BUFFER_BIT);

        /* Swap front and back buffers */
        glfwSwapBuffers(app.window);

        /* Poll for and process events */
        glfwPollEvents();
    }

    glfwTerminate();
    return 0;
}