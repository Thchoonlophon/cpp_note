#include <iostream>
#include "header/strings.h"

using std::vector;  using std::string;
using std::cout;    using std::getline;
using std::cin;     using std::endl;


int main() {
    string s;
    while (getline(cin, s)) {
        vector<string> v = split(s);
        for (vector<string>::size_type i = 0; i != v.size(); ++i) {
            cout << v[i];
        }
    }
    return 0;
}
