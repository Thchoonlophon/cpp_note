#include <iostream>
#include <string>

int main() {
    std::cout << "Please enter your name: ";
    std::string name;
    std::cin >> name;
    const std::string greeting = "Hello, " + name + " !";
    const int pad = 1;
    const int rows = pad * 2 + 3;
    const std::string::size_type cols = greeting.size() + pad * 2 + 2;
    std::cout << std::endl;
    int r = 0;
    while (r != rows) {
        std::cout << std::endl;
        ++r;
    }
    return 0;
}