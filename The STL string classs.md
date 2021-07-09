The string class not only dynamically resizes itself to cater to the application’s
requirement but also supplies useful helper functions/methods that help
manipulate the string and work using it.  
### The Need for String Manipulation classes:  
The STL string class std::string helps you in the following ways:
1. Reduces the effort of creation and manipulating strings.  
1. Increases the stability of the application being programmed by internally managing
memory allocation details.  
1. Supplies copy constructor and assignment operators that automatically ensure that
member strings get correctly copied.  
1. Supplies useful utility functions that help in copying, truncating, finding, and erasing
to name a few.  
1. Provides operators that help in comparisons.
1. Focuses efforts on your application’s primary requirements rather than on string
manipulation details.


### Working with the STL string class:  
To use the STL string class, you must include the header <string>.   
  
The most commonly used string functions are:  
- Copying.
- Concatenating.
- Finding characters and substrings.
- Truncating.
- String reversal and case conversions are achieved using algorithms provided by the
standard library.   
  
The string class features many overloaded constructors and therefore can be instantiated
and initialized in many different ways:   
  
  
       const char* pszConstString = “Hello String!”;
       std::string strFromConst (pszConstString);   
  
  
 
  
  or:  
  
        std::string strFromConst = pszConstString;  
  
or: 
  
       std::string str2 (“Hello String!”);   
  or: 
  

      std::string str2Copy (str2);  
  

 ➡️Note: Instantiating a string object and initializing it to a value did not require
supplying the length of the string or the memory allocation details—the constructor of
the STL string class automatically did this.   
  
  Other ways:  
  
        // Initialize a string to the first 5 characters of another   
      std::string strPartialCopy (pszConstString, 5);  
        // Initialize a string object to contain 10 ‘a’s  
      std::string strRepeatChars (10, ‘a’);  
  
  
   Consider the following program which initializes and copies the string: 
  
  
        #include <string>
       #include <iostream>
      
       int main ()
       {
       using namespace std;
       const char* pszConstString = “Hello String!”;
       cout << “Constant string is: “ << pszConstString << endl;
      
       std::string strFromConst (pszConstString);
       cout << “strFromConst is: “ << strFromConst << endl;
      
       std::string str2 (“Hello String!”);
       std::string str2Copy (str2);
       cout << “str2Copy is: “ << str2Copy << endl;
      
       // Initialize a string to the first 5 characters of another
       std::string strPartialCopy (pszConstString, 5);
       cout << “strPartialCopy is: “ << strPartialCopy << endl;
      
       // Initialize a string object to contain 10 ‘a’s
       std::string strRepeatChars (10, ‘a’);
       cout << “strRepeatChars is: “ << strRepeatChars << endl;
      
       return 0;
       }
  
Output:  
  
 Constant string is: Hello String!  
strFromConst is: Hello String!  
str2Copy is: Hello String!  
strPartialCopy is: Hello      
strRepeatChars is: aaaaaaaaaa    
  
  ### Accessing a string and Its Contents:   
  The character contents of an STL string can be accessed via iterators or via an arraylike
syntax where the offset is supplied, using the subscript operator [].  
  A C-style representation
of the string can be obtained via member function c_str ().   
  Consider tthe following example:  
  
  
        #include <string>
       #include <iostream>

       int main
       {
        using namespace std;

       // The sample string
       string strSTLString (“Hello String”);

       // Access the contents of the string using array syntax
       cout << “Displaying characters using array-syntax: “ << endl;
       for ( size_t nCharCounter = 0
       ; nCharCounter < strSTLString.length ()
       ; ++ nCharCounter )
       {
       cout << “Character [“ << nCharCounter << “] is: “;
       cout << strSTLString [nCharCounter] << endl;
       }
       cout << endl;

       // Access the contents of a string using iterators
      cout << “Displaying characters using iterators: “ << endl;
       int nCharOffset = 0;
       string::const_iterator iCharacterLocator;
       for ( iCharacterLocator = strSTLString.begin ()
       ; iCharacterLocator != strSTLString.end ()
       ; ++ iCharacterLocator )
       {
       cout << “Character [“ << nCharOffset ++ << “] is: “;
       cout << *iCharacterLocator << endl;
       }
       cout << endl;

       // Access the contents of a string as a C-style string
       cout << “The char* representation of the string is: “;
       cout << strSTLString.c_str () << endl;
       return 0;
       }
        
                                            
