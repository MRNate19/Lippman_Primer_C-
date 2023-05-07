**Standard Input and Output Objects**

There are two types, istream and ostream, which contain the objects cin and cout, respectively.

The streams in this case contain a sequence of characters.

**Writing to a Stream**

An expression in C++ produces a result and usually contains operands and operators (as in mathematics).

The "<<" operator takes two operands on the left and the right of it. The operand on the left is an ostream object (usually cout),
and the operand on the right is a value which is printed onto the screen.

The result of using the << operator with the appropriate operands is the ostream object.

```c++
std::cout << "Hello" << std::endl;
```

which is cout in this case.

**Using Names from the Standard Library**

The names cout and endl have the prefix std:: - the :: operator is called the scope operator and means that we wish to access some object outside this scope. The object cout is defined inside the std namespace, so we access it as follows:

```c++
std::cout 
```
**Reading from a Stream**

We use the object cin which is also defined inside the std namespace. We can use cin in the following way:

```c++
int v1, v2;
std::cin >> v1 >> v2;
```
The expression,

std::cin >> v1 >> v2;

returns the istream object cin each time the ">>" operator is used. This is why we can keep reading into chosen objects (named variables) through the istream by using the ">>" operator.

