/*
#include <iostream>
#include <iomanip>
#include <vector>
#include <algorithm>
#include <string>
#include <istream>

using std::vector;          using std::sort;
using std::domain_error;    using std::string;
using std::cout;            using std::cin;
using std::endl;            using std::istream;
using std::streamsize;      using std::setprecision;

double get_median(vector<double> vec) {
    typedef vector<double>::size_type vec_sz;
    vec_sz size = vec.size();
    sort(vec.begin(), vec.end());
    vec_sz mid = size / 2;
    double out = size % 2 == 0 ? (vec[mid] + vec[mid + 1]) / 2 : vec[mid];
    return out;
}

double get_grade(double midterm, double final, const vector<double> &hw) {
    if (hw.size() == 0)
        throw domain_error("Student has no homework");
    double homework = get_median(hw);
    double out = 0.2 * midterm + 0.4 * final + 0.4 * homework;
    return out;
}

istream &read_hw(istream &in, vector<double> &hw) {
    if (in) {
        hw.clear();
        double x;
        while (in >> x)
            hw.push_back(x);
        in.clear();
    }
    return in;
}

int main() {
    cout << "Please input your name:";
    string name;
    cin >> name;
    cout << endl << "Please input your midterm and your final:";
    double midterm, final;
    cin >> midterm >> final;
    cout << endl << "Please input your homework grade:";
    vector<double> homework;
    read_hw(cin, homework);
    try {
        double grade = get_grade(midterm, final, homework);
        streamsize prec = cout.precision();
        cout << "Your grade is:" << setprecision(4)
             << grade << setprecision(prec) << endl;
    } catch (domain_error) {
        cout << endl << "You must enter your greads."
             << "Please try again." << endl;
        return 1;
    }
    return 0;
}*/

#include "calsses/grades.h"
#include <istream>
#include <iostream>
#include <iomanip>

using std::cin;         using std::cout;
using std::setw;        using std::streamsize;
using std::endl;        using std::setprecision;
using std::max;

int main() {
    vector<Students_info> students;
    Students_info record;
    string::size_type maxlen = 0;
    while (read(cin, record)) {
        maxlen = max(maxlen, record.name.size());
        students.push_back(record);
    }
    sort(students.begin(), students.end(), compare);
    for (vector<Students_info>::size_type i = 0; i != students.size(); ++i) {
        cout << setw(maxlen + 1) << students[i].name;
        try {
            double the_grades = grade(students[i]);
            streamsize prec = cout.precision();
            cout << setprecision(4) << the_grades << setprecision(prec);
        } catch (domain_error e) {
            cout << e.what();
        }
        cout << endl;
    }
    return 0;
}
