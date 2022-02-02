#include<iostream>
#include<algorithm>
#include<utility>
using namespace std;

void findPairWithSumCloseToZero(int a[], int n){
    
    sort(a,a+n);

    cout<<"\naSorted: ";
    for(int i=0;i<n;i++)
    cout<<a[i]<<" ";

    int x,minX,minY,y;
    int minSum=INT16_MAX;
    x=0;
    y=n-1;
    int sum=a[x]+a[y];

    while(x<y){

        if(abs(sum)<=abs(minSum)){
            minSum=sum;
            minX=x;
            minY=y;
        }

        if(sum>0){
            y--;
        }
        else{
            x++;
        }

        sum=a[x]+a[y];

    }
    
    cout<<"\nThe pair whose sum is closest to zero is "<<a[minX]<<" and "<<a[minY];

}

int main(){

    int n;
    cin>>n;

    int a[n];

    for(int i=0;i<n;i++)
    cin>>a[i];

    findPairWithSumCloseToZero(a,n);
    
    return 0;
}