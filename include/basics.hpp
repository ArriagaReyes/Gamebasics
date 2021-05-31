#include <cstdio>

struct Basics {
    virtual ~Basics() = default;
    virtual void run();

protected:
    virtual void render() = 0;
    virtual void update() = 0;
};
