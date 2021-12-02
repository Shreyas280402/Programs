#include<iostream>
using namespace std;

int main()
{
    int marks[4]={23,46,50,67};
    int mathMarks[4];
    cout<<"this are mathMarks : "<<endl;

    mathMarks[0]=98;
    mathMarks[1]=58;
    mathMarks[2]=69;
    mathMarks[3]=20;


    cout<<mathMarks[0]<<endl;
    cout<<mathMarks[1]<<endl;
    cout<<mathMarks[2]<<endl;
    cout<<mathMarks[3]<<endl;

    cout<<"this are total marks :"<<endl;

    cout<<marks[0]<<endl;
    /*you can change the value of an array*/
    //marks[1]=48;
    cout<<marks[1]<<endl;
    cout<<marks[2]<<endl;
    cout<<marks[3]<<endl;
    for (int i = 0; i < 4 ; i++)
    {
        cout<<"the value of marks "<< i <<" is :"<< marks[i]<<endl;
    }

    //int i=0;
    //while (i<4)
    //{
    //    cout<<marks[i]<<endl;
    //    i++;
    
    /* Pointers in Array*/
    int*p = marks;
    cout<<"the Value of *p is : "<<*p<<endl;
    cout<<"the Value of *(p+1) is : "<<*(p+1)<<endl;
    cout<<"the Value of *(p+2) is : "<<*(p+2)<<endl;
    cout<<"the Value of *(p+3) is : "<<*(p+3)<<endl;

    
    
   
    return 0;
}
