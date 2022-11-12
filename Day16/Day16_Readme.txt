The most common bugs related to pointers and memory management is dangling/wild pointers.
Sometimes the programmer fails to initialize the pointer with a valid address, then this type of initialized pointer is known as a dangling pointer in C.

Dangling pointer occurs at the time of the object destruction when the object is deleted or de-allocated from memory without modifying the value of the pointer. 
In this case, the pointer is pointing to the memory, which is de-allocated. 
The dangling pointer can point to the memory, which contains either the program code or the code of the operating system.
If we assign the value to this pointer, then it overwrites the value of the program code or operating system instructions; 
in such cases, the program will show the undesirable result or may even crash. 
If the memory is re-allocated to some other process, then we dereference the dangling pointer will cause the segmentation faults.