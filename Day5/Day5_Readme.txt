Interfaces are nothing but a way to describe the behavior of a class without committing to the implementation of the class.
In C++ programming there is no built-in concept of interfaces. In order to create an interface, we need to create an abstract class which is having only pure virtual methods. 
In C++, Interfaces are also called pure abstract classes.

Pure Virtual Functions:
A Pure Virtual Function is a function where we only declare the function but not the function definition. 
The implementation for pure virtual methods is done at the derived class by method/function overriding.
A function is said to be a pure virtual function if it is defined in the class as follows:

virtual datatype functionName(parameter1, parameter2,…) = 0