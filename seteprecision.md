```C++
#include <iostream>
#include <cstdio>
#include<iomanip>
using namespace std;

int main() {
    // Complete the code.
    int a;
    long b;
    char c;
    float d;
    double e;
    cin>>a>>b>>c>>d>>e;
    cout<<a<<"\n"<<b<<"\n"<<c<<"\n";
     cout<<fixed<<setprecision(3)<<d<<"\n";
    cout<<fixed<<setprecision(9)<<e<<"\n";
    
    return 0;
}
  ```
  
  std::setprecision: Sets the decimal precision to be used to format floating-point values on output operations.
it can be inserted/extracted on input streams or output streams.
**This manipulator is declared in header "iomanip".**
parameters: n, the no. of 
return value: not specified, to be used as a manipulator
std::fixed: 
When floatfield is set to fixed, floating-point values are written using fixed-point notation: the value is represented with exactly as many digits in the decimal part as specified by the precision field (precision) and with no exponent part.  
**Because this function is a manipulator, it is designed to be used alone with no arguments in conjunction with the insertion (<<) and extraction (>>) operations on streams**
**Return type: Argument str.**
![image](https://user-images.githubusercontent.com/64036955/126925560-8f424d7f-bd94-4e56-8478-4377b0f00aed.png)



```C++
// setprecision example
#include <iostream>     // std::cout, std::fixed
#include <iomanip>      // std::setprecision

int main () {
  double f =3.14159;
  std::cout << std::setprecision(5) << f << '\n';
  std::cout << std::setprecision(9) << f << '\n';
  std::cout << std::fixed;
  std::cout << std::setprecision(5) << f << '\n';
  std::cout << std::setprecision(9) << f << '\n';
  return 0;
}
```
Output:  
3.1416  
3.14159  
3.14159  
3.141590000  
