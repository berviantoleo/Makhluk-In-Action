/*
 * This C++ source file was generated by the Gradle 'init' task.
 */

#include <iostream>
#include <stdlib.h>
#include "app.h"

std::string makhluk_in_action_stl_version::Greeter::greeting() {
    return std::string("Hello, World!");
}

int main () {
    makhluk_in_action_stl_version::Greeter greeter;
    std::cout << greeter.greeting() << std::endl;
    return 0;
}