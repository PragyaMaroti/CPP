**The standard template library (STL)** is a set of template
classes and functions that supply the programmer with:  
➡️ Containers for storing information.  
➡️ Iterators for accessing the information stored.  
➡️ Algorithms for manipulating the content of the containers.  

### STL Containers:  
Containers are STL classes that are used to store data. STL supplies two types of container
classes:  
- Sequential containers
- Associative containers
### Sequential Containers
As the name suggests, these are containers used to **hold data in a sequential fashion, such
as arrays and lists.** **Sequential containers are characterized by a fast insertion time, but
are relatively slow in find operations.**  

The STL sequential containers are:
- **std::vector** — Operates like a dynamic array and grows at the end.
- **std::deque**—Similar to std::vector except that it allows for new elements to be
inserted at the beginning, too.
- **std::list**—Operates like a linked list.

The STL vector class is STL implementation of an array that allows random access of an element, we can use subscript operator to do so.  In addition to this, the STL vector is dynamic array and therefore it can resize itself but it can suffer from performance issues when we have to resize it.

 The list can be thought of as STL’s  implementation of a regular linked- list and list can organise elements in non continuous sections of memory and its elements cannot be randomly accessed.
Therefore it is not have performance issue that come up with the better when the vector need to reallocate if its internal array .

### Associative Containers
Associative containers are those that store data in a sorted fashion—akin to a dictionary.
This results in slower insertion times, but presents significant advantages when it comes
to searching.  
The associative containers supplied by STL are:  
- **std::set**: A sorted list of unique values.  
- **std::map**: Stores key-value pairs sorted by their unique keys.  
- **std::multiset**: Akin to a set. Additionally, supports the ability to store multiple
items having the same value; that is, the value doesn’t need to be unique.  
- **std::multimap**: Akin to a map. Additionally, supports the ability to store keyvalue
pairs where keys don’t need to be unique.    

![image](https://user-images.githubusercontent.com/64036955/124889007-45250380-dff4-11eb-9372-0f6051ad965e.png)  
![image](https://user-images.githubusercontent.com/64036955/124889135-5ec64b00-dff4-11eb-8008-38efdfc6f478.png)  
![image](https://user-images.githubusercontent.com/64036955/124889207-6f76c100-dff4-11eb-91e4-d7374359ec6f.png)




