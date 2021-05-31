#include <iostream>
#include "../include/basics.hpp"

void Basics::run() {
    while(true) {
        render();
        update();
    }
}