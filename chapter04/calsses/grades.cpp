//
// Created by chenjin.qian on 2020/8/20.
//

#include "grades.h"

double get_grade(double midterm, double final, const vector<double> &hw) {
    if (hw.size() == 0)
        throw domain_error("Student has no homework");
    double homework = get_median(hw);
    double out = 0.2 * midterm + 0.4 * final + 0.4 * homework;
    return out;
}

double grade(const Students_info &s) {
    double out = get_grade(s.midterm, s.final, s.homework);
    return out;
}