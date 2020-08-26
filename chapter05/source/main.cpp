#include <iostream>
//#include <iomanip>
//#include "../head/get_grades.h"
#include "../head/string_sp.h"

using std::vector;     using std::streamsize;
//using std::setw;       using std::setprecision;
using std::cin;        using std::cout;
using std::endl;       using std::max;
using std::string;     using std::domain_error;
//using std::sort;

int main() {
    /*vector<Student_info> students;
    Student_info record;
    string::size_type maxlen = 0;
    while (read(cin, record)) {
        maxlen = max(maxlen, record.name.size());
        students.push_back(record);
    }
    sort(students.begin(), students.end(), compare);
    for (vector<Student_info>::size_type i = 0; i != students.size(); ++i) {
        cout << setw(maxlen + 1) << students[i].name;
        try {
            double grades = grade(students[i]);
            streamsize prec = cout.precision();
            cout << setprecision(4) << grades << setprecision(prec);
        } catch (domain_error e) {
            cout << e.what();
        }
        cout << endl;
    }*/
    string a = "   jingxun   ";
    vector<string> b = split(a);
    for (vector<string>::size_type i = 0; i != b.size(); ++i) {
        cout<<b[i];
    }
    return 0;
}