Output:  

        Displaying the elements in the string using array-syntax:
        Character [0] is: H
        Character [1] is: e
        Character [2] is: l
        Character [3] is: l
        Character [4] is: o
        Character [5] is:
        Character [6] is: S
        Character [7] is: t  
        Character [8] is: r
        Character [9] is: i
        Character [10] is: n
        Character [11] is: g
        Displaying the contents of the string using iterators:
        Character [0] is: H
        Character [1] is: e
        Character [2] is: l
        Character [3] is: l
        Character [4] is: o
        Character [5] is:
        Character [6] is: S
        Character [7] is: t
        Character [8] is: r
        Character [9] is: i
        Character [10] is: n
        Character [11] is: g
        The char* representation of the string is: Hello String
                                            
### String Concatenation
String concatenation can be achieved by using either the += operator or the append member
function:   
                                            
      string strSample1 (“Hello”);
       string strSample2 (“ String!”);

       // Concatenate
       strSample1 += strSample2;
       cout << strSample1 << endl << endl;
                                         
      string strSample3 (“ Fun is not needing to use pointers!”);
       strSample1.append (strSample3);
       cout << strSample1 << endl << endl;
                                            
      const char* pszConstString = “You however still can!”;
     strSample1.append (pszConstString);
     cout << strSample1 << endl;  
                               
Note the 3rd example. any string even if it is not defined with string class but as a char* can be used for concatenation.   
Note the use of the += operator and the capability of the append function, which has many
overloads, to accept another string object (as shown in line 11) and to accept a C-style
character string.   

### Finding a Character or Substring in a string:  
The STL string supplies a find member function with a few overloaded versions that
help find a character or a substring in a given string object.  

                               str.find("what" , number indicating the search offset, the point from which find should search.);
                               
Consider the following example for using find:  
          #include <string>
          #include <iostream>

          int main ()
           {
           using namespace std;

           string strSample (“Good day String! Today is beautiful!”);
          cout << “The sample string is: “ << endl;
          cout << strSample << endl << endl;

           // Find substring “day” in it...
          size_t nOffset = strSample.find (“day”, 0);

           // Check if the substring was found...
           if (nOffset != string::npos)
           cout << “First instance of \”day\” was found at offset “ << nOffset;
           else
          cout << “Substring not found.” << endl;

           cout << endl << endl;

           cout << “Locating all instances of substring \”day\”” << endl;
           size_t nSubstringOffset = strSample.find (“day”, 0);

           while (nSubstringOffset != string::npos)
           {
           cout << “\”day\” found at offset “ << nSubstringOffset << endl;
           // Make the ‘find’ function search the next character onwards
           size_t nSearchOffset = nSubstringOffset + 1;

          nSubstringOffset = strSample.find (“day”, nSearchOffset);
           }

           cout << endl;

           cout << “Locating all instances of character ‘a’” << endl;
           const char chCharToSearch = ‘a’;
           size_t nCharacterOffset = strSample.find (chCharToSearch, 0);

           while (nCharacterOffset != string::npos)
           {
           cout << “‘“ << chCharToSearch << “‘ found”;
           cout << “ at position: “ << nCharacterOffset << endl;

           // Make the ‘find’ function search forward from the next character
          onwards
          size_t nCharSearchOffset = nCharacterOffset + 1;

           nCharacterOffset = strSample.find(chCharToSearch,nCharSearchOffset);
           }

           return 0;
           }
  Output:   
  
        The sample string is:
        Good day String! Today is beautiful!
        First instance of “day” was found at offset 5
        Locating all instances of substring “day”
        “day” found at offset 5
        “day” found at offset 19
        Locating all instances of character ‘a’
        ‘a’ found at position: 6
        ‘a’ found at position: 20
        ‘a’ found at position: 28
  
  Note: **against std::string::npos (that is actually –1) and indicates that the
