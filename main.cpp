#include <iostream>
#include "./include/basics.hpp"

using namespace std;

struct Game : Basics {
    Game() {
        cout << "Initalizing game" << endl;
    }

protected:
    void update() override {
        cout << "I am updating!" << endl;
    }

    void render() override {
        cout << "I am rendering!" << endl;
    }
};

int main() {
    Game game{};

    game.run();

    return 0;
}