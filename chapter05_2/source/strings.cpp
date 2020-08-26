
//
// Created by chenjin.qian on 2020/8/26.
//

#include "../header/strings.h"

using std::vector;  using std::string;
using std::isspace; using std::max;

vector<string> split(const string &s) {
    typedef string::size_type str_size;
    str_size i = 0;
    vector<string> ret;
    while (i != s.size()) {
        while (i != s.size() && isspace(s[i]))
            ++i;
        str_size j = i;
        while (j != s.size() && !isspace(s[j]))
            ++j;
        if (i != j) {
            ret.push_back(s.substr(i, j - i));
            i = j;
        }
    }
    return ret;
}

string::size_type width(const vector<string> &v) {
    string::size_type maxlen = 0;
    for (vector<string>::size_type i = 0; i != v.size(); ++i)
        maxlen = max(maxlen, v[i].size());
    return maxlen;
}