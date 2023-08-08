#include<iostream>
using namespace std;
int main(){
    // int a;

    // cout<<"Enter number: ";
    // cin>>a;

    // if(a%2!=0){
    //     cout<<a<<" is a prime number"<<endl;
    // }
    // else{
    //     cout<<a<<" is not a prime number"<<endl;
    // }


    int n;
    cout<<"Enter number: ";
    cin>>n;

    int i = 2;

    while(i<n){
        if(n%i==0){
            cout<<"Not prime for " <<i <<endl;
        }
        else{
            cout<<"Prime for " <<i <<endl;
        }
        i = i+1;
    }

    return 0;
}