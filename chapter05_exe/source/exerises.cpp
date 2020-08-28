//
// Created by chenjin.qian on 2020/8/27.
//

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

string replace(const string &s, const string &old, const string &new_) {
    typedef string::size_type str_size;
    string x = "";
    str_size i = 0, j = 0, size_o = old.size();
    while (i != s.size()) {
        if (old == s.substr(i, size_o)) {
            x += s.substr(j, i - j) + new_;
            j = i + size_o;
            i += size_o;
        } else {
            ++i;
        }
    }
    return x;
}
