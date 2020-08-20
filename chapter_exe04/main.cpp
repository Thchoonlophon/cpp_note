/*
#include "classes/exerise.h"
#include <iostream>
#include <iomanip>

using std::cout;
using std::cin;
using std::endl;
using std::max;

int main() {
    vector<Students_info> students;
    Students_info record;
    unsigned int maxlen = 0;
    cout << "Please input the info of students" << endl;
    while (read(cin, record)) {
        maxlen = max(maxlen, record.name.size());
    }
}*/

#include "classes/exerise.h"
#include <iostream>
#include <iomanip>

using std::cout;    using std::setw;
using std::endl;

int main() {
    unsigned int maxlen_base, maxlen_square;
    double max_number = 1000;
    maxlen_base = max_length(max_number)[0];
    maxlen_square = max_length(max_number)[1];
    for (double i = 1; i != 1000; ++i) {
        cout << setw(maxlen_base) << i
             << setw(maxlen_square + 1) << i * i << endl;
    }
    return 0;
}