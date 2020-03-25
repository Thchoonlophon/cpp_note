#include <iostream>
#include <ios>
#include <iomanip>
#include <string>

using std::cin;     using std::setprecision;
using std::cout;    using std::string;
using std::endl;    using std::streamsize;

int main() {
    cout << "Please input your name:";
    string name;
    cin >> name;
    cout << "Hello, " << name << " !" << endl;
    cout << "Please input your midterm and final exam grades:";
    double midterm, final;
    cin >> midterm >> final;
    cout << "Please input your homework grades:";
    int count = 0;
    double sum = 0;
    double x;
    while (cin >> x) {
        ++count;
        sum += x;
    }
    streamsize prec = cout.precision();
    cout << "Your final grade is " << setprecision(3)
         << midterm * 0.2 + final * 0.4 + sum / count * 0.4
         << setprecision(prec) << endl;
    return 0;
}