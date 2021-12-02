#include<iostream>
using namespace std;

int main()
{
    int age;
    cout<<" Provide me with your age : "<<endl;
    cin>>age;
    switch (age)
    {
    case 18:
    cout<<" You are 18 years old. "<<endl;
        break;/*-------------------------------- Break is used so that 
                                                 after a true statement
                                                program will exiyt*/
    case 22:                                    
    cout<<" You are 22 years old. "<<endl;     
        break;    
    case 50:                                      
    cout<<" You are 50 years old. "<<endl;        
        break;
                                                   
    default:                                    
    cout<<" You are not a special case. ";      
        break;}
    return 0;
}
