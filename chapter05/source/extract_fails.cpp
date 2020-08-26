/*
//
// Created by chenjin.qian on 2020/8/25.
//

#include "../head/extract_fails.h"

using std::vector;

vector<Student_info> extract_fails(vector<Student_info> &students) {
    vector<Student_info> pass, fail;
    for (vector<Student_info>::size_type i = 0; i != students.size(); ++i) {
        if (fgrade(students[i]))
            fail.push_back(students[i]);
        else
            pass.push_back(students[i]);

    }
    students = pass;
    return fail;
}*/
