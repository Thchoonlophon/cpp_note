#include <iostream>
#include <string>

using std::cout;
using std::cin;
using std::endl;
using std::string;

int main() {
    cout << "Please enter your name: ";
    string name;
    cin >> name;
    const string greeting = "Hello, " + name + " !";
    const int pad = 1;
    const int rows = pad * 2 + 3;
    const string::size_type cols = greeting.size() + pad * 2 + 2;
    cout << endl;
/*
//    int r = 0;
    // these are my answer,but it's too low.
//    while (r != rows) {
//        int c = 0;
//        while (c != cols) {
//            if (r == 0 || r == rows - 1 || c == 0 || c == cols - 1) {
//                std::cout << "*";
//            } else if (r == 1 || r == rows - 2) {
//                std::cout << " ";
//            } else {
//                if (c == 1) {
//                    std::cout << " " + greeting + " ";
//                } else if (c == cols - 1) {
//                    std::cout << "*";
//                }
//            }
//            ++c;
//        }
//        ++r;
//        std::cout << std::endl;
//    }
//    while (r != rows) {
//        int c = 0;
//        while (c != cols) {
//            if (r == 0 || r == rows - 1 || c == 0 || c == cols - 1) {
//                std::cout << "*";
//            } else {
//                if (r == pad + 1 && c == pad + 1) {
//                    std::cout << greeting;
//                    c += greeting.size() - 1;
//                } else {
//                    std::cout << " ";
//                }
//            }
//            ++c;
//        }
//        ++r;
//        std::cout << std::endl;
//    }
*/
    for (int r = 0; r != rows; ++r) {
        string::size_type c = 0;
        while (c != cols) {
            if (r == pad + 1 && c == pad + 1) {
                cout << greeting;
                c += greeting.size();
            } else {
                if (r == 0 || r == rows - 1 ||
                    c == 0 || c == cols - 1) {
                    cout << "*";
                } else {
                    cout << " ";
                }
                ++c;
            }
        }
        cout << endl;
    }
    return 0;
}