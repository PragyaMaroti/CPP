The main differences between pointers and references are -

1. References are used to refer an existing variable in another name whereas pointers are used to store address of variable.   

2. References cannot have a null value assigned but pointer can.   

3. A reference variable can be referenced by pass by value whereas a pointer can be referenced but pass by reference.   

4. A reference must be initialized on declaration while it is not necessary in case of pointer.  

5. A reference shares the same memory address with the original variable but also takes up some space on the stack whereas a pointer has its own memory address and size on the stack.   



### Pointer Implementations:  

In C++, a new object, variable or array can be created using the new operator, and freed with the delete operator.   
Example:  
```cpp
int *ptr = new int;
  /* ... */
delete ptr;
```
```cpp
int *ptr;      //creating a pointer named ptr
  int num = 4;    //intilizaing an int type variable named num with value 4
ptr = new int[num];  //using new to initialize the ptr array with size num and dynamically allocated memory in heap
```

❗ NOTE: **The new operator allocates an object from the heap and optionally initializes it.**    
When you have finished using it, you must delete it. Otherwise, the pointed memory is inaccessible, and the result is memory leak.

❗ Note: When we allocate memory using new, it remains allocated until the program exits, but you can explicitly deallocate it with delete beforehand. 

### Referencing variables
The & operator is used to reference an object. When using this operator on an object, you are provided with a pointer to that object. This new pointer can be used as a parameter or be assigned to a variable.   


### Pointers to array:  

Example:   

```cpp
#include <iostream>
using namespace std;

int main() {
  //first we declare an array
  int arr[4];
  //next we declare a pointer 
  int *ptr;
  //now we make the pointer ptr point to the first element of the array arr
  ptr = arr;
  //next we set the value of the first element of arr, that is, arr[0] equal to 3
  *ptr = 3;
  //now we increment the pointer ptr to point to second element of the array arr
  ptr++;
  //next we update the value of the second element of arr, that is, arr[1] being pointed at by ptr
  *ptr = 5;
  //to directly store a value at some index in arr, e.g at the 3rd index of array we first get the address 
  ptr = &arr[3];
  //now storing a value at arr[3] location
  *ptr = 10;
  //moving pointer back to arr[0]
  ptr = arr;
  //storing value at arr[2] now
  *(ptr+2) = 8;
  //now lets display all the values we stored in our array
  for (int i=0; i<4; i++){
    cout<< "value at arr["<<i<<"] is: "<<arr[i]<<endl;
  }
  return 0;
}
```

Result:  
![image](https://user-images.githubusercontent.com/64036955/144177428-79ff3f7e-1c9e-4373-a9e8-ce7635974077.png)   