element searched for has not been found. When the find function does not return npos,
it returns the offset that indicates the position of the substring or character in the string.**

Note:  The STL string also features functions akin to find, such as
find_first_of, find_first_not_of, find_last_of, and
find_last_not_of, which assist the programmer further in his
programming requirements.
  
  ### Truncating an STL string
The STL string features a function called erase that can erase:
- A number of characters when given an offset position and count.
- A character when supplied with an iterator pointing to it.
- A number of characters given a range supplied by two iterators that bind the same.
  
Note: str.begin() and str.end() takes us to begining and end of the str sample.  
  
 Consider the following example:  
       #include <string>
       #include <algorithm>
       #include <iostream>

       int main ()
       {
       using namespace std;

       string strSample (“Hello String! Wake up to a beautiful day!”);
       cout << “The original sample string is: “ << endl;
       cout << strSample << endl << endl;
      // Delete characters from the string given position and count
       cout << “Truncating the second sentence: “ << endl;
       strSample.erase (13, 28);
       cout << strSample << endl << endl;

       // Find a character ‘S’ in the string using STL find algorithm
       string::iterator iCharS = find ( strSample.begin (), strSample.end (), ‘S’);

      // If character found, ‘erase’ to deletes a character
       cout << “Erasing character ‘S’ from the sample string:” << endl;
       if (iCharS != strSample.end ())
       strSample.erase (iCharS);

       cout << strSample << endl << endl;

      // Erase a range of characters using an overloaded version of erase()
       cout << “Erasing a range between begin() and end(): “ << endl;
       strSample.erase (strSample.begin (), strSample.end ());

       // Verify the length after the erase() operation above
       if (strSample.length () == 0)
  
        cout << “The string is empty” << endl;

       return 0;
       }
  Output:  
  
      The original sample string is:
      Hello String! Wake up to a beautiful day!
      Truncating the second sentence:
      Hello String!
      Erasing character ‘S’ from the sample string:
      Hello tring!
      Erasing a range between begin() and end():
      The string is empty
  
  ### String reversal:  
  STL strings can be reversed easily
using the std::reverse algorithm:  
  
      #include <string>
     #include <iostream>
      #include <algorithm>
    int main ()
     {
     using namespace std;

     string strSample (“Hello String! We will reverse you!”);
     cout << “The original sample string is: “ << endl;
     cout << strSample << endl << endl;
     reverse (strSample.begin (), strSample.end ());

     cout << “After applying the std::reverse algorithm: “ << endl;
     cout << strSample;

     return 0;

     }  
  
  ### String Case Conversion:
  String case conversion can be effected using the algorithm std::transform, which
applies a user-specified function to every element of a collection. In this case, the collection
is the string object itself.  
  
  
        #include <string>
       #include <iostream>
       #include <algorithm>

       int main ()
       {
      using namespace std;

       cout << “Please enter a string for case-conversion:” << endl;
       cout << “> “;

       string strInput;
       getline (cin, strInput);
       cout << endl;

       transform (strInput.begin(),strInput.end(),strInput.begin(),toupper);
       cout << “The string converted to upper case is: “ << endl;
       cout << strInput << endl << endl;

       transform (strInput.begin(),strInput.end(),strInput.begin(),tolower);
       cout << “The string converted to lower case is: “ << endl;
       cout << strInput << endl << endl;

       return 0;
       } 
  
  Output :   
  
  
      Please enter a string for case-conversion:
      > ConverT thIS StrINg!
      The string converted to upper case is:
      CONVERT THIS STRING!
      The string converted to lower case is:
      convert this string!
Note:  **The transform() function in C++ sequentially applies an operation to the elements of an array(s) and then stores the result in another output array.**
  It  is used in two forms:   

Unary operation: The operation is applied to each element in the input range, and the result is stored in the output array.   

Binary Operation: A binary operation is called on each element of the first input range and the respective element of the second input range. The output is stored in the output array.  
  
  ### Template-Based Implementation of an STL string:  
  
  ![image](https://user-images.githubusercontent.com/64036955/125027821-85dc5580-e0a4-11eb-8516-4cebe7d58d66.png)

  
  
  
