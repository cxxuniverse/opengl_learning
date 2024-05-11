#include "../include/app.h"

int main(void)
{
    App app{};

    app.create_window(640, 480, "Hello World");

    glfwMakeContextCurrent(app.window);

    app.game_loop();

    glfwTerminate();
    return 0;
}