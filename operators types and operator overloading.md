**On a syntactical level, there is very little that differentiates an operator from a function**,
save for the usage of the keyword operator.  
Basic syntax:  
return_type operator operator_symbol (...parameter list...);  
Here, operator is the keyword. The operator_symbol in this case could be any of the several operator-types that the
programmer can define, for example: &&, + etc.

#### So, why does C++ provide operators when functions are also supported?
Consider the task of concatenating two strings. Now, if you wanted to concatenate the two, what would be more convenient if not also
intuitive?  
Option 1:   
CUsefulString stringSum;  
stringSum = string1 + string2; // Hello World!  
Or Option 2:  
CUsefulString stringSum;  
stringSum = string1.Concatenate (string2); // Hello World!  
Clearly, the member operator + implemented by CUsefulString scores over the member
function Concatenate. Both supply the same result, however, the operator-based mechanism
uses of an intuitive and an easy to understand (hence, maintain) implementation.  
❗Note: Don’t use operators with the intention to simplify the implementation
of the class that contains it. **Use operators to make it easy and intuitive for others
to use your class.** ❗  
### Classification of operators:  
On a very broad level, operators in C++ can be classified into two types: unary operators
and binary operators.  
#### Unary Operators
As the name suggests, operators that function on a single operand are called unary operators.  
The typical definition of a unary operator implemented as a global function or a
static member function is:  
return_type operator operator_type (*parameter_type*)  
{  
// ... implementation  
}  
A unary operator that is the member of a class is defined as:  

return_type operator operator_type ()   
{   
// ... implementation  
}  

![image](https://user-images.githubusercontent.com/64036955/125280635-e5e82b80-e332-11eb-90ab-6b8dff505aed.png)

