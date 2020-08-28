#include <iostream>
#include <string>
#include "header/exerises.h"

using std::string;  using std::vector;
using std::cout;    using std::endl;

int main() {
    string a = "123,,456,,789,,1011";
    vector<string> v = split(a, ",,");
    string x = join(v, ",");
    cout << x << endl;
//    string f = ",,";
//    vector<string> v = split(a, f);
//    string out = "[";
//    for (vector<string>::size_type i = 0; i != v.size(); ++i) {
//        out += "\"" + v[i] + "\"";
//        if (i < v.size() - 1)
//            out += ", ";
//    }
//    out += "]";
//    cout << out << endl;
    return 0;
}
