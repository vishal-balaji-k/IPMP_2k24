#include <iostream>
using namespace std;

void Union(int a[],int m, int b[], int n){

    
    int arrUnion[m+n];
    
    for(int j=0;j<m+n;j++)
    arrUnion[j]=0;

    int i=0,j=0;
    int count=0;
    while(i<m&&j<n){
        if(a[i]>b[j]){
            arrUnion[count]=b[j];
            j++;
            count++;
        }
        else if(a[i]==b[j]){
            arrUnion[count]=a[i];
            i++;
            j++;
            count++;
        }
        else{
            arrUnion[count]=a[i];
            i++;
            count++;
        }
    }

    //printing the remaining elements
    if(i<m){
        while(i<m){
            arrUnion[count]=a[i];
            i++;
            count++;
        }
    }
    else{
        while(j<n){
            arrUnion[count]=b[j];
            j++;
            count++;
        }
    }

    //printing union
    cout<<endl;
    cout<<"Union of both arrays: ";
    for(int j=0;j<count;j++)
    cout<<arrUnion[j]<<" ";
}

void Intersection(int a[],int m, int b[], int n){
    int arrIntersection[m+n];
    
    for(int j=0;j<m+n;j++)
    arrIntersection[j]=0;

    int i=0,j=0;
    int count=0;
    while(i<m&&j<n){
        if(a[i]>b[j]){
            j++;
        }
        else if(a[i]==b[j]){
            arrIntersection[count]=a[i];
            i++;
            j++;
            count++;
        }
        else{
            i++;
        }
    }
    
    //printing Intesection
    cout<<endl;
    cout<<"Intersection of both arrays: ";
    for(int j=0;j<count;j++)
    cout<<arrIntersection[j]<<" ";
}

int main(){
    int m,n;
    cout<<endl;
    cout<<"Enter the lengths of each arrays: ";
    cin>>m>>n;
    int a[m],b[n];

    //taking the elements of arrays

    cout<<endl;
    cout<<"Enter elements of first array: ";
    for(int i=0;i<m;i++)
    cin>>a[i];

    cout<<endl;
    cout<<"Enter elements of second array: ";
    for(int j=0;j<n;j++)
    cin>>b[j];

    Union(a,m,b,n);
    cout<<endl;
    Intersection(a,m,b,n);
    cout<<endl;
    
    return 0;
}
