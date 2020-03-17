<center><h1>The&nbsp;&nbsp;Exercises&nbsp;&nbsp;Of&nbsp;&nbsp;Chapter&nbsp;&nbsp;Zero
</center>

## Compile and run the Hello, world! program 

```C++
#include <iostream>
int main(){
    std::cout << "Hello,world!" << std::endl;
    return 0;
}

>>> Hello,world!
    
```

## What does the following statement do? 

```C++
#include <iostream>
int main(){
	3 + 4;
   	return 0; 
}
```

The statement yields a result of integer (int) type, with the value of 7. As 3 + 4 = 7.

The first operand, 3, is of type integer (int). The result is therefore of type int.

The addition operator, +, takes in the second operand (4) and add to the first operand (3). The second operand must be of the same (int) type for the addition operator to work.

The semi-colon at the end discards the result.

Note that the result is not expected to show in the console output window (e.g. a command window) as it is of type int. Only result of type std::ostream (standard output stream) is displayed in the console output window. 

## Write a program that, when run, writes 

```C++
// Target
// This (") is a quote, and this (\) is a backslash.
// My program
#include <iostream>
int main(){
    std::cout << "This (\") is a quote, and this (\\) is a backslash." << std::endl;
}
```

## The string literal "\t" represents a tab character; different C++ implementations display tabs in different ways. Experiment with your implementation to learn how it treats tabs. 

```C++
#include <iostream>
int main(){
    std::cout << "Start the following line with tabs" << std::endl;
    std::cout << "\tStart this line with 1 tab." << std::endl;
    std::cout << "\t\tStart this line with 2 tabs." << std::endl;
    std::cout << "\t\t\tStart this line with 3 tabs." << std::endl;
    return 0;
}

>>> Start the following line with tabs
            Start this line with 1 tab.
                    Start this line with 2 tabs.
                            Start this line with 3 tabs.
// eight spaces to replace the tab
```

## Write a program that, when run, writes the Hello, world! program as its output. 

```C++
#include <iostream>
int main()
{
    std::cout << "#include <iostream>" << std::endl;
    std::cout << "int main(){" << std::endl;
    std::cout << "  std::cout << \"Hello World!\" << std::endl;" << std::endl;
    std::cout << "  return 0;" << std::endl;
    std::cout << "}" << std::endl;
    return 0;
}

>>> #include <iostream>
	int main(){
  		std::cout << "Hello World!" << std::endl;
  		return 0;
	}
```

## Is this a valid program? Why or why not? 

```C++
#include <iostream>
int main() std::cout << "Hello, world!" << std::endl;
```

No,because the body of function is not enclosed by {}

## Is this a valid program? Why or why not? 

```C++
#include <iostream>
int main(){
    {
        {
            {
                {
                    { 
                        std::cout << "Hello, world!" << std::endl; 
                    }
                }
            }
        }
    }
}
```

My answer is "yes",because I can run it without any problem,maybe it seems like not valid,because the body of function is enclosed by many pairs of {},but this is permitted I think.

## What about this one? 

```C++
#include <iostream>
int main(){
    /* This is a comment that extends over several lines
    because it uses /* and */ as its starting and ending delimiters */
    std::cout << "Does this work?" << std::endl;
    return 0;
}
```

I think I'll say no.Because the second "/*" will be a part of the comments,so it can't be a which is begin a comment,then the first "/*" will match with the first "*/", finally the last "*/" can not match with anything.

## ...and this one? 

```C++
#include <iostream>
int main(){
    // This is a comment that extends over several lines
    // by using // at the beginning of each line instead of using /*
    // or */ to delimit comments.
    std::cout << "Does this work?" << std::endl;
	return 0;
}
```

Today, even if the king of heaven came, I also would say this is ! We can see that both of "/*" and "*/" are in the comments lines,so they will be parts of the comments, not the sign of comments.

## What is the shortest valid program? 

```C++
int main(){} // maybe
```

## Rewrite the Hello, world! program so that a newline occurs everywhere that is allowed in the program. 

```C++
#include <iostream>
int
main
(
)
{
std
::
cout
<<
"Hello, World"
<<
std
::
endl
;
}
```

