<center><h1>The&nbsp;&nbsp;Exercises&nbsp;&nbsp;Of&nbsp;&nbsp;Chapter&nbsp;&nbsp;Two
</center>

## Change the framing program so that it writes its greeting with no separation from the frame. 

At first I didn't understand the meaning of the question, so I  read the same book which is translated in Chinese.  Then I think my answer would like that.

```C++
#include <iostream>
#include <string>

using std::cin;     using std::cout;
using std::endl;    using std::string;

int main(){
    cout << "Please input your name: ";
    string name;
    cin >> name;
    cout << endl;
    int pad = 0;  // set no separation
    int rows = pad * 2 + 2 + 1; // set rownum
    string greeting = "Hello, " + name + " !";
    string::size_type cols = greeting.size();
    for (int r = 0; r != rows; ++r) {
        string::size_type c = 0;
        while (c != cols) {
            if (r == pad) {
                cout << greeting;
                c += greeting.size();
            } else {
                cout << "-";
                ++c;
            }
        }
        cout << endl;
    }
}
```

## Change the framing program so that it uses a different amount of space to separate sides from the greeting than it uses to separate the top and bottom borders from the greeting. 

In this question, We just need change the value of variable which is named pad, then we can get a new frame which is uses a different amount of space to separate sides from the greeting than it uses to separate the top and bottom borders from the greeting. 

```C++
#include <iostream>
#include <string>

using std::cin;     using std::cout;
using std::endl;    using std::string;

int main(){
    cout << "Please input your name: ";
    cout << endl;
    string name;
    cin >> name;
    string greeting = "Hello, " + name + " !";
    int pad = 2;
    int rows = pad * 2 + 2 + 1;
    string::size_type cols = pad * 3 + greeting.size() + 2;
    for (int r = 0; r != rows; ++r) {
        string::size_type c = 0;
        while (c != cols) {
            if (r == 0 || r == rows - 1
                || c == 0 || c == cols - 1) {
                cout << "*";
                ++c;
            } else {
                if (r == pad + 1 && c == pad + 2) {
                    cout << greeting;
                    c += greeting.size();
                } else {
                    cout << " ";
                    ++c;
                }
            }
        }
        cout << endl;
    }
}
```

## Rewrite the framing program to ask the user to supply the amount of spacing to leave between the frame and the greeting. 

We can just modify the program above to get this result.

```C++
#include <iostream>
#include <string>

using std::cin;     using std::cout;
using std::endl;    using std::string;

int main(){
    string name;
    int brow, snum, rows;
    cout << "Please input your name:";
    cin >> name;
    cout << "Please input the number of how many blank rows as you want:";
    cin >> brow;
    cout << "Please input the number of how many spaces from side to content as you want:";
    cin >> snum;
    cout << endl;
    string greeting = "Hello, " + name + " !";
    string::size_type cols = snum * 2 + greeting.size() + 2;
    rows = brow * 2 + 2 + 1;
    for (int r = 0; r != rows; ++r) {
        string::size_type c = 0;
        while (c != cols) {
            if (r == 0 || r == rows - 1 ||
                c == 0 || c == cols - 1) {
                cout << "*";
                ++c;
            } else {
                if (r == brow + 1 && c == snum + 1) {
                    cout << greeting;
                    c += greeting.size();
                } else {
                    cout << " ";
                    ++c;
                }
            }
        }
        cout << endl;
    }
}
```

## The framing program writes the mostly blank lines that separate the borders from the greeting one character at a time. Change the program so that it writes all the spaces needed in a single output expression. 

