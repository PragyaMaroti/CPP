The default arguments are used when you provide no arguments or only few arguments while calling a function. The default arguments are used during compilation of program.  
For function with multiiple arguments, it is up to us to assign default values to all arguments or only selected arguments but must remember the following rule while assigning default values to only some of the arguments:

If we assign default value to an argument, the subsequent arguments must have default values assigned to them, else we will get compilation error.  

Examples:  

Valid: Following function declarations are valid –

    int sum(int a=10, int b=20, int c=30);
    int sum(int a, int b=20, int c=30);
    int sum(int a, int b, int c=30);   
    
    
Invalid: Following function declarations are invalid –

    /* Since a has default value assigned, all the
     * arguments after a (in this case b and c) must have 
     * default values assigned
     */
    int sum(int a=10, int b, int c=30);

    /* Since b has default value assigned, all the
     * arguments after b (in this case c) must have 
     * default values assigned
     */
    int sum(int a, int b=20, int c);

    /* Since a has default value assigned, all the
     * arguments after a (in this case b and c) must have 
     * default values assigned, b has default value but
     * c doesn't have, thats why this is also invalid
     */
    int sum(int a=10, int b=20, int c);
