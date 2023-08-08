#include<iostream>
using namespace std;
class abc
{

int a,b,c;
public:
abc();
abc(int);
void show(){
    cout<<a<<endl;
    cout<<b<<endl;
    cout<<c<<endl;
}


};
abc :: abc(){
    cout<<"hello";
}
abc :: abc(int x){
cout<<endl<<"i am a parameterised constructor:"<<x;
}
// void display(){
//     cout<<"hello";
// }
int main()
{
    // display();
abc obj1;
obj1.show();
abc obj2(123534);
o;
return 0;
}