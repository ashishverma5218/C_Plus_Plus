#include<iostream>
using namespace std;
int main(){
    
    int amount;
    int n1,n2,n5,n10,n20,n50,n100;
    n1 = n2 = n5 = n10 = n20 = n50 = n100 = 0;
    cout<<"Enter Amout: ";
    cin>>amount;

   switch(amount>=100)
   {
        case 1:
            n100 = amount/100;
            amount -= n100 * 100;
        break;
   }
   switch(amount>=50)
   {
        case 1:
            n50 = amount/50;
            amount -= n50 * 50;
        break;
   }
   switch(amount>=20)
   {
        case 1:
            n20 = amount/20;
            amount -= n20 * 20;
        break;
   }
   switch(amount>=10)
   {
        case 1:
            n10 = amount/10;
            amount -= n10 * 10;
        break;
   }
   switch(amount>=5)
   {
        case 1:
            n5 = amount/5;
            amount -= n5 * 5;
        break;
   }
   switch(amount>=2)
   {
        case 1:
            n2 = amount/2;
            amount -= n2 * 2;
        break;
   }
   switch(amount>=1)
   {
        case 1:
            n1 = amount/1;
            amount -= n1 * 1;
        break;
   }


   cout << "100 = "  << n100 <<endl;
   cout << "50 = "  << n50 <<endl;
   cout << "20 = "  << n20 <<endl;
   cout << "10 = "  << n10 <<endl;
   cout << "5 = "  << n5 <<endl;
   cout << "2 = "  << n2 <<endl;
   cout << "1 = "  << n1 <<endl;

    return 0;
}    