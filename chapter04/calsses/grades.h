//
// Created by chenjin.qian on 2020/8/20.
//

#ifndef CHAPTER04_GRADES_H
#define CHAPTER04_GRADES_H

#include "student_info.h"
#include "median.h"
#include <stdexcept>

using std::domain_error;

double get_grade(double, double, const vector<double> &);

double grade(const Students_info &);

#endif //CHAPTER04_GRADES_H
