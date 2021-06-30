## Functions: 
A function is, in effect, a subprogram that can act on data and return a value. Every C++
program has at least one function: main(). When your program starts, the main() function
is called automatically. main() might call other functions, some of which might call
still others.  
Each function has its own name, and when that name is encountered, the execution of the
program branches to the body of that function. **This is referred to as calling the function.**
When the function finishes (through encountering a return statement or the final brace
of the function), execution resumes on the next line of the calling function.  

![image](https://user-images.githubusercontent.com/64036955/123890250-85411200-d974-11eb-975d-5813bea0af7b.png)

Functions come in two varieties: **user-defined and built-in. Built-in functions are part of
your compiler package—they are supplied by the manufacturer for your use. Userdefined
functions are the functions you write yourself**.  
### Return Values, Parameters, and Arguments: 
When you send values into a function, these values act as variables that you can manipulate
from within the function. The description of the values you send is called a parameter
list.A parameter describes the type of the value that will be passed into the
function when the function is called. The actual values you pass into the function are
called the **arguments**.  
When you call a function, it can do work and then send
back a value as a result of that work. This is called its return value, and the type of that
return value must be declared.  

### Defining and deeclaring functions:  
Using functions in your program requires that you first declare the function and that you
then define the function. The declaration tells the compiler the name, return type, and
parameters of the function. The definition tells the compiler how the function works.  
Declaration of a function is called a prototype.   
Three ways exist to declare a function:
➡️Write your prototype into a file, and then use the #include directive to include it
in your program.  
➡️Write the prototype into the file in which your function is used.  
➡️Define the function before it is called by any other function. When you do this, the
definition acts as its own prototype.  
Note:  Declaring function prototype is a good practise, for the following reasons:  
➡️It is possible that function A() needs to be able to call function B(), but function
B() also needs to be able to call function A() under some circumstances. It is not possible
to define function A() before you define function B() and also to define function B()
before you define function A(), so at least one of them must be declared in any case.
➡️Second, function prototypes are a good and powerful debugging technique. If your prototype declares that your function takes a particular set of parameters or that it returns a
particular type of value, and then your function does not match the prototype, the compiler
can flag your error instead of waiting for it to show itself when you run the program.   
Note:  Many of the built-in functions you use will have their function prototypes already written
for you. These appear in the files you include in your program by using #include.  

### Function prototype:  
The function prototype is a statement, which means it ends with a semicolon. It consists
of the function’s return type and signature. A function signature is its name and parameter
list. The parameter list is a list of all the parameters and their types, separated by commas.
 Note: void is used as the return type, when nothing is returned.  
 
 ### Defining the Function
The definition of a function consists of the function header and its body. The header is
like the function prototype except that the parameters must be named, and no terminating
semicolon is used.
The body of the function is a set of statements enclosed in braces.  

### Execution of Functions:  
When you call a function, execution begins with the first statement after the opening
brace ({). When a function finishes executing, control returns to the calling function. When the
main() function finishes, control returns to the operating system.   

### Parameters Are Local Variables
The arguments passed in to the function are local to the function. Changes made to the
arguments do not affect the values in the calling function. This is known as passing by
value, which means a local copy of each argument is made in the function. These local
copies are treated the same as any other local variables.  
### Global variable: 
Variables defined outside any function have global scope, and thus are available from any
function in the program, including main(). **Local variables with the same name as global
variables do not change the global variables.** A local variable with the same name as a
global variable hides the global variable, however. **If a function has a variable with the
same name as a global variable, the name refers to the local variable—not the global—
when used within the function.**

------------

❕ Important points:  
- Virtually no limit exists to the number or types of statements that can be placed in the
body of a function. Although you can’t define another function from within a function,
but you can call a function.   
- Although no limit exists to the size of a function in C++, well-designed functions tend to
be small. 
- Any valid C++ expression can be a function argument, including constants, mathematical
and logical expressions, and other functions that return a value. The important thing is
that the result of the expression matches the argument type expected by the function.  
- It is even valid for a function to be passed as an argument. But, using a function as an argument, however, can make for code
that is hard to read and hard to debug.
- Functions return a value or return void. void is a signal to the compiler that no value
will be returned.
To return a value from a function, write the keyword return followed by the value you
want to return. The value might itself be an expression that returns a value. For example:  
return 5; // returns a number  
return (x > 5); // returns the result of a comparison  
return (MyFunction()); // returns the value returned by calling another  
These are all legal return statements, assuming that the function MyFunction() itself
returns a value.  
### Default parameters:  
long myFunction (int x = 50);
This prototype says, “myFunction() returns a long and takes an integer parameter. If an
argument is not supplied, use the default value of 50.” Because parameter names are not
required in function prototypes, this declaration could have been written as
long myFunction (int = 50);
The function definition is not changed by declaring a default parameter. The function
definition header for this function would be
long myFunction (int x)
If the calling function did not include a parameter, the compiler would fill x with the
default value of 50. The name of the default parameter in the prototype need not be the
same as the name in the function header; the default value is assigned by position, not
name.   

❗Note: If any parameter does not have a default value, no previous parameter can
have a default value.❗

### Overloading Functions
C++ enables you to create more than one function with the same name. This is called
function overloading. The functions must differ in their parameter list with a different
type of parameter, a different number of parameters, or both. Here’s an example:  
int myFunction (int, int);  
int myFunction (long, long);  
int myFunction (long);  
myFunction() is overloaded with three parameter lists.    
❗Overloaded
versions of functions cannot differ only in return type; that is, they should also
accept a uniquely different set of arguments ❗  

   int myFunction (int);
   void myFunction (int); // illegal - as it differs only in return type  
   
   
   **Function overloading is also called function polymorphism. Poly means many, and morph
means form**
By changing the number or type of the parameters, you can give two or
more functions the same function name, and the right one will be called automatically by
matching the parameters used.  
### Inline Functions:  
**If a function is declared with the keyword inline, the compiler does not create a real
function; it copies the code from the inline function directly into the calling function. No
jump is made; it is just as if you had written the statements of the function right into the
calling function.**  
Note that inline functions can bring a heavy cost. **If the function is called 10 times, the
inline code is copied into the calling functions each of those 10 times. The tiny improvement
in speed you might achieve might be more than swamped by the increase in size of
the executable program, which might in fact actually slow the program!**   
The reality is that today’s optimizing compilers can almost certainly do a better job of
making this decision than you can, so it is generally a good idea not to declare a function
as inline unless it is only one or, at most, two statements in length. When in doubt, leave
inline out. Some compilers might deliberately not inline a function marked by the programmer
as inline if the function is way too big and making it inline would result in a
significant bloating of the executable being built.  

### Recursion
A function can call itself. This is called recursion, and recursion can be direct or indirect.
It is direct recursion when a function calls itself; it is indirect recursion when a function
calls another function that then calls the first function.  
Recursive functions need a stop condition. Something must happen to cause the program
to stop recursion or it will never end(a runtime failure).  
❗It is important to note that when a function calls itself, a new copy of that function is run.
The local variables in the second version are independent of the local variables in the
first, and they cannot affect one another directly any more. ❗  
Note: Recursion is faster if function call is the lasst thing in that function and it doesn't wait for a value from next call.

