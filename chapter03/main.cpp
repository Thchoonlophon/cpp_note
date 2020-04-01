/*
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
//    cout << homework[-1] << endl;
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
}*/

/*
#include <algorithm>
#include <iomanip>
#include <ios>
#include <iostream>
#include <string>
#include <vector>

using std::cin;             // <iostream>
using std::cout;            // <iostream>
using std::endl;            // <iostream>
using std::setprecision;    // <iomanip>
using std::sort;            // <algorithm>
using std::streamsize;      // <ios>
using std::string;          // <string>
using std::vector;          // <string>

int main()
{
    // display header message
    cout << "***************************************************************\n"
            "*** This program computes quartiles given a list of numbers ***\n"
            "***************************************************************\n";
    cout << endl;

    // ask for a list of numbers and store the list as a vector
    cout << "Enter all a list of numbers: ";
    vector<double> v;
    double x;
    while (cin >> x)
        v.push_back(x);

    // check vector size and action accordingly
    cout << endl;
    typedef vector<double>::size_type vecSize;
    vecSize N = v.size();
    if (N ==0 )
    {
        cout << "You must enter some numbers! " << endl;
        return 1;
    }

    else if (N ==1 )
    {
        cout << " Only 1 number supplied. Q1, Q2, and Q3 all equate to " << v[0] << endl;
        return 0;
    }

    else
    {
        // sort the homework grades;
        sort(v.begin(),v.end());
    }

    // declare new variables
    vecSize NMod4 = (N % 4);  // identification of 1 of the 4 known datum distribution profiles
    string datumDistr = "";   // datum distribution profile
    vecSize M, ML, MU;        // core vector indices for quartile computation
    double m, ml, mu;         // quartile values are store here

    // compute quartiles for the 4 known patterns
    if ( NMod4 == 0 )
    {
        // Q1-Q3 datum distribution: [0 0 0]
        datumDistr = "[0 0 0]";
        M = N / 2;
        ML = M / 2;
        MU = M + ML;

        // grab quartile values
        ml= (v[ML] + v[ML-1]) / 2;     // datum: 0
        m = (v[M] + v[M-1]) / 2;       // datum: 0
        mu = (v[MU] + v[MU-1]) / 2;    // datum: 0
    }

    else if ( NMod4 == 1 )
    {
        // Q1-Q3 datum distribution: [0 1 0]
        datumDistr = "[0 1 0]";
        M = N / 2;
        ML = M / 2;
        MU = M + ML + 1;

        // grab quartile values
        datumDistr = "[0 0 0]";
        ml= (v[ML] + v[ML-1]) / 2;      // datum: 0
        m = v[M];                       // datum: 1
        mu = (v[MU] + v[MU-1]) / 2;     // datum: 0
    }

    else if ( NMod4 == 2 )
    {
        // Q1-Q3 datum distribution: [1 0 1]
        datumDistr = "[1 0 1]";
        M = N / 2;
        ML = M / 2;
        MU = M + ML;

        // grab quartile values
        ml= v[ML];                    // datum: 1
        m = (v[M] + v[M-1]) / 2;     // datum: 0
        mu = v[MU];                   // datum: 1
    }

    else if ( NMod4 == 3 )
    {
        // Q1-Q3 datum distribution: [1 1 1]
        datumDistr = "[1 1 1]";
        M = N / 2;
        ML = M / 2;
        MU = M + ML + 1;

        // grab quartile values
        ml= v[ML];                    // datum: 1
        m = v[M];                     // datum: 0
        mu = v[MU];                   // datum: 1
    }

    else
    {
        cout << "Unknown pattern discovered - new algorithm may be required.";
    }

    // Display results
    streamsize prec = cout.precision();
    cout << "Display the sorted (non-descending) vector below." << endl;
    cout << "Index: Number" << endl;
    for (vecSize i = 0; i !=  N; ++i)
    {
        cout << i << ": " << v[i] << endl;
    }
    cout << endl;
    cout << "Vector size: " << N << endl;
    cout << "Datum Distribution: " << datumDistr << endl;
    cout << setprecision(3) << endl
         << " Q1: " << ml << endl
         << " Q2: " << m << endl
         << " Q3: " << mu << endl
         << setprecision(prec);
}
*/

/*
#include <algorithm>
#include <iostream>
#include <vector>
#include <iomanip>

using std::cin;         using std::cout;
using std::sort;        using std::vector;
using std::endl;        using std::streamsize;
using std::setprecision;

int main() {
    cout << "Please input the numbers:";
    vector<double> array;
    double x;
    while (cin >> x) array.push_back(x);
    cout << endl;
    typedef vector<double>::size_type vec_sz;
    vec_sz size = array.size();
    if (size < 4) {
        cout << "You must input the all values" << endl;
        return 1;
    } else {
        double q1, q2, q3;
        vec_sz mid = size / 2;
        sort(array.begin(), array.end());
        q2 = size % 2 == 0 ? (array[mid - 1] + array[mid]) / 2 : array[mid];
        vec_sz mid1 = mid / 2;
        q1 = mid % 2 == 0 ? (array[mid1 - 1] + array[mid1]) / 2 : array[mid1];
        q3 = mid % 2 == 0 ?
             size % 2 == 0 ?
             (array[mid + mid1 - 1] + array[mid + mid1]) / 2 :
             array[mid + mid1] :
             size % 2 == 0 ? array[mid + mid1] : array[mid + 1 + mid1];
        streamsize prec = cout.precision();
        cout << "Q1: " << setprecision(3) << q1 << endl
             << "Q2: " << q2 << endl << "Q3: " << q3
             << setprecision(prec) << endl;
    }
}
*/

/*
#include <algorithm>
#include <iostream>
#include <string>
#include <vector>

using std::cin;         using std::string;
using std::cout;        using std::endl;
using std::vector;      using std::sort;

int main() {
    cout << "Please input all words:";
    vector<string> words;
    string x;
    while (cin >> x) words.push_back(x);
    cout << endl;
    sort(words.begin(), words.end());
    typedef vector<string>::size_type vec_sz;
    vec_sz size = words.size();
    if (size <= 1) {
        int count = size;
        cout << count << endl;
        return 0;
    }
    int count = 1;
    for (vec_sz i = 1; i != size; i++) {
        if (words[i] != words[i - 1]) {
            ++count;
        }
    }

    cout << count << endl;
}*/

