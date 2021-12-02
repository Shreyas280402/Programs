#include<iostream>
using namespace std;

int main()
{
    int i,*k,size;
   cout<<" How many square numbers do you want in series : "<<endl;
   cin>>size;
   k=new int[size];
   for ( i = 1; i <= size; i++)
   {
      k[i-1]=i*i;
   }
   cout<<" square number series is : "<<endl;
   for ( i = 0; i < size; i++)
   {
       cout<<k[i]<<" ";
   }
   return 0;
}
