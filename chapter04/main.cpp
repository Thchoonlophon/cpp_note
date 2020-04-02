#include <algorithm>
#include <iomanip>
#include <iostream>
#include <string>
#include <vector>
#include <stdexcept>

using std::cout;            using std::cin;
using std::sort;            using std::string;
using std::setprecision;    using std::vector;
using std::streamsize;      using std::endl;
using std::domain_error;

double homework(const vector<double>& hw) {
    sort(hw.begin(), hw.end());
    typedef vector<double>::size_type vec_sz;
    vec_sz size = hw.size();
    if (size == 0) {
        cout << "you must input all of the homework!" << endl;
        throw domain_error("empty vector");
    }
    vec_sz mid = size / 2;
    double median = size % 2 == 0 ? (hw[mid - 1] + hw[mid]) / 2 : hw[mid];
    return median;
}

double grade(double midterm, double final, double home) {
    return 0.2 * midterm + 0.4 * final + 0.4 * home;
}

int main() {
    cout << "please input your name: ";
    string name;
    cin >> name;
    cout << endl;
    cout << "please input midterm and final grades: ";
    double mid, fin;
    cin >> mid >> fin;
    cout << endl;
    cout << "please input all homeworks: ";
    vector<double> hw;
    double x;
    while (cin >> x) hw.push_back(x);
    double home = homework(hw);
    double res = grade(mid, fin, home);
    streamsize prec = cout.precision();
    cout << name <<", your final grade is " << setprecision(3)
         << res << setprecision(prec) << endl;
}
