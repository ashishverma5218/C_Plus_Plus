#include<iostream>
using namespace std;
int main()
{
    int age;
    cout<<"tell me your age ";
    cin>>age;
    if(age<18)
    {
    cout<<"you can not come to my party";
    }
    if(age==18)
    {
    cout<<"you need pass for come to my party";
    }
    if(age>18)
    {
    cout<<"you can come to my party";
    }

    // switch (age)
    // {
    // case 18:
    // cout<<"you are 18";
    //     break;
    // case 40:
    // cout<<"you are 40";
    //     break;
    // case 90:
    // cout<<"you are 90";
    //     break;
    
    // default:
    //       cout<<"no special case";
    //     break;
    // }

    return 0;
}