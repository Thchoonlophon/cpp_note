<center><h1>The&nbsp;&nbsp;Exercises&nbsp;&nbsp;Of&nbsp;&nbsp;Chapter&nbsp;&nbsp;One
</center>

## Compile, execute, and test the programs in this chapter. 

I have tested and run all the programs in this chapter, and this problem is complete.

## Are the following definitions valid? Why or why not? (1-1,1-2)

At first, I think it's clearly, it is permissible to define variables this way, why? In my opinion, hello is a const variable, but concatenated hello  and two other strings is write result into the buffer, then read the value from and write it into the variable which named  message. So, throughout the whole process we didn't the value of either hello or message. 

But when I see next question, I think that question is the same as this question, then I run the program which is in the next question, but the program crashed. Then I know about that I got a wrong understanding above.

The compiler told me the information like that "**_error: invalid operands of types 'const char [4]' and 'const char [4]' to binary 'operator+_**'". But I really don't know why about this. 

Finally, I found someone got in the same trouble like me, and he gave me the answer. Because if we define a variable and initialize the variable with a string**(the "string" here is means a string object,not type)**, then the type of this variable is **_string_**, but if we don't define a variable to hold the string, just write some character and Put it in double quotation marks, this string will be a **string literal** !  I knew that the length of a string is usually the number of character plus one – that plus one is for reserving a space for a backslash, **\\** , character at the end. So the use of the concatenation operator is not valid. i.e. we bump into a “taboo” scenario: string literal + string literal. This is not valid. But if we add a string literal to a string, we will get a new object, and its type is **string** ! This discovery is very important ! So this discovery can explains both of these problems. Now let's see what's happened in the programs bellow.

### Question   1-1

```C++
#include <iostream>
#include <string>
int main(){
    const std::string hello = "hello";
	const std::string message = hello + ", world" + "!";
}
```

According to the priority of the operation, the program will run like this:

```C++
#include <iostream>
#include <string>
int main(){
    const std::string hello = "hello";
	const std::string message = (hello + ", world") + "!";
}
// Then let's see the type
···
const std::string message = ((a string) + (a string literal)) + (a string literal);
						  = (a string) + (a string literal);
					      = (a string)
···
```

### Question   1-1

But in this question

```C++
#include <iostream>
#include <string>
int main(){
    const std::string exclam = "!";
    const std::string message = "hello" + ", world" + exclam;
}
```

According to the priority of the operation, the program will run like this, let's see what is the program gonna do:

```C++
#include <iostream>
#include <string>
int main(){
    const std::string exclam = "!";
    const std::string message = ("hello" + ", world") + exclam;
}
// Then the program is gonna panic
···
const std::string message = ((a string literal) + (a string literal)) + (a string);
					      = (compilation error) + (a string)
···
```

So, through above all we can know that I know the program in question 1-1 is valid, but not in question 1-2.





