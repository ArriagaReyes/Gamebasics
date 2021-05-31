#include <iostream>
#include <chrono>
#include "../include/basics.hpp"

void Basics::run() {
    using milliseconds = std::chrono::duration<double, std::milli>;

    const auto MS_PER_UPDATE = 0.0017;

    auto previous = std::chrono::steady_clock::now();
    double lag = 0.0;
    while(true) {
        auto current = std::chrono::steady_clock::now();
        auto delta = current - previous;
        previous = current;
        lag += milliseconds(delta).count();

        while(lag >= MS_PER_UPDATE) {
            update();
            lag -= MS_PER_UPDATE;
        }

        render();
    }
}