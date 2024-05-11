#include "../include/app.h"

int main(void)
{
    App app{};

    app.create_window(640, 480, "Hello World");

    glfwMakeContextCurrent(app.window);

    if (glewInit() != GLEW_OK)
    {
        std::cerr << "Error while initializing GLEW" << std::endl;
        std::exit(-1);
    }

    std::cout << glGetString(GL_VERSION) << std::endl;

    app.game_loop();

    glfwTerminate();
}