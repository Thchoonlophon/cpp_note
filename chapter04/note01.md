## Exceptions

If we get a result which didn't meet my expectations, we can throw a exception this will break our function and print the informations of the exceptions.

## Reference

We can define a reference to a variable like:

```c++
vector<double> vec;
vector<double>& v = vec;
const vector<double>& v1 = vec;
```

And defining a reference to a reference has the same effect as defining a reference to the original object. For example, if we write

```c++
vector<double> vec;
vector<double>& v = vec;
vector<double>& v1 = v;
```

Then `v1` is another name for `vec`, just as v is. But we're mustn't write like that:

```c++
vector<double> vec;
const vector<double>& v = vec;
vector<double>& v1 = v; // Wrong
```

