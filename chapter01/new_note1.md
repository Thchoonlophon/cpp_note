## String operate

### Get the length of a string

In CPlusPlus,we think the string is a object,if we wanna get a length of a string, we can call the method which is named size of the string which is the target string directly.

For a example:

```C++
#include <iostream> 
#include <string>

int main(){
    std::string test = "hello world";
    std::cout << test.size() << std::endl;
}

>>> 11
```

### Get the string filled by a char

In standard library, we can get a string which is filled by one char. Its length is specified by us,but how to do this? We can just call standard library to define a string variable,and need not to give a value to the variable,then Enclose the length and padding with parentheses immediately after the variable name.There is on important thing is we have to enclose the filler in single quotation marks.

For a example:

```C++
#include <iostream>
#include <string>

int main(){
    std::string test(10,'*');
    std::cout << test << std::endl;
}

>>> **********
```

### String addition

In CPlussPluss,the string addition is seems like the operate in Python. If we use one string to add another, we can get a new string which two strings are concatenated.

For a example:

```C++
#include <iostream>
#include <string>

int main(){
    std::string test1 = "hello ";
    std::string test2 = "world";
    std::string test = test1 + test2;
    std::cout << test << std::endl;
}

>>> hello world
```
