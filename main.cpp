#include <iostream>
#include "./include/basics.hpp"

using namespace std;

struct Game : Basics {
    Game() {
        cout << "Initalizing game" << endl;
    }

private:
    int map[2]{ 20, 10 };
    int player[2] { 0, 0 };

protected:
    void update() override {

    }

    void render() override {
        for(size_t x = 0; x < map[0] + 3; x++) {
            cout << "#";
        }

        cout << endl;

        for(size_t y = 0; y < map[1] + 1; y++) {
            for(size_t x = 0; x < map[0] + 2; x++) {
                if(x == 0) {
                    cout << "#";
                } else {
                    cout << " ";
                }
            }

            cout << "#" << endl;
        }

        for(size_t x = 0; x < map[0] + 3; x++) {
            cout << "#";
        }

        cout << endl;

        //Have to find a better way to clear console
        //std::system("clear");
    }
};

int main() {
    Game game{};

    game.run();

    return 0;
}