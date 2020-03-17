//
// Created by chenjin.qian on 2020/3/11.
//

#include <iostream>
#include <string>

//int main() {
////    std::string test = "hello world";
////    std::cout << test.size() << std::endl;
////    std::string test(10, '*');
////    std::string test1 = "hello ";
////    std::string test2 = "world";
////    std::string test = test1 + test2;
////    std::cout << test << std::endl;
//    std::cout << "Please input your name:";
//    std::string name;
//    std::cin >> name;
//    const std::string greeting = "Hello," + name + "!";
//    const std::string spaces(greeting.size(), ' ');
//    const std::string line_2 = "* " + spaces + " *";
//    const std::string line_1(line_2.size(), '*');
//    std::cout << std::endl;
//    std::cout << line_1 << std::endl;
//    std::cout << line_2 << std::endl;
//    std::cout << "* " + greeting + " *" << std::endl;
//    std::cout << line_2 << std::endl;
//    std::cout << line_1 << std::endl;
//}


// Exercises
int main() {
//    const std::string hello = "hello";
//    const std::string message = hello + ", world" + "!";
    /*
     * Clearly, it is permissible to define variables this way,
     * but why? In my opinion, hello is a const variable, but
     * we concatenated hello and two other strings is write
     * the result into the buffer, then read the value from
     * buffer and write it into the variable which named
     * message. So, throughout the whole process we didn't
     * change the value of either hello or message*/
    const std::string exclam = "!";
    const std::string message = "hello" + ", world" + exclam;
}
