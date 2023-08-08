#include<iostream>
using namespace std;
int main()
{
   int arr[5],i,sum=0;

   cout<<"Enter 5 no. of Array: ";

   for(i=0;i<5;i++){
   cin>>arr[i];}
   for(i=0;i<5;i++){
   sum=sum+arr[i];}

   cout<<"Sum of All Array number is: "<<sum <<endl;

   return 0;
}