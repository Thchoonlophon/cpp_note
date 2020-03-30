#include <algorithm>
#include <iomanip>
#include <ios>  // have no idea with it,the program can work without this include
#include <iostream>
#include <string>
#include <vector>

using std::cin;             using std::sort;
using std::cout;            using std::streamsize;
using std::endl;            using std::string;
using std::setprecision;    using std::vector;

int main() {
    cout << "Please input your name:";
    string name;
    cin >> name;
    cout << "Hello, " << name << " !" << endl;
    cout << "Please input your midterm and final exam grades:";
    double midterm, final;
    cin >> midterm >> final;
    cout << "Please input your homework grades:";
    vector<double> homework;
    double x;
    while (cin >> x) homework.push_back(x); // What??
    typedef vector<double>::size_type vec_sz;
    vec_sz size = homework.size();
    if (size == 0) {
        cout << endl << "You must enter your grades. Please try again" << endl;
        return 1;
    }
    sort(homework.begin(), homework.end());
    vec_sz mid = size / 2;
    double median;
    median = size % 2 == 0 ? (homework[mid - 1] + homework[mid]) / 2 : homework[mid];
    streamsize prec = cout.precision();
    cout << "Your final grade is " << setprecision(3)
         << midterm * 0.2 + final * 0.4 + median * 0.4
         << setprecision(prec) << endl;
    return 0;
//    streamsize prec = cout.precision(3);
//    cout << prec << endl;
//    cout << "Your final grade is " << midterm * 0.2 + final * 0.4 + sum / count * 0.4 << endl;
//    cout.precision(prec);
//    return 0;
}