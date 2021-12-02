#include<iostream>
using namespace std;

int main()
{
    int i,*k,size;
   cout<<" How many numbers do you want from the fibonici series"<<endl;
   cin>>size;
   k=new int[size];
   k[0]=0;
   k[1]=1;
   for ( i = 2; i < size; i++)
   {
      k[i]=k[i-2]+k[i-1];
   }
   cout<<" Fibonici series is : "<<endl;
   for ( i = 0; i < size; i++)
   {
       cout<<k[i]<<" ";
   }
   return 0;
}
