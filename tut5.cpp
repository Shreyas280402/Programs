#include<iostream>
using namespace std;

//int c=45;
int main()
{
    //************* Build in Data Types *************
    
    //int a,b,c;
    //cout<<"Enter the value of A: "<<endl;
    //cin>>a;
    //cout<<"Enter the value of B: "<<endl;
    //cin>>b;
    //c = a + b;
    //cout<<"The sum of the given two numbers is: "<<c<<endl;
    //cout<<"The global c is: "<<::c<<endl;
    // (:: this is the SCOPE RESOLUTION OPERATOR for getting global variable)
    //(*The f and The l depicts the f:Float, l:Long Double.)
    
    //************* Float, Double and Long Double Literals *************
   
    //float d=34.4f;
    //long double e=34.4l;
    ////sizeoff is c++ keyword to find the size
    //cout<<"The Size of 34.4 is: "<<sizeof(34.4)<<endl;
    //cout<<"The Size of 34.4f is: "<<sizeof(34.4f)<<endl;
    //cout<<"The Size of 34.4F is: "<<sizeof(34.4F)<<endl;
    //cout<<"The Size of 34.4l is: "<<sizeof(34.4l)<<endl;
    //cout<<"The Size of 34.4L is: "<<sizeof(34.4L)<<endl;
    
    //************* Reference Variables *************

    /*   In the given below program the value of y has been given a reference
    to the value of x   */

    //float x=420;
    //float & y= x;
    //cout<<x<<endl;
    //cout<<y<<endl;

    //************* Typecasting *************

    int a=45;
    float b=45.5;
    cout<<"the value of a is: "<<(float)a<<endl;
    cout<<"the value of a is: "<<float(a)<<endl;

    cout<<"the value of b is: "<<(int)b<<endl;
    cout<<"the value of b is: "<<int(b)<<endl;

    int c = int(b);
    cout<<endl;
    cout<<"the expression is: "<<a + b<<endl;
    cout<<"the expression is: "<<a + int(b)<<endl;
    cout<<"the expression is: "<<a + (int)b<<endl;


     return 0;
}

