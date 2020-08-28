//
// Created by chenjin.qian on 2020/8/27.
//

#include <iostream>
#include "../header/exerises.h"

using std::vector;  using std::string;

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

vector<string> split(const string &s, const string &flag) {
    vector<string> ret;
    string x;
    typedef string::size_type str_size;
    str_size i = 0, j = 0, size_f = flag.size();
    while (i != s.size()) {
        if (flag == s.substr(i, size_f)) {
            x = s.substr(j, i - j);
            ret.push_back(x);
            j = i + size_f;
        }
        ++i;
    }
    ret.push_back(s.substr(j, s.size() + 1));
    return ret;
}

string replace(string &s, const string &old, const string &new_) {
    typedef string::size_type str_size;
    str_size i = 0, size_o = old.size();
    while (i != s.size()) {
        if (old == s.substr(i, size_o)) {
            s.replace(i, size_o, new_);
            i += size_o;
        } else
            ++i;
    }
    return s;
}

string join(const vector<string> &v, const string &s) {
    string x = v[0];
    for (vector<string>::const_iterator i = v.begin() + 1; i != v.end(); ++i)
        x += s + *i;
    return x;
}