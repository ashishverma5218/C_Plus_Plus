#include<iostream>
using namespace std;
int main(){

    int a,b;
    char op;

    cout<<"Enter first number: ";
    cin>>a;

    cout<<"Enter second number: ";
    cin>>b;

    cout<<"Enter operater: ";
    cin>>op;

    switch (op)
    {
    case '+':
    cout<<"Addition is "<<(a+b) <<endl;
        break;

    case '-':
    cout<<"substraction is "<<(a-b) <<endl;
        break;

    case '*':
    cout<<"Multipication is "<<(a*b) <<endl;
        break;

    case '/':
    cout<<"Division is "<<(a/b) <<endl;
        break;

    case '%':
    cout<<"Module is "<<(a%b) <<endl;
        break;
    
    default:
    cout<<"Wrong input ! Try again ";
        break;
    }

    return 0;
}