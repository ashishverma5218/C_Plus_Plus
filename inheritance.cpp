#include<iostream>
using namespace std;
class multiply
{
    public:
    int mul(float a,float b)
    {
        return(a*b);
    }

};

class division
{
    public:
    int div(float numerator, float den )
    {
        return (numerator/den);
    }
};
class additition
{
 public:
 int add(float a, float b)
 {
    return(a+b);

 }
};
class subtract 


{
public :
int sub(float a, float b)
{
    return(a-b);
}
};

class calculation : public multiply, public division, public additition, public subtract 
{


};

int main()
{
    calculation c;
    int option;
    float num1,num2;
    while(1)
    {
    cout<<"\nEnter your choice 1 for divsion, 2 for mul ,3 for addition 4 for subtract and 5 for exit =  ";
    cin>>option;
    switch(option)
    {
        case 1 :
        cout<<"Enter two number";
        cin>>num1>>num2;
        cout<<"Division="<<c.div(num1,num2);
        break;
        case 2 :
        cout<<"Enter two number";
        cin>>num1>>num2;
        cout<<"Multiplication="<<c.mul(num1,num2);
        break;
        case 3 :
        cout<<"Enter two number";
        cin>>num1>>num2;
        cout<<"additition="<<c.add(num1,num2);
        break;
        case 4 :
        cout<<"enter two number";
        cin>>num1>>num2;
        cout<<"subtract="<<c.sub(num1,num2);
        break;
        case 5:
        exit(0);
        default:
        cout<<"\nplease enter correct choice";
    }
    }
    return 0;
}
