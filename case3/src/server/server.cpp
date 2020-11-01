#include <iostream>
#include "server.h"
#include "lib.h"


int main(int, char**) {
    std::cout << "server -- Hello, world!\n";
    serverprint();
    libprint();
    return 0;
}
