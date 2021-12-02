#include<iostream>
using namespace std;

 //struct employee
 //  {
 //      /* data */
 //      int eID;
 //      char favChar;
 //      float salary; 
 //  };
 //      
 //      union money
 //       {
 //           /* data */
 //           int rice;
 //           char car;
 //           float pounds; 
 //       };
   
  int main(){
      enum meal{breakfast, lunch, dinner};
      meal m1 = dinner;
      cout<<m1<<endl;
      //cout<<lunch<<endl;
      //cout<<dinner<<endl;




      //union money m1;
      //m1.rice = 34;
      //m1.car = 'c';
      //cout<<m1.car<<endl;
      

       /*we can make typedef
                    ep so that only ep can be writen*/ 
    // struct employee shreyas;
   
    // shreyas.eID = 1;
    // shreyas.favChar = 's';
    // shreyas.salary = 125000;

    
 //cout<<" The ID of the 1 st employee is : "<<shreyas.eID<<endl;
 //cout<<" The Fav Char of the 1 st employee is : "<<shreyas.favChar<<endl;
 //cout<<" The salary of the 1 st employee is : "<<shreyas.salary<<endl;
   return 0;
}
