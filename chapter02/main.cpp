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
        int c = 0;
        while (c != cols) {

            if (r == 0 || r == rows - 1 || c == 0 || c == cols - 1) {
                std::cout << "*";
            } else if (r == 2 || r == rows - 2) {
                std::cout << " ";
            } else {
//                std::cout << (cols - 2 - greeting.size()) / 2 << std::endl;
            }
            ++c;
        }
        ++r;
        std::cout << std::endl;
    }
    return 0;
}