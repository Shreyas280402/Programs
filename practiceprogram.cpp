#include<iostream>
using namespace std;

int main()
{
    //int a,b,c;
    //cout<<" Enter the first numbers :"<<endl;
    //cin>>a;
    //cout<<" Enter the second number :"<<endl;
    //cin>>b;
    //cout<<" Enter the third number :"<<endl;
    //cin>>c;
    //if (a>b&&a>c)
    //{
    //    cout<<" First number is greater"<<endl;
    //}
    //else if (b>a&&b>c)
    //{
    //    cout<<" Second number is greater";
    //}
    //else if (c>a&&c>b)
    //{
    //    cout<<" Third number is greater";
    //}
     
    int a,b,c;
    cout<<" Enter The three numbers :"<<endl;
    cin>>a>>b>>c;
    if (a>b&&a>c)
    {
        cout<<"greater number is :"<<a<<endl;

    }
    else if (b>c&&b>a)
    {
        cout<<"greater number is :"<<b<<endl;
    }
    else 
    cout<<" Greater number is "<<c<<endl;

    
    return 0;
}
