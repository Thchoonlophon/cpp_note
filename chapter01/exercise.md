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

## Is the following program valid? If so, what does it do? If not, why not? 

```C++
#include <iostream>
#include <string>
int main(){
	{ 
        const std::string s = "a string";
		std::cout << s << std::endl; 
    }
    { 
        const std::string s = "another string";
		std::cout << s << std::endl; 
    }
	return 0;
}
```

Obviously, it's nothing wrong with the program. We can see that there is only one variable in this program which is named s, and it's a const variable. As is known, if  we've already initialized a const variable, and then we will not allow any further changes to this const variable, but why is it that we've assigned two different values to this constant and it works perfectly?

Let's look back at the program above. There are two blocks(the code which is enclosed in curly braces) in the main function. In the first block, we defined a const variable which is named s, and initialized s with "a string". Then  we output s, and close the first block. At this time, the life cycle of s has passed. So s will be undefined that we can define it in the second block again.

## What about this one? What if we change }} to };} in the third line from the end? 

```C++
#include <iostream>
#include <string>
int main(){
    { 
        const std::string s = "a string";
    	std::cout << s << std::endl;    
        { 
            const std::string s = "another string";
    		std::cout << s << std::endl; 
        }
    }
    return 0;
}
```

At first, I can tell you the answer is no. Then let's see why not.

In this code, we can also see two blocks with only one variable. But is there any difference between this question and the last one? I believe that all of us have saw that the first block contains the second one in this program, but not in last one. So these blocks together form a new chain scope. However, as long as it is in the chain scope, s will continue its life cycle until the compiler leaves the scope. So we will not allow any further changes to s.

## Is this program valid? If so, what does it do? If not, say why not, and rewrite it to be valid. 

```C++
#include <iostream>
#include <string>
int main(){
    { 
        std::string s = "a string";
        { 
            std::string x = s + ", really";
            std::cout << s << std::endl; 
        }
        std::cout << x << std::endl;
    }
	return 0;
}
```

I haven't run the program, but I can tell you the answer without run it.

Let's look back at the program above. There are two blocks with two variable, and those blocks together form a new chain scope too. When we compile this program, the compiler defined a string variable which is named s, then run into the inner scope. In inner scope, compiler can also use variable which is defined in the outer scope. So compiler can define another string variable which is named x and output s in the inner scope. Finally the compiler leave the inner scope, at this time, s was defined in the outer scope, so compiler can still use s, but the life cycle of  x was passed, so the variable which is named x will be undefined, and get compilation error.

If we want to run the program above, we can modify it like here:

```C++
int main(){
    { 
        std::string s = "a string";
        { 
            std::string x = s + ", really";
            std::cout << s << std::endl;
            std::cout << x << std::endl;
        }
    }
	return 0;
}

>>> a string
	a string, really
```

## What does the following program do if, when it asks you for input, you type two names (for example, Samuel Beckett)? Predict the behavior before running the program, then try it. 

```C++
#include <iostream>
#include <string>
int main(){
    std::cout << "What is your name? ";
    std::string name;
    std::cin >> name;
    std::cout << "Hello, " << name << std::endl << "And what is yours? ";
    std::cin >> name;
    std::cout << "Hello, " << name << "; nice to meet you too!" << std::endl;
    return 0;
}
```

The first line of main function, output the words "What is your name?" to ask uesrs' name, but after this the program didn't end this line and wait user to input their name. The second line defined a new variable which named name to hold the name of the first user. Then the program output the greeting to the first user and start a new line. At the beginning of the new line, the program asked the name of the second user, but didn't start a new line. After the second user input the name, program output the greeting to the second user too. Finally the program end this line and finished the implementation.

OK, I think above all is the detail of this program do if. So let's verify that.

```
>>> What is Your name? xxxx
 	Hello, jinxuan
	And what is yours? xxxx
 	Hello, jingxun;nice to meet you too!
```

Wow, you see that? As I said, it just do like that.