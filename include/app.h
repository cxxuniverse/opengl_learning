#pragma once

#include <GLFW/glfw3.h>

#include <iostream>

struct App
{
    GLFWwindow *window;

    App();

    void create_window(int width, int height, const char *title);

    void game_loop();
};