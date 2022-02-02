#include<iostream>
using namespace std;

void findDups(int a[], int n){

    cout<<"check";

    int ptrNxt;
    int ptr=a[0];

    for(int i=0; i<n; i++){

        ptrNxt=a[ptr];

        if(a[ptr]>=0){
            a[ptr]=-1;
        }
        else{
            a[ptr]--;
        }
        
        ptr=ptrNxt;     
    }

    cout<<"Modified array: ";
    for(int i=0;i<n;i++)
    cout<<a[i]<<" ";

    
    for(int i=0;i<n;i++){
        if(a[i]<-1)
        cout<<a[i]<<" ";        
    }
    
    cout<<" have duplicates.";
}

int main(){
    
    int n;
    cin>>n;

    int a[n];

    cout<<"\nEnter the elements: ";
    for(int i=0;i<n;i++)
    cin>>a[i];

    findDups(a,n);
   
    return 0;
}