//
// Created by chenjin.qian on 2020/8/21.
//

#include "../head/get_grades.h"

using std::vector;

double grade(double mid, double final, const vector<double> &hw) {
    double homework = get_median(hw);
    double out = 0.2 * mid + 0.4 * final + 0.4 * homework;
    return out;
}

double grade(const Student_info &s) {

}