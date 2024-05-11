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
        std::cerr << "Error while creating error" << std::endl;
        std::exit(-1);
    }

    glfwMakeContextCurrent(window);
}

void App::glew_init()
{
    if (glewInit() != GLEW_OK)
    {
        std::cerr << "Error while initializing GLEW" << std::endl;
        std::exit(-1);
    }
}

/* Loop until the user closes the window */
void App::game_loop()
{

    float positions[6] = {-0.5f, -0.5f, 0.0f, 0.5f, 0.5f, -0.5f};

    // define vertex buffer
    GLuint buffer; // unsigned int buffer;
    glGenBuffers(1, &buffer);

    // selecting / binding the buffer
    glBindBuffer(GL_ARRAY_BUFFER, buffer);
    glBufferData(GL_ARRAY_BUFFER, 6 * sizeof(float), positions, GL_STATIC_DRAW);

    glEnableVertexAttribArray(0);
    glVertexAttribPointer(0, 2, GL_FLOAT, GL_FALSE, sizeof(float) * 2, 0);

    while (!glfwWindowShouldClose(window))
    {
        /* Render here */
        glClear(GL_COLOR_BUFFER_BIT);

        glDrawArrays(GL_TRIANGLES, 0, 3);

        /*  Legacy Code
            glBegin(GL_TRIANGLES);
            glVertex2f(-0.5f, -0.5f);
            glVertex2f(0.0f, 0.5f);
            glVertex2f(0.5f, -0.5f);
            glEnd();
        */

        /* Swap front and back buffers */
        glfwSwapBuffers(window);

        /* Poll for and process events */
        glfwPollEvents();
    }
}