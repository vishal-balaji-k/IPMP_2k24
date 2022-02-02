#include<iostream>
using namespace std;

int oddNumber(int a[], int n){

    int b=0;

    for(int i=0;i<n;i++){
        b^=a[i];
    }
    return b;
}

int main(){

    int n;

    cout<<"\nNo. of numbers in the array: ";
    cin>>n;

    int a[n];

    cout<<"\nEnter the digits of the array: ";
    for(int i=0;i<n;i++)
    cin>>a[i];

    cout<<"\nThe number "<<oddNumber(a,n)<<" is the only number occuring odd number of times";
        
    
    return 0;
}