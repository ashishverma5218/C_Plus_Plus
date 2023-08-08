#include<iostream>
using namespace std;
int main(){
     float a,b,c,df,fd;

    cout<<"What you want to do :   Degree to Fehrenheit Press 1  OR  Fehrenheit to Degree Press 2 :->";
    cin>>a;
    if (a==1){
        cout<<"Enter Degree: ";
        cin>>b;

        df = (b*9/5+32);

        cout<<"Fehenheit is " <<df;
    }
    else if(a==2){
        cout<<"Enter Fehrenheit: ";
        cin>>c;

        fd = (c-32)*5/9;

        cout<<"Degree is " <<fd;
    }
    return 0;
}