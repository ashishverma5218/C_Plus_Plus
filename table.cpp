#include<iostream>
using namespace std;
int main(){
    int n;
    cin>>n;
    int i = 1;
    // for(int i = 1; i<=10; i++){
    //     cout<< n <<" * "<<i <<" = "<<n*i <<endl;
    // }

    while(i<=10){
        cout<< n <<" * "<<i<<" = "<<n*i <<endl;
        i++;
    }
    return 0;
}