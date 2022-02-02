#include<iostream>
using namespace std;

void findingPairWithLeastDiff(int a[], int n){

    int min,max;
    min=a[0];
    max=a[0];

    for(int i=0;i<n;i++){
        if(a[i]<min)
        min=a[i];
    }
    cout<<"\nmin: "<<min;

    for(int i=0;i<n;i++){
        if(a[i]>min)
        max=a[i];
    }
    cout<<"\nmax: "<<max;

    int hash[max-min+1];
    for(int i=0;i<max-min+1;i++)
    hash[i]=0;

    cout<<"\nHash table: ";
    
    for(int i=0;i<n;i++){
        hash[a[i]-min]=1;
    }

    for(int i=0;i<max-min+1;i++)
    cout<<hash[i]<<" ";

    int minDiff,x,y,count=INT16_MAX;
    minDiff=max-min;
    y=min;

    for(int i=0;i<max-min+1;i++){

        if(hash[i]==1){
            if(count<minDiff){
                x=y;
                y=i+min;
                minDiff=count;
            }
            count=0;  
        }

        count++;
    }

    cout<<"\nThe pair with least difference in the array is "<<x<<" and "<<y<<endl;
    cout<<"\nThe difference is: "<<minDiff;

}

int main(){

    int n;
    cin>>n;
    int a[n];

    for(int i=0;i<n;i++)
    cin>>a[i];

    findingPairWithLeastDiff(a,n);
       
    return 0;
}