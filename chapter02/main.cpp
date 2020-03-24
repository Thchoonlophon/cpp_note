//#include <iostream>
//#include <string>
//
//using std::cout;
//using std::cin;
//using std::endl;
//using std::string;
//
//int main() {
//    cout << "Please enter your name: ";
//    string name;
//    cin >> name;
//    const string greeting = "Hello, " + name + " !";
//    const int pad = 1;
//    const int rows = pad * 2 + 3;
//    const string::size_type cols = greeting.size() + pad * 2 + 2;
//    cout << endl;
///*
////    int r = 0;
//    // these are my answer,but it's too low.
////    while (r != rows) {
////        int c = 0;
////        while (c != cols) {
////            if (r == 0 || r == rows - 1 || c == 0 || c == cols - 1) {
////                std::cout << "*";
////            } else if (r == 1 || r == rows - 2) {
////                std::cout << " ";
////            } else {
////                if (c == 1) {
////                    std::cout << " " + greeting + " ";
////                } else if (c == cols - 1) {
////                    std::cout << "*";
////                }
////            }
////            ++c;
////        }
////        ++r;
////        std::cout << std::endl;
////    }
////    while (r != rows) {
////        int c = 0;
////        while (c != cols) {
////            if (r == 0 || r == rows - 1 || c == 0 || c == cols - 1) {
////                std::cout << "*";
////            } else {
////                if (r == pad + 1 && c == pad + 1) {
////                    std::cout << greeting;
////                    c += greeting.size() - 1;
////                } else {
////                    std::cout << " ";
////                }
////            }
////            ++c;
////        }
////        ++r;
////        std::cout << std::endl;
////    }
//*/
//    for (int r = 0; r != rows; ++r) {
//        string::size_type c = 0;
//        while (c != cols) {
//            if (r == pad + 1 && c == pad + 1) {
//                cout << greeting;
//                c += greeting.size();
//            } else {
//                if (r == 0 || r == rows - 1 ||
//                    c == 0 || c == cols - 1) {
//                    cout << "*";
//                } else {
//                    cout << " ";
//                }
//                ++c;
//            }
//        }
//        cout << endl;
//    }
//    return 0;
//}

#include <iostream>
#include <string>

using std::cin;     using std::cout;
using std::endl;    using std::string;

int main() {
    /*
    cout << "Please input your name: ";
    string name;
    cin >> name;
    cout << endl;
    int pad = 1;
    int rows = pad * 2 + 1;
    string greeting = "Hello, " + name + " !";
    string::size_type cols = greeting.size();
    for (int r = 0; r != rows; ++r) {
        string::size_type c = 0;
        while (c != cols) {
            if (r == pad) {
                cout << greeting;
                c += greeting.size();
            } else {
                cout << "-";
                ++c;
            }
        }
        cout << endl;
    }
    cout << "Please input your name: ";
    cout << endl;
    string name;
    cin >> name;
    string greeting = "Hello, " + name + " !";
    int pad = 2;
    int rows = pad * 2 + 2 + 1;
    string::size_type cols = pad * 3 + greeting.size() + 2;
    for (int r = 0; r != rows; ++r) {
        string::size_type c = 0;
        while (c != cols) {
            if (r == 0 || r == rows - 1
                || c == 0 || c == cols - 1) {
                cout << "*";
                ++c;
            } else {
                if (r == pad + 1 && c == pad + 2) {
                    cout << greeting;
                    c += greeting.size();
                } else {
                    cout << " ";
                    ++c;
                }
            }
        }
        cout << endl;
    }
     */
    string name;
    int brow, snum, rows;
    cout << "Please input your name:";
    cin >> name;
    cout << "Please input the number of how many blank rows as you want:";
    cin >> brow;
    cout << "Please input the number of how many spaces from side to content as you want:";
    cin >> snum;
    cout << endl;
    string greeting = "Hello, " + name + " !";
    string::size_type cols = snum * 2 + greeting.size() + 2;
    rows = brow * 2 + 2 + 1;
    for (int r = 0; r != rows; ++r) {
        string::size_type c = 0;
        while (c != cols) {
            if (r == 0 || r == rows - 1 ||
                c == 0 || c == cols - 1) {
                cout << "*";
                ++c;
            } else {
                if (r == brow + 1 && c == snum + 1) {
                    cout << greeting;
                    c += greeting.size();
                } else {
                    if (r != brow + 1) {
                        string br(cols - 2, ' ');
                        cout << br;
                        c += cols - 2;
                    } else {
                        cout << " ";
                        ++c;
                    }
                }
            }
        }
        cout << endl;
    }
}
