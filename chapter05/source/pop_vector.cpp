//
// Created by chenjin.qian on 2020/8/25.
//

#include "../head/pop_vector.h"

using std::vector;

vector<Student_info> extract_fails(vector<Student_info> &students) {
    vector<Student_info> fail;
    vector<Student_info>::size_type i = 0;
    while (i != students.size()) {
        if (fgrade(students[i])) {
            fail.push_back(students[i]);
            students.erase(students.begin() + i);
        } else
            ++i;
    }
    return fail;
}