size():
Size is not allowed to differ between multiple compilers. 
The size of a vector is the number of elements that it contains, which is directly controlled by how many elements you put into the vector.

capacity():
Capacity is the amount of total space that the vector has. Under the hood, a vector just uses an array. The capacity of the vector is the size of that array. 
This is always equal to or larger than the size. 

The difference between them is the number of elements that you can add to the vector before the array under the hood needs to be reallocated.