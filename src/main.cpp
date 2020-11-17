#include "main.hpp"

my_game::my_game(rb::config& config)
    : rb::game(config) {
}

void my_game::initialize() {
}

void my_game::update(float elapsed_time) {
    if (gamepad()->is_button_pressed(rb::gamepad_player::first, rb::gamepad_button::back) ||
        keyboard()->is_key_pressed(rb::keycode::escape)) {
        exit();
    }
}

void my_game::draw() {
    graphics_device()->clear(rb::color::cornflower_blue());
}

int main(int argc, char* argv[]) {
    rb::config config;
    config.window_title = "My Cool Game";
    my_game{ config }.run();
}
