#include<iostream>
using namespace std;
class addition 
{
    public:
    int add(float a , float b)
    {
        return(a+b);
    }
};
class substraction
{
    public:
    int sub(float a , float b)
    {
        return(a-b);
    }
};
class multipication 
{
    public:
    int mul(float a , float b)
    {
        return(a*b);
    }
};
class division 
{
    public:
    int div(float a , float b)
    {
        return(a/b);
    }
};

class square
{
    public :
    int squ(int a , int b )
    {
        return(a * a);
    }
};
class percrentage
{
public :
  int per(int a , int b)
{
    return(a/b*100);
}
};
class calculation : public addition , public substraction , public multipication , public division , public square , public percentage
{
};

int main()
{
    calculation c;
    int option;
    float num1,num2;
    while(1){
    cout<<"\nEnter 1,2,3,4,5,6,7 : ";
    cin>>option;
    switch (option)
    {
    case 1:
        cout<<"Enter two number:";
        cin>>num1>>num2;
        cout<<"Addition= "<<c.add(num1,num2);
        break;
    case 2:
        cout<<"Enter two number: ";
        cin>>num1>>num2;
        cout<<"Substraction= "<<c.sub(num1,num2);
        break;
    case 3:
        cout<<"Enter two number: ";
        cin>>num1>>num2;
        cout<<"MUltipication= "<<c.mul(num1,num2);
        break;
    case 4:
        cout<<"Enter two number: ";
        cin>>num1>>num2;
        cout<<"Division= "<<c.div(num1,num2);
        break;
    case 5:
       cout<<"enter two number:";
       cin>>num1;
       cout<<"square= "<<c.squ(num1,num2);
       break;
   case 6:
      cout<<"enter a number :";
      cin>>num1;
      cout<<"enter total number :";
      cin>>num2;
      cout<<"percentage = "<<c.per(num1,num2)<<"%";
    case 7:
        exit(0);
    default:
        cout<<"\nEnter correct choice: ";
    }
    }
    return 0;
}
