#include <iostream>
#include <string>
#include "header/exerises.h"

using std::string;  using std::vector;
using std::cout;    using std::endl;

int main() {
    string a = "123,456,789,1011";
    char f = ',';
    vector<string> v = split(a, f);
    string out = "[";
    for (vector<string>::size_type i = 0; i != v.size(); ++i) {
        out += "\"";
        out += v[i];
        out += "\"";
        if (i < v.size() - 1)
            out += ", ";
    }
    out += "]";
    cout << out << endl;
}