```C++
#include <iostream>
#include <string>

using std::cin;     using std::cout;
using std::endl;    using std::string;

int main(){
    string name;
    int brow, snum, rows;
    cout << "Please input your name:";
    cin >> name;
    cout << "Please input the number of how many blank rows as you want:";
    cin >> brow;
    cout << "Please input the number of how many spaces from side to content as you want:";
    cin >> snum;
    cout << endl;
    string greeting = "Hello, " + name + " !";
    string::size_type cols = snum * 2 + greeting.size() + 2;
    rows = brow * 2 + 2 + 1;
    for (int r = 0; r != rows; ++r) {
        string::size_type c = 0;
        while (c != cols) {
            if (r == 0 || r == rows - 1 ||
                c == 0 || c == cols - 1) {
                cout << "*";
                ++c;
            } else {
                if (r == brow + 1 && c == snum + 1) {
                    cout << greeting;
                    c += greeting.size();
                } else {
                    if (r != brow + 1) {
                        string br(cols - 2, ' ');
                        cout << br;
                        c += cols - 2;
                    } else {
                        cout << " ";
                        ++c;
                    }
                }
            }
        }
        cout << endl;
    }
}
```

## Write a set of  "*"  characters so that they form a square, a rectangle, and a triangle. 

```C++
#include <iostream>
#include <string>

using std::cout;	using std::endl;    
using std::string;

int main(){
    int side = 9;
    int mid_line = side / 2 + 1;
    int max_num = mid_line * 2 - 1;
    for (int i = 0; i != side; ++i) {
        int spaces = i <= 5 ? (mid_line - (i + 1)) : (i + 1 - mid_line);
        int count_x = 0;
        for (int j = 0; j != max_num; j++) {
            if (j >= spaces && (j + 1 - spaces) % 2 == 1 &&
                count_x < (max_num - spaces * 2 + 1) / 2) {
                cout << "*";
                ++count_x;
            } else {
                cout << " ";
            }
        }
        cout << endl;
    }
    for (int i = 0; i != side; ++i) {
        for (int j = 0; j != side; ++j) {
            cout << "*";
        }
        cout << endl;
    }
    max_num = side * 2 - 1;
    for (int i = 0; i != side; ++i) {
        int spaces = side - (i + 1);
        int count_x = 0;
        for (int j = 0; j != max_num; ++j) {
            if (j >= spaces && (j + 1 - spaces) % 2 == 1 &&
                count_x < (max_num - spaces * 2 + 1) / 2) {
                cout << "*";
                ++count_x;
            } else {
                cout << " ";
            }
        }
        cout << endl;
    }
}
```

## What does the following code do? 

```C++
int i = 0;
while (i < 10) {
i += 1;
std::cout << i << std::endl;
}
```

Through all the code ,maybe we can guess that the program gonna output the number from 1 to 10, and print each number in a new line. like that.

```
1
2
3
4
5
6
7
8
9
10
```

## Write a program to count down from 10 to -5 

```c++
#include <iostream>

using std::cout;	using std::endl;

int main(){
    for (int i = 10; i != -5 - 1; i--) {
        cout << i << endl;
    }
}
```

## Write a program to generate the product of the numbers in the range [1, 10) 

```c++
#include <iostream>

using std::cout;	using std::endl;

int main(){
    int res = 1;
    for (int i = 1; i != 10; i++) {
        res *= i;
    }
    cout << res << endl;
}
```

## Write a program that asks the user to enter two numbers and tells the user which number is larger than the other. 

```c++
#include <iostream>

using std::cout;	using std::endl;

int main(){
    int num1, num2;
    cout << "Please input num1:";
    cin >> num1;
    cout << "Please input num2:";
    cin >> num2;
    string res = num1 > num2 ? "num1 is larger than num2" : 
    			 num1 < num2 ? "num2 is larger than num1" : 
    						   "num1 is equal to num2";
    cout << res << endl;
}
```

## Explain each of the uses of std:: in the following program: 

```c++
int main() {
	int k = 0;
	while (k != n) { // invariant: we have written k asterisks so far
		using std::cout;
		cout << "*";
		++k;
	}
	std::cout << std::endl; // std:: is required here
	return 0;
}
```



