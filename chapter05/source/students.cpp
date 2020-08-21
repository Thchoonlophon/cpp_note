//
// Created by chenjin.qian on 2020/8/21.
//

#include "../head/get_grades.h"


bool fgrade(const Student_info &s) {
    bool out = grade(s) < 60;
    return out;
}