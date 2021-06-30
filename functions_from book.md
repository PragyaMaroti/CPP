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
