## STL Introduction : 

STL -- Standard Template Library

* STL is a set of C++ template classes to provide common programming data structures and functions such as lists, stack, arrays etc. 
* It is a library of container classes, algorithms , and iterators. 

## STL can be divided into two parts : 
<br>

1. Containers : Container classes store objects and data. 
    1.1. **Simple or Sequence Containers** : These implement data structures which can be accessed in a sequential manner
     1. Pair 
     2. Vector 
     3. forward_list 
     4. List
    1.2. **Container Adaptors** : These provide different interfaces for sequential  containers. 
     1. Stack 
     2. Queue 
     3. Priority Queue
    1.3. **Associative Containers** : These implement sorted data structures that can be quickly searched (O(log n)Complexity or Constant)
     1. Set 
     2. Map
     3. Unordered Set 
     4. Unordered Map 
   
   <br>


2. Algorithms : The algorithm header (*< algorithm >*) defines a set of algorithms that are ready to use on  multiple data types and ranges of elements. They act on containers and provide a means for various operations for the contents of the containers.   
   An **iterator** is an object (like a pointer) that points to an element inside the container. We can use iterators to move through the contents of the container
   * Algorithms are based on the idea of iterators and use them to read and manipulate data and perform specific functions on the data in containers. 