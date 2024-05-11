#include "../include/app.h"

int main(void)
{
    App app{};

    app.create_window(640, 480, "Hello World");

    app.glew_init();

    std::cout << glGetString(GL_VERSION) << std::endl;

    app.game_loop();

    glfwTerminate();
}