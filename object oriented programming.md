At one point, C, the predecessor to C++, was the world’s most popular programming language
for commercial software development. It was used for creating operating systems
(such as the UNIX operating system), for real-time programming (machine, device, and
electronics control), and only later began to be used as a language for programming conventional
languages. Its intent was to provide an easier and safer way to program down
close to the hardware.  

-------------------------

**C was to enforce “structured” programming, in which problems were “decomposed”
into smaller units of repeatable activities called procedures and data was assembled
into packages called structures.** 

--------------

But research languages such as Smalltalk and CLU had begun to pave a new direction—
object-orientation—which combined the data locked away in assemblies like structures
with the capabilities of procedures into a single unit: the object.   

**Each object
has characteristics (fast, friendly, brown, puffy, pretty). Most objects have behavior
(move, bark, grow, rain, wilt).**    

The programs written early in the twenty-first century are much more complex than
those written at the end of the twentieth century.**Programs created in procedural languages
tend to be difficult to manage, hard to maintain, and expensive to extend.**
Graphical user interfaces, the Internet, digital and wireless telephony, and a host of new
technologies have dramatically increased the complexity of our projects at the same time
that consumer expectations for the quality of the user interface are rising.  

------------------

**Object-oriented software development offers a tool to help with the challenges of software
development**.  
**Object-oriented programming languages build a strong link between the data
structures and the methods that manipulate that data and have a closer fit to the way
humans (programmers and clients) think, improving communication and improving the
quality of delivered software.**    
**C++ was a bridge between object-oriented programming and C. The goal was to provide
object-oriented design to a fast, commercial software development platform, with a special
focus on high performance.**  

### Creating new types :  
 Although it is possible
to solve complex problems by using programs written with only numbers and characters,
it is far easier to grapple with large, complex problems if you can create representations
of the objects that you are talking about. The closer these variables correspond to reality, the easier it is
to write the program.  
The type of a variables tells:  
➡️Their size in memory.  
➡️ What information they can hold.  
➡️ What actions can be performed on them.   

_**In C++, the programmer
can extend the language by creating any type needed, and each new type can
have all the functionality and power of the built-in types.**_  

#### Problem with struct:  
![image](https://user-images.githubusercontent.com/64036955/124437110-57a10200-dd94-11eb-8d38-3a893e549ecc.png)  

### Classes and objects:  
We make a new type in C++ by declaring a class. A class is just a collection of variables—
often of different types—combined with a set of related functions.  
A class enables us to **encapsulate**, or bundle, these various
parts and various functions into one collection, which is called an **object.**  
 Everything is in one place, which **makes it easy to refer to, copy,
and call on functions that manipulate the data.** Likewise, clients of our class—that is,
the parts of the program that use your class—can use our object without worrying about
what is in it or how it works.  
A class can consist of any combination of the variable types and other class types. Member
variables, also known as data members, are the variables in our class. A class can also contain functions called member functions or methods.
The member functions in the class typically manipulate the member variables.
### Declaring a Class:  
Declaring a class tells the compiler about the class.  
Basic syntax:  

class class_name  
{  
var_type1 var1;
var_type2 var2;
member function;
};  

Class declaration doesn't allocate memory, but it lets the compiler know about how much memory would an object of that class take.   

### Defining an Object
After we declare a class, we can then use it as a new type to declare variables of that
type. We declare an object of your new type the same as we declare an integer variable.  
An object is an individual instance of a class.
