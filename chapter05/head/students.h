//
// Created by chenjin.qian on 2020/8/21.
//

#ifndef CHAPTER05_STUDENTS_H
#define CHAPTER05_STUDENTS_H


#include <string>
#include <vector>

struct Student_info {
    std::string name;
    double midterm, final;
    std::vector<double> homework;
};

bool fgrade(const Student_info &);


#endif //CHAPTER05_STUDENTS_H
