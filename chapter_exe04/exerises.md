<center><h1> The exerise of chapter 4 </h1></center>

## 4-1 
### Question :  We noted in §4.2.3/65 that it is essential that the argument types in a call to max match exactly. Will the following code work? If there is a problem, how would you fix it?

```c++
int maxlen;
Student_info s;
max(s.name.size(), maxlen);
```
---

### Answer  :

As we all know that if we want do define a variable to keep where the size or the length or the width or anything else like above, we should use the type which named `size_type` of the standard library. In this question, we define a variable with the type `int` to instead of the type `size_type`. But  according to my understanding and judgment, Imma get a `compile error`. I think all of us will give the same answer for this question, of cause nobody will write `C++` codes in a `txt` editor, so we can see the notification about this error when we write the code above in our `IDE`. But why that? Let's have a look through at the definition of the function `max` at first.

```c++
/**
   *  @brief This does what you think it does.
   *  @ingroup sorting_algorithms
   *  @param  __a  A thing of arbitrary type.
   *  @param  __b  Another thing of arbitrary type.
   *  @return   The greater of the parameters.
   *
   *  This is the simple classic generic implementation.  It will work on
   *  temporary expressions, since they are only evaluated once, unlike a
   *  preprocessor macro.
  */
  template<typename _Tp>
    _GLIBCXX14_CONSTEXPR
    inline const _Tp&
    max(const _Tp& __a, const _Tp& __b)
    {
      // concept requirements
      __glibcxx_function_requires(_LessThanComparableConcept<_Tp>)
      //return  __a < __b ? __b : __a;
      if (__a < __b)
	return __b;
      return __a;
    }
```

We can see this function contained two params, and we also know that both of these two params can be a arbitrary type by read the comments. But one important thing in the codes above tells us that the function `max` can and must return only one immutable type, if there is any difference between these params, it will be contrary to the rule which was statemented in the definition , that function `max` must return only one immutable type. So we can get a theorem that we must pass two params that keep the same type into the function `max` to make sure the syntax is correct.

Then let's see the codes in this question above again. That function `max` got two params but one of them is type `int`, the other one is type `string::size_type`, literally,we can see that the type of one param is different from the other one. But it's not the good idea that we just give a judgment literally. So let's see why the `string::size_type` is different from the `int`. In the front chapter, we learned that type `size_type` is the references of the type `unsigned int`.

| type         | bytes   | range                          |
| ------------ | ------- | ------------------------------ |
| int          | 4 bytes | from -2147483648 to 2147483647 |
| unsigned int | 4 bytes | from 0 to 4294967295           |

We can know that the data structure of them are differently, so if we pass both of `int` and `unsigned int` into function `max` will get a `compile error`.

But if we do not want to statement a variable with type `size_type` we can use the type `unsigned int` to instead but not type `int`.

## 4-2

### Question :  Write a program to calculate the squares of int values up to 100. The program should write two columns: The first lists the value; the second contains the square of that value. Use setw (described above) to manage the output so that the values line up in columns.  

### Answer :

This question is easy, I need not to write so many words to show us that how to solve this question.

This question is to calculate the squares of int values up to 100, the first, we know that the `maxlength` of the base number is 3, and the max of squares is the square of 100, and the length of it is 5, then wen can write the code to solve this question.

```c++
#include <iostream>
#include <iomanip>

using std::cout;    using std::setw;
using std::endl;

int main() {
    for (int i = 1; i <= 100; ++i) {
        cout << setw(3) << i << setw(5) << i * i << endl;
    }
    return 0;
}
```

But there is one thing was overlooked because of my careless. the code above is correct, but the last line of the output seems like not very good. like this:

```c++
10010000 // I got this;
// But I wanna it seems like 100 10000
```

OK, OK, I got it. the function `setw` will set the width of the column, if the output is shorter than the width which was set before, the implementation will add a space in front of the output. So I just need modify this:

```c++
···
cout << setw(3) << i << setw(6) << i * i << endl;
···
```

## 4-3

### Question :  What happens if we rewrite the previous program to allow values up to but not including 1000 but neglect to change the arguments to setw ? Rewrite the program to be more robust in the face of changes that allow i to grow without adjusting the setw arguments.  

### Answer :

The square of 1000 is 1000000, the length of it is 7, so I speculate that the length of 999's square is 6, and the maxlength of base number is still 3, the code before I set the width of squares' column is 6, so it's easy to know that when the squares less-than 100000, the output will be normal, else we will get only one column which is contains both of base number and squares. 

So I modified my code like this:

```c++
// classes/exercise.cpp
#include "exerise.h"
#include <string>

using std::to_string;

vector<unsigned int> max_length(int num) {
    unsigned int maxlen1 = 0, maxlen2 = 0;
    vector<unsigned int> out;
    for (int i = 1; i < num; ++i) {
        out.clear();
        maxlen1 = max(maxlen1, to_string(i).size());
        out.push_back(maxlen1);
        maxlen2 = max(maxlen2, to_string(i * i).size());
        out.push_back(maxlen2);
    }
    return out;
}

// classes/exercise.cpp
#ifndef CHAPTER_EXE04_EXERISE_H
#define CHAPTER_EXE04_EXERISE_H

#include <algorithm>
#include <vector>

using std::max;     using std::vector;

vector<unsigned int> max_length(int);

#endif

// main.cpp
#include "classes/exerise.h"
#include <iostream>
#include <iomanip>

using std::cout;    using std::setw;
using std::endl;    

int main() {
    unsigned int maxlen_base, maxlen_square;
    int max_number = 1000;
    maxlen_base = max_length(max_number)[0];
    maxlen_square = max_length(max_number)[1];
    for (int i = 1; i != 1000; ++i) {
        cout << setw(maxlen_base) << i
             << setw(maxlen_square + 1) << i * i << endl;
    }
    return 0;
}
```

## 4-4

### Question :  Now change your squares program to use double values instead of ints . Use manipulators to manage the output so that the values line up in columns.  

### Answer :

This question I got solved in last question, we can just modify this to finish it.

## 4-5

### Question :  Write a function that reads words from an input stream and stores them in a vector. Use that function both to write programs that count the number of words in the input, and to count how many times each word occurred.  

