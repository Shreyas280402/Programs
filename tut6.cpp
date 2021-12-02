#include<iostream>
#include<iomanip>

using namespace std;

int main()
{
    //int a = 34;
    //char c = 'c';
    //cout<<"The value of A before was: "<<a<<endl;
    //cout<<"The value of C before was: "<<c<<endl;
    //a = 45;
    //c = '4';
    //cout<<"The value of A now is: "<<a<<endl;    
    //cout<<"The value of C now is: "<<c<<endl;
    
    
    //*****Constant in C++*****//
    //int a =3, b =7, c =1233;
    //cout<<"The value of A before was: "<<a<<endl;
    //a = 45; // you will get an error because a is previously declared constant
    //cout<<"The value of A now is: "<<a<<endl;

    //*****Manipulators in C++*****//
    
    //cout<<"The value of A without set w is: "<<a<<endl;
    //cout<<"The value of B without set w is: "<<b<<endl;
    //cout<<"The value of C without set w is: "<<c<<endl;

    /*cout<<endl;
    cout<<"The value of A without is: "<<setw(4)<<a<<endl;
    cout<<"The value of B without is: "<<setw(4)<<b<<endl;
    cout<<"The value of C without is: "<<setw(4)<<c<<endl;*/
    
    /*Operator Precedence*/
    int a =4, b=3;
    //int c =(a+5)*b;
    
    int c=((((a*5)+b)-45)+87);

    cout<<"The value of C is: "<<c;





   return 0;
}
