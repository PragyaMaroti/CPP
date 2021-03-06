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

### Accessing Class members:  
After an object is defined, we can aceess class members (of that object) or call a member function(method); using dot (.) operator:  
object_name.member;

Note:  members are assigned value or called only with the object. Treating the class as a type, we first define an object and then assign etc.  

### Private Versus Public Access
Additional keywords are often used in the declaration of a class. Two of the most important
are public and private.  
The private and public keywords are used with members of a class—both data members
and member methods. Private members can be accessed only within methods of the
class itself. Public members can be accessed through any object of the class.  
**All members of a class are private, by default.**  
Consider the example:  

    class Cat
    {
    unsigned int itsAge;
    unsigned int itsWeight;
    void Meow();
    };
If we create a program and try to write the following within main (for example):  


    int main()
    {
    Cat Boots;
    Boots.itsAge=5; // error! can’t access private data!
    
 In effect, by leaving these members as private, you’ve
said to the compiler, “I’ll access itsAge, itsWeight, and Meow() only from within member
functions of the Cat class.”
 Just because Boots is an object of class Cat,
that doesn’t mean that you can access the parts of Boots that are private (even though
they are visible in the declaration).  
Note: wondering,  "Why can’t Boots access his own age?” The
answer is that Boots can, but you can’t. Boots, in his own methods, can access all his
parts—public and private.  
The way to use Cat so that you can access the data members is to make some of the
members public:

     class Cat
     {
     public:
     unsigned int itsAge;
     unsigned int itsWeight;
     void Meow();
     };
     
Note:  The keyword public applies to all members in the declaration
until the keyword private is encountered—and vice versa.  

### Making Member Data Private  
To access private data in a class, you must create public functions known as accessor
methods. Use these methods to set and get the private member variables. These accessor
methods are the member functions that other parts of your program call to get and set
your private member variables. A public accessor method is a class member function
used either to read (get) the value of a private class member variable or to set its value.  
Accessor functions enable you to separate the
details of how the data is stored from how it is used. By using accessor functions, you
can later change how the data is stored without having to rewrite any of the other functions
in your programs that use the data.  

### Implementing Class Methods:  
An accessor function provides a public interface to the private member
data of the class. Each accessor function, along with any other class methods that you
declare, must have an implementation. The implementation is called the function
definition.
A member function definition begins similarly to the definition of a regular function.  
Consider the example:  

     // Demonstrates declaration of a class and
     // definition of class methods
     #include <iostream> // for cout

      class Cat // begin declaration of the class
      {
      public: // begin public section
      int GetAge(); // accessor function
      void SetAge (int age); // accessor function
      void Meow(); // general function
      private: // begin private section
      int itsAge; // member variable
      };

      // GetAge, Public accessor function
      // returns value of itsAge member
      int Cat::GetAge()
      {
      return itsAge;
      }

      // definition of SetAge, public
      // accessor function
      // sets itsAge member
      void Cat::SetAge(int age)
      {
      // set member variable itsAge to
     // value passed in by parameter age
      itsAge = age;
      }

      // definition of Meow method
      // returns: void
      // parameters: None
      // action: Prints “meow” to screen
      void Cat::Meow()
      {
      std::cout << “Meow.\n”;
      }

     // create a cat, set its age, have it
      // meow, tell us its age, then meow again.
      int main()
     {
      Cat Frisky;
      Frisky.SetAge(5);
      Frisky.Meow();
      std::cout << “Frisky is a cat who is “ ;
      std::cout << Frisky.GetAge() << “ years old.\n”;
      Frisky.Meow();
      return 0;
      }
      

Note on line 17 that class methods include the
class name followed by two colons and the function name. This syntax tells the compiler
that the GetAge() function you are defining here is the one that you declared in the Cat
class. With the exception of this header line, the GetAge() function is created the same
as any other function.  

### Adding Constructors and Destructors:   
We can initialize the member data of
a class using a special member function called a constructor. The constructor can take
parameters as needed, but it cannot have a return value—not even void. The constructor
is a class method with the same name as the class itself.   
Whenever we declare a constructor, we’ll also want to declare a destructor.  
A destructor always has the name of the
class, preceded by a tilde (~). Destructors take no arguments and have no return value. 

Many types of constructors are available; some take arguments, others do not. The one
that takes no arguments is called the default constructor. There is only one destructor.
Like the default constructor, it takes no arguments.  
It turns out that if you don’t create a constructor or a destructor, the compiler provides
one for you. The constructor provided by the compiler is the default constructor. The
default constructor and destructor created by the compiler don’t have arguments.   
In part, it is a matter of form. All objects
must be “constructed” and “destructed,” and these do-nothing functions are called as a
part of the process of constructing and destructing.
To declare an object without passing in parameters, such as:   
Cat Rags; // Rags gets no parameters   
you must have a constructor in the form   
Cat();    
**When you define an object of a class, the constructor is called.**
**This is an exception to the rule that states all functions require parentheses, even if they
take no parameters.**

### Including const Member Functions
You have used the const keyword to declare variables that would not change. You can
also use the const keyword with member functions within a class. If you declare a class
method const, you are promising that the method won’t change the value of any of the
members of the class.  
To declare a class method constant, put the keyword const after the parentheses enclosing
any parameters but before the semicolon ending the method declaration. For example:  
void SomeFunction() const;   
This declares a constant member method called SomeFunction() that takes no arguments
and returns void. You know this will not change any of the data members within the
same class because it has been declared const.  
**Accessor functions that only get values are often declared as constant functions by using
the const modifier.**

❕ Note: The declaration of
the class is called its interface because it tells the user how to
interact with the class. The interface is usually stored in an .hpp
file, which is referred to as a header file.
The function definition tells the compiler how the function works.
The function definition is called the implementation of the class
method, and it is kept in a .cpp file. The implementation details
of the class are of concern only to the author of the class. Clients
of the class—that is, the parts of the program that use the
class—don’t need to know, and don’t care, how the functions are
implemented. ❕  
### Inline Implementation:  
Just as you can ask the compiler to make a regular function inline, you can make class
methods inline. The keyword inline appears before the return type. The inline implementation
of the GetWeight() function, for example, looks like this:  
inline int Cat::GetWeight()  
{  
return itsWeight; // return the Weight data member  
}  
**You can also put the definition of a function into the declaration of the class, which automatically
makes that function inline.**
### Classes with Other Classes as Member
Data
It is common to build up a complex class by declaring simpler classes and including
them in the declaration of the more complicated class. For example, you might declare a
wheel class, a motor class, a transmission class, and so forth, and then combine them
into a car class. This declares a has-a relationship. A car has a motor, it has wheels, and it
has a transmission.  
### Exploring Structures
A very close cousin to the keyword class is the keyword struct, which is used to
declare a structure.**In C++**, a struct is the same as a class, except that its members are
public by default and that it inherits publicly, by default.  
