//
// Created by chenjin.qian on 2020/8/21.
//

#include "../head/get_grades.h"
#include <iostream>

using std::istream;     using std::vector;
using std::cin;

bool fgrade(const Student_info &s) {
    bool out = grade(s) < 60;
    return out;
}

bool compare(const Student_info &x, const Student_info &y) {
    bool out = x.name < y.name;
    return out;
}

istream &read_hw(istream &in, vector<double> &hw) {
    if (in) {
        hw.clear();
        double x;
        while (cin >> x)
            hw.push_back(x);
        in.clear();
    }
    return in;
}

istream &read(istream &in, Student_info &stu) {
    in >> stu.name >> stu.midterm >> stu.final;
    read_hw(in, stu.homework);
    return in;
}
