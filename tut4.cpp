//There are two types of header files::
//1.System header files: it comes with the compiler.

//1.User defined header file: it is writen by the programmer.
//#include "this.h"--> this will show an error if this.h is not present in 
//current directory
#include <iostream>
using namespace std;

int main()
{
    int a=4, b=5;
    cout<<"the pre given two numbers are: A=4 and B=5 "<<endl;
    cout<<endl;
    cout<<"Operators in c++"<<endl;
    cout<<"Following are the types of operators in c++: "<<endl;
    //Arithmetic operators
    cout<<"The value of a + b is: "<<a+b<<endl;
    cout<<"The value of a - b is: "<<a-b<<endl;
    cout<<"The value of a * b is: "<<a*b<<endl;
    cout<<"The value of a / b is: "<<a/b<<endl;
    cout<<"The value of a % b is: "<<a%b<<endl;
    cout<<"The value of a ++ is: "<<a++<<endl;
    cout<<"The value of a -- is: "<<a--<<endl;
    cout<<"The value of ++a is: "<<++a<<endl;
    cout<<"The value of --a is: "<<--a<<endl;
    cout<<endl;


    //Assignment operators --> Used to assign values to the variables
    /*int a=9, b=3;
    char d='d';*/

    // Comparison operators
    cout<<"Following are comparison operators in c++: "<<endl;
    cout<<"the value of a==b is"<<(a==b)<<endl;
    cout<<"the value of a!=b is"<<(a!=b)<<endl;
    cout<<"the value of a>=b is"<<(a>=b)<<endl;
    cout<<"the value of a<=b is"<<(a<=b)<<endl;
    cout<<"the value of a>b is"<<(a>b)<<endl;
    cout<<"the value of a<b is"<<(a<b)<<endl;

    // Logical operators
    cout<<endl;
    cout<<"Following are logical operators in c++: "<<endl;
    cout<<"the value of (a==b) and (a<b) logical operator is : "<<((a==b) && (a<b))<<endl;
    cout<<"the value of (a==b) or (a<b) logical operator is : "<<((a==b) || (a<b))<<endl;
    cout<<"the value of (!a==b) logical operator is : "<<(!(a==b))<<endl;
    


    
    return 0;
}
