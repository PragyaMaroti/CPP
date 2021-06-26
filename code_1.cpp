// one line comment
/* multiple
line 
comment */

#include<iostream> //  lines begining with # : preprocessed with preprocessor( runs before compilation. <iostream> is the header file,  of which we include its declared functions, classes etc
using namespace std  // when there are multiple header files, with using same names get difficult, namspaces are used to specify. ((replacement of ::))
 //std is a namespace name, this tells the compiler to look into that particular region for all the variables, functions, etc. 
 int main() // standard way of writting main() , not compiler specific. (void main)
{ int x;
cout<<"hello"<<endl<<'world'; // cout is present in <iostream> header; endl is used to move to next line
  // '<<' operator is called "insertion operator", it's being used to input something on the output stream
 cin>> x;
 cout<<"you have entered:"<< " " <<x; // '>>' is called "extraction operator"
  return 0; // function executed successfully
}
