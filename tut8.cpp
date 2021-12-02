#include<iostream>
using namespace std;

int main()
{
    //cout<<"This is tutorial 8";//
    int age;
    cout<<" Tell me your age :"<<endl;
    cin>>age;

    //Selection Control Structure : if else - if else ladder
    //if (age<18)
    //{
    //    cout<<" You cannot come to my party"<<endl;
    //}
    //else if (age==18)
    //{
    //   cout<<" You are still a kid so you will get kids pass"<<endl;
    //}
    //else{
    //    cout<<" You can come to the party"<<endl;
    //}

    //Selection Control Structure : Switch Case statement
    switch (age)
    {
    case 18:
        cout<<"You are 18"<<endl;
        break;
    case 22:
        cout<<"You are 22"<<endl;
        break;
    case 2:
        cout<<"You are 2"<<endl;
        break;
    
    default:
        cout<<"No special cases"<<endl;
        break;
    }
    

    

    return 0;
}
