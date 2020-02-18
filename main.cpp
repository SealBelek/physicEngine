#include <iostream>
#include "include/core.h"
int main() {
    physicEngine::Vector3 a(3, -2, 4);
    physicEngine::Vector3 c(1, -1, 1);
    physicEngine::Vector3 b;
    a += c;
    return 0;
}