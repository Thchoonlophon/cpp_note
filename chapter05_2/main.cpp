#include <iostream>
#include "header/strings.h"

using std::vector;  using std::string;
using std::cout;    using std::getline;
using std::cin;     using std::endl;


int main() {
    /*string s;
    while (getline(cin, s)) {
        vector<string> v = split(s);
        for (vector<string>::size_type i = 0; i != v.size(); ++i) {
            cout << v[i];
        }
    }*/
    /*string s;
    vector<string> v;
    int t;
    cin >> t;
    cout << "**************************" << endl;
    cin.clear();
    while (getline(cin, s) && t >= 0) {
        v.push_back(s);
        --t;
    }
    for (vector<string>::size_type i = 0; i != v.size(); ++i) {
        cout << v[i] << endl;
    }
    string::size_type maxlen = width(v);
    cout << maxlen << endl;*/
    vector<string> v=[];
    vector<string> ret = frame(v);
    for (vector<string>::size_type i = 0; i != ret.size(); ++i) {
        cout << ret[i] << endl;
    }
    return 0;
}
