<center><h1>The&nbsp;&nbsp;Exercises&nbsp;&nbsp;Of&nbsp;&nbsp;Chapter&nbsp;&nbsp;Three
</center>

## Q 3-0

### Compile, execute, and test the programs in this chapter. 

## Q 3-1

### Suppose we wish to find the median of a collection of values. Assume that we have read some of the values so far, and that we have no idea how many values remain to be read. Prove that we cannot afford to discard any of the values that we have read. Hint: One proof strategy is to assume that we can discard a value, and then find values for the unread—and therefore unknown—part of our collection that would cause the median to be the value that we discarded. 

I think that all of the Chinese students in middle school or even the  primary school had studied how to get a median, and we all know that we must get all of the numbers, then to get the median. If we discard any of the values that we have read, let's see what will happen next. 

|  discard   | whole array we get | median |       Observation        |
| :--------: | :----------------: | :----: | :----------------------: |
| no discard |     1,2,3,4,5      |   3    |           True           |
|     1      |      2,3,4,5       |  3.5   |          False           |
|     2      |      1,3,4,5       |  3.5   |          False           |
|     3      |      1,2,4,5       |   3    | False and False get True |
|     4      |      1,2,3,5       |  2.5   |          False           |
|     5      |      1,2,3,4       |  2.5   |          False           |

So we mustn't discard any of the values that we have read if we want to get a right answer.

## Q 3-2

### Write a program to compute and print the quartiles (that is, the quarter of the numbers with the largest values, the next highest quarter, and so on) of a set of integers. 

The question ask us to get quartiles of a array, but what it means? I have no idea with the word which called `quartile`, so I searched it in Google.Then I got it. The quartiles of a array contain `Q1`,`Q2` and `Q3`, these numbers cut the array to four parts, and the each part has the same length. So, we can know that the `Q2` is the median of this array, then we will get two parts which are have the same length, finally, we get the median of each part, the smaller is `Q1`,the other is `Q3`. 

I said like that maybe make you at a loss. Let's take a look at the picture below.

![mark](http://lynchow.com/upload_picture/20200401/A8kVVQ4Pg2tC.png?imageslim)

We can see that if a array is seems like that we can get quartiles easily, because they are the median of each part and the whole array. But if not, let's have a look.

![mark](http://lynchow.com/upload_picture/20200401/c9l6rfxvTlo9.png?imageslim)

So, let's see the code.

```c++
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
```

## Q 3-3

### Write a program to count how many times each distinct word appears in its input. 

