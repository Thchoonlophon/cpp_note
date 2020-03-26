#include <iostream>
#include <ios>
#include <iomanip>
#include <string>
#include <vector>

using std::cin;     using std::setprecision;
using std::cout;    using std::string;
using std::endl;    using std::streamsize;
using std::vector;

int main() {
    cout << "Please input your name:";
    string name;
    cin >> name;
    cout << "Hello, " << name << " !" << endl;
    cout << "Please input your midterm and final exam grades:";
    double midterm, final;
    cin >> midterm >> final;
    cout << "Please input your homework grades:";
//    int count = 0;
//    double sum = 0;
    double x;
    vector<double> homework;
    while (cin >> x) {
//        ++count;
//        sum += x;
        homework.push_back(x);
    }
    typedef vector<double>::size_type vec_sz;
    vec_sz size = homework.size();
    streamsize prec = cout.precision();
    cout << "Your final grade is " << setprecision(3)
         << midterm * 0.2 + final * 0.4 + sum / count * 0.4
         << setprecision(prec) << endl;
//    streamsize prec = cout.precision(3);
//    cout << prec << endl;
//    cout << "Your final grade is " << midterm * 0.2 + final * 0.4 + sum / count * 0.4 << endl;
//    cout.precision(prec);
    return 0;
}