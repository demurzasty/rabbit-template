#pragma once 

#include <rabbit/rabbit.hpp>

class my_game : public rb::game {
public:
    my_game(rb::config& config);

protected:
    void initialize() override;

    void update(float elapsed_time) override;

    void draw() override;
};