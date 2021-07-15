#include<stdio.h> 
/* 
    #include<> is a Preprocessor Directive (to tell the compiler how to read the program) ,
    ' stdio.h ' is a header file which contains the information about how to read the program (keywords , certain functions , etc.) and 
    in short it instructs the compiler how to intersept the keywords. ' .h ' is the extension , we can make custom header files.
*/

int main() {
/*
    main() is a function , anything with a bracket of this type are called function.
    Here int stands for integer & main() is a keyword (predefined) which is always necessary to write in the program,
    the compiler starts compiling the code from here. main() is a function which has a return type of integer.
*/
    printf("Hello World");
/*
    printf("") is a keyword which outputs the given statements, numbers, symbols to the screen.
    ' ; ' is a line terminator which tell the compiler that a line has ended.
*/
    return 0;
/*
    return is a keyword which returns someting from where it has been called  (char,int,bool,float,etc.).
    every function must has a return statement , here main function which is declared above, main() gets a integer (Boolean only 0,1) from this return statement ,
    by default the return value of main() should be zero.
*/
}
