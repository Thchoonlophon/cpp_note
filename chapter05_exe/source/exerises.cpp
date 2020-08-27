//
// Created by chenjin.qian on 2020/8/27.
//

#include "../header/exerises.h"
#include <iostream>

using std::vector;  using std::string;
using std::cout;    using std::endl;

vector<string> split(const string &s, const char &flag) {
    vector<string> ret;
    string x;
    typedef string::size_type str_size;
    str_size i = 0, j = 0;
    while (i != s.size()) {
        if (flag == s[i]) {
            x = s.substr(j, i - j);
            ret.push_back(x);
            j = i + 1;
        }
        ++i;
    }
    ret.push_back(s.substr(j, s.size() + 1));
    return ret;
}