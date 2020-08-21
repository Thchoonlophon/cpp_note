//
// Created by chenjin.qian on 2020/8/20.
//

#include "student_info.h"

istream &read_hw(istream &in, vector<double> &hw) {
    if (in) {
        hw.clear();
        double x;
        while (in >> x)
            hw.push_back(x);
        in.clear();
    }
    return in;
}

istream &read(istream &is, Students_info &s) {
    is >> s.name >> s.midterm >> s.final;
    read_hw(is, s.homework);
    return is;
}

bool compare(const Students_info &x, const Students_info &y) {
    bool out = x.name < y.name;
    return out;
}