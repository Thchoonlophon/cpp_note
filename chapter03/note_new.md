## Header  files

In this programs we need use some facilities which we never saw before.These facilities include **`<iomanip>`** and **`<ios>`**, which we have not yet seen. The **`<ios>`** header defines **`streamsize`**, which is the type that the input-output library uses to represent sizes. The **`<iomanip>`** header defines the manipulator **`setprecision`**, which lets us say how many significant digits we want our output to contain. 

But when we used **`endl`**, which is also a manipulator, we did not have to include the**`<iomanip>`** header. The **`endl` **manipulator is used so often that its definition appears in**`<iostream>`**, rather than in**`<iomanip>`**. 

## Precision 

We can call the method of **`cout`** which named **`precision`** to get the precision of `cout ` as default. And we can also use function  **`setprecision`** to set the precision of `cout` by ourselves, but one important thing is that we have to change it back when we need not use the precision which is specified by ourselves. It just like that:

```c++
#include <iostream>
#include <ios>
#include <iomanip>

using std::cout;		using std::setprecision;
using std::endl;		using std::streamsize;

streamsize prec = cout.precision();
cout << setprecision(/* the number as you want */) 
     << /* the number what you want to output */
     << setprecision(prec) << endl;
```

And we can also do like this:

```c++
#include <iostream>
#include <ios>
#include <iomanip>

using std::cout;		using std::setprecision;
using std::endl;		using std::streamsize;

streamsize prec = cout.precision(/* the number as you want to set */);
cout << /* the number what you want to output */ << endl;
cout.precision(prec);
```

Both of all above two ways can get a right result, but we prefer the first one. Because by doing so, we can minimize the part of the program in which the precision is set to an unusual value. 

