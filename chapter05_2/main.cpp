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
    vector<string> v = {"this is an", "example", "to", "illustrate", "framing"};
//    vector<string> ret = frame(v);
//    for (vector<string>::size_type i = 0; i != ret.size(); ++i) {
//        cout << ret[i] << endl;
//    }
    vector<string> v1 = {"this is not an", "new vector", "to get", "the names"};
//    vector<string> vs = vect(v, v1);
//    v.insert(v.end(), v1.begin(), v1.end());
    vector<string> ret = hcat(v,frame(v));
    for (vector<string>::const_iterator i = ret.begin(); i != ret.end(); ++i)
        cout << *i << endl;
    return 0;
}
