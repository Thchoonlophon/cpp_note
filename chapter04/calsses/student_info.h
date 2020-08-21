//
// Created by chenjin.qian on 2020/8/20.
//

#ifndef CHAPTER04_STUDENT_INFO_H
#define CHAPTER04_STUDENT_INFO_H

#include <iostream>
#include <string>
#include <vector>

using std::string;  using std::vector;  using std::istream;

struct Students_info {
    string name;
    double midterm, final;
    vector<double> homework;
};

bool compare(const Students_info &, const Students_info &);

istream &read(istream &, Students_info &);

istream &read_hw(istream &, Students_info &);

#endif //CHAPTER04_STUDENT_INFO_H
