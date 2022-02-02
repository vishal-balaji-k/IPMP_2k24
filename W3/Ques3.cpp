//finding the missing integer in an array
// Time complexity: O(n)
// Space complexity: O(n)


#include<iostream>
using namespace std;

int findMissingInt(int a[], int n){

    int aSorted[n+1];                                              //created a seperate array to embed present integers into it
    for(int i=0;i<n;aSorted[i++]=0);                               //intialised it to 0

    for(int i=0;i<n;i++)
        aSorted[a[i]-1]=a[i];                                      //embeddding present integers

    for(int i=0;i<n;i++){
        if(aSorted[i]==0){                                         //inex with 0 in it is the missing integer
            return i+1;
        }
    }
    cout<<"\nThere's no missing number :')";
    return 0;
}

int main(){

    int n;
    cout<<"\nNo. of integers in the array: ";
    cin>>n;
    int a[n];
    cout<<"\nEnter the elements of the array:";
    for(int i=0;i<n;i++)
    cin>>a[i];

    int missingInt=findMissingInt(a,n);

    if(missingInt!=0)
    cout<<"\nThe missing no. from 1 to "<<n+1<<" is: "<<missingInt;
        
    return 0;
}


//better method's there ------REVISE!-------

