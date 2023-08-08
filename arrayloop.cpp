#include<iostream>
using namespace std;

typedef struct employee 
{
    int eid;
    char favchar;
    float salary;

} ep;
int main(){

    // int marks[4]={12,13,14,15};
    // for(int i = 0; i<4; i++){
    //     cout<<"this is "<<i<<" is "<<marks[i]<<endl;
    // }


    // int i = 0;
    // while(i<4){
    //     cout<<"value in "<<i<< " is "<<marks[i]<<endl;
    //     i++;
    // }

    // do{
    //     cout<<"The value is "<<i<<" is "<<marks[i]<<endl;
    //     i++;
    // }
    //     while(i>4);

    // pointers in array
    
    // int *p = marks;
    // cout<<"The value of *p is "<<*p<<endl;
    // cout<<"The value of *p is "<<*(p+1)<<endl;
    // cout<<"The value of *p is "<<*(p+2)<<endl;
    // cout<<"The value of *p is "<<*(p+3)<<endl;


    // struct 

    ep harry;
    harry.eid = 1;
    harry.favchar = 'c';
    harry.salary = 120000;
    cout<<"The value is "<<harry.eid<<endl;
    cout<<"The value is "<<harry.favchar<<endl;
    cout<<"The value is "<<harry.salary<<endl;

    return 0;
}
