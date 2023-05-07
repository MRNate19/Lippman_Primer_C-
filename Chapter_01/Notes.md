**Standard Input and Output Objects**

There are two types, istream and ostream, which contain the objects cin and cout, respectively.

The streams in this case contain a sequence of characters.

**Writing to a Stream**

An expression in C++ produces a result and usually contains operands and operators (as in mathematics).

The "<<" operator takes two operands on the left and the right of it. The operand on the left is an ostream object (usually cout),
and the operand on the right is a value which is printed onto the screen.

The result of using the << operator with the appropriate operands is the ostream object.

<font face="Cascadia Mono SemiBold" size="3">std::cout << "Hello" << std::endl;</font>

which is cout in this case.