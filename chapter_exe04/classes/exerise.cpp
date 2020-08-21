//
// Created by chenjin.qian on 2020/8/20.
//

#include "exerise.h"
#include <string>

using std::to_string;

vector<unsigned int> max_length(double num) {
    unsigned int maxlen1 = 0, maxlen2 = 0;
    vector<unsigned int> out;
    for (double i = 1.5; i < num; ++i) {
        out.clear();
        maxlen1 = max(maxlen1, to_string(i).size());
        out.push_back(maxlen1);
        maxlen2 = max(maxlen2, to_string(i * i).size());
        out.push_back(maxlen2);
    }
    return out;
}