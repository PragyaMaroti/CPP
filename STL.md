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

### STL Iterators:  
Iterators in STL are template classes that in some ways are generalization of pointers.
These are template classes that give the programmer a handle by which he can work with
and manipulate STL containers and perform operations on them. Note that operations
could as well be STL algorithms that are template functions.  
Iterators supplied by STL can be broadly classified into the following:
- **Input iterator** — One that can be dereferenced to reference an object. The object
can be in a collection, for instance. Input iterators of the purest kinds guarantee
read access only.    
- **Output iterator** — One that allows the programmer to write to the collection.
Output iterators of the strictest types guarantee write access only.     
The basic iterator types mentioned in the preceding list **are further refined** into the following:

- **Forward iterator** — A refinement of the input and output iterators allowing both
input and output. Forward iterators may be constant, allowing for read-only access
to the object the iterator points to, and otherwise allow for both read and write
operations, making it mutable. A forward iterator would typically find use in a
singly linked list.
- **Bidirectional iterator** — A refinement of the forward iterator in that it can be
decremented to move backward as well. A bidirectional iterator would typically
find use in a doubly linked list.
- **Random access iterators** — In general, a refinement over the concept of bidirectional
iterators that allow addition and subtraction of offsets or allow one iterator to
be subtracted from another to find the relative separation or distance between the
two objects in a collection. A random iterator would typically find use in an array.

Note: **At an implementation level, a refinement can be thought of as an
inheritance or a specialization.**    

### STL Algorithms:
 STL supplies these functions in the form of STL algorithms that work well
with containers using iterators to help the programmer with some of the most common
requirements.
Some of the most used STL algorithms are:   
- **std::find** — Helps find a value in a collection.  
- **std::find_if** — Helps find a value in a collection on the basis of a specific userdefined
predicate.  
- **std::reverse** — Reverses a collection.  
- **std::remove_if** — Helps remove an item from a collection on the basis of a userdefined
predicate.  
- **std::transform** — Helps apply a user-defined transformation function to elements
in a container.  
**These algorithms are template functions in the std namespace and require that the standard
header** <algorithm> be included.
