# Vector 

## header file - < vector >
Vectors are sequence containers representing arrays that can change in size.

Just like arrays, vectors use contiguous storage locations for their elements, which means that their elements can also be accessed using offsets on regular pointers to its elements, and just as efficiently as in arrays. But unlike arrays, their size can change dynamically, with their storage being handled automatically by the container.

Internally, vectors use a dynamically allocated array to store their elements. This array may need to be reallocated in order to grow in size when new elements are inserted, which implies allocating a new array and moving all elements to it. This is a relatively expensive task in terms of processing time, and thus, vectors do not reallocate each time an element is added to the container.

## Member Functions 

* **Constructor** - to construct a vector 
* **Deconstructor** - deconstruct a vector and free up memory
* **Operator=** - assign values to vector variable or completely copy vector as lvalue to a vector acting as rvalue 
  
### Iterators : 

* **begin** - iterator to the beginning element  
* **end** - iterator after the last 
* **rbegin** - iterator to the starting address of the last element , on incrementation it progresses towards the starting of the vector , which is unlike the behaviour of the normal iterator 
* **rend** - iterator to the address before the first element of the vector , used as a check while traversing the array in reverse 
* **cbegin** - constant iterator to the beginning element of the vector of elements , this means this is a read-only iterator than can be provided as a accessor to vector elements 
* **cend** - constant iterator to the address after the last element of the vector , used with the cbegin operator for vector for traversal using loops or in other cases 
* 