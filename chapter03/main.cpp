#include <iostream>
#include <iomanip>
#include <string>
#include <vector>
#include <algorithm>

using std::cin;     using std::setprecision;
using std::cout;    using std::string;
using std::endl;    using std::streamsize;
using std::vector;  using std::sort;

int main() {
    cout << "Please input your name:";
    string name;
    cin >> name;
    cout << "Hello, " << name << " !" << endl;
    cout << "Please input your midterm and final exam grades:";
    double midterm, final;
    cin >> midterm >> final;
    cout << "Please input your homework grades:";
    double x;
    vector<double> homework;
    while (cin >> x) {
        homework.push_back(x);
    }
    typedef vector<double>::size_type vec_sz;
    vec_sz size = homework.size();
    if (size == 0) {
        cout << endl << "You must enter your grades. Please try again" << endl;
        return 1;
    } else {
        sort(homework.begin(), homework.end());
        vec_sz mid = size / 2;
        double median;
        median = size % 2 == 0 ? (homework[mid - 1] + homework[mid]) / 2 : homework[mid];
        streamsize prec = cout.precision();
        cout << "Your final grade is " << setprecision(3)
             << midterm * 0.2 + final * 0.4 + median * 0.4
             << setprecision(prec) << endl;
    }
//    streamsize prec = cout.precision(3);
//    cout << prec << endl;
//    cout << "Your final grade is " << midterm * 0.2 + final * 0.4 + sum / count * 0.4 << endl;
//    cout.precision(prec);
//    return 0;
}