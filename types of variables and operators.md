### Variables
Basic syntax of declaring a variable = same as C.   

Types of variables:  
- Integer
- float: single-precision floating point value.
- char: 'p', 'X'
- bool: true or false.
- double: double-precision floating point value.  

**Types of variables based on the scope.**

1. Global variable:  Declared outside of any function (including main as well), has scope throughout the program, can be accessed anywhere in the program.
2. Local variable: Local variables are declared inside the braces of any user defined function, main function, loops or any control statements(if, if-else etc) and have their scope limited inside those braces.

Note: Global and local variable can share same name.   


### Operators

![image](https://user-images.githubusercontent.com/64036955/123500354-1ce3ef00-d65b-11eb-9770-4b216f26948f.png)

#### Bitwise Operators
There are six bitwise Operators: &, |, ^, ~, <<, >>  
These performs bit by bit processing.  

**num1 ^ num2**: compares corresponding bits of num1 and num2 and **generates 1 if they are not equal, else it returns 0.** In our example it would return 29 which is equivalent to 00011101.  
![image](https://user-images.githubusercontent.com/64036955/123500481-fffbeb80-d65b-11eb-80b1-09c175264eb7.png)
![image](https://user-images.githubusercontent.com/64036955/123500483-0ab68080-d65c-11eb-80af-4021a1764442.png)
![image](https://user-images.githubusercontent.com/64036955/123500498-20c44100-d65c-11eb-84ff-c1d13131ba41.png)


### operator precedence:   

Unary Operators:
++ – – ! ~  

Multiplicative:
* / %  

Additive:
+ –  

Shift: 
<< >> >>>  

Relational: 
> >= < <=  

Equality: 
== !=  

Bitwise AND: 
&   

Bitwise XOR: 
^   


Bitwise OR: 
|  

Logical AND: 
&&  

Logical OR: 
||  

Ternary: 
?:     

Assignment: 
= += -= *= /= %= > >= < <= &= ^= |=  

