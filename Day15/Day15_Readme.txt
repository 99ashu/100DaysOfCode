Dynamic memory allocation in C/C++ refers to performing memory allocation manually by a programmer. 
Dynamically allocated memory is allocated on Heap, and non-static and local variables get memory allocated on Stack.

new operator:
The new operator denotes a request for memory allocation on the Free Store. 
If sufficient memory is available, a new operator initializes the memory and returns the address of the newly allocated and initialized memory to the pointer variable.

delete operator:
Since it is the programmer’s responsibility to deallocate dynamically allocated memory, programmers are provided delete operator in C++ language.