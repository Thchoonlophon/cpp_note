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

using std::cout;    using std::endl;
using std::string;  using std::cin;

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
    int side = 9;
    int mid_line = side / 2 + 1;
    int max_num = mid_line * 2 - 1;
    for (int i = 0; i != side; ++i) {
        int spaces = i <= 5 ? (mid_line - (i + 1)) : (i + 1 - mid_line);
        int count_x = 0;
        for (int j = 0; j != max_num; j++) {
            if (j >= spaces && (j + 1 - spaces) % 2 == 1 &&
                count_x < (max_num - spaces * 2 + 1) / 2) {
                cout << "*";
                ++count_x;
            } else {
                cout << " ";
            }
        }
        cout << endl;
    }
    for (int i = 0; i != side; ++i) {
        for (int j = 0; j != side; ++j) {
            cout << "*";
        }
        cout << endl;
    }
    max_num = side * 2 - 1;
    for (int i = 0; i != side; ++i) {
        int spaces = side - (i + 1);
        int count_x = 0;
        for (int j = 0; j != max_num; ++j) {
            if (j >= spaces && (j + 1 - spaces) % 2 == 1 &&
                count_x < (max_num - spaces * 2 + 1) / 2) {
                cout << "*";
                ++count_x;
            } else {
                cout << " ";
            }
        }
        cout << endl;
    }
    int i = 0;
    while (i < 10) {
        i += 1;
        cout << i << endl;
    }
    for (int i = 10; i != -5 - 1; i--) {
        cout << i << endl;
    }
    int res = 1;
    for (int i = 1; i != 10; i++) {
        res *= i;
    }
    cout << res;
     */
    int num1, num2;
    cout << "Please input num1:";
    cin >> num1;
    cout << "Please input num2:";
    cin >> num2;
    string res = num1 > num2 ? "num1 is larger than num2" : num1 < num2 ? "num2 is larger than num1"
                                                                        : "num1 is equal to num2";
    cout << res << endl;
}
