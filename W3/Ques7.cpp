#include<iostream>
using namespace std;

void swap(int *xp, int *yp)
{
    int temp = *xp;
    *xp = *yp;
    *yp = temp;
}
  
void bubbleSort(int arr[], int n){
   int i, j;
   bool swapped;
   for (i = 0; i < n-1; i++)
   {
     swapped = false;
     for (j = 0; j < n-i-1; j++)
     {
        if (arr[j] > arr[j+1])
        {
           swap(&arr[j], &arr[j+1]);
           swapped = true;
        }
     }
  
     // IF no two elements were swapped by inner loop, then break
     if (swapped == false)
        break;
   }
}


long int nxtHighestNo(int a[], int n){

    //to check if the number is made of only 9's
    int count=0;
    for(int i=0; i<n; i++){
        if(a[i]!=9){
            count=1;
            break;
        }
        else
        continue;
    }
    if(count==0)
    return -1;

    //finding the first number from right which is not descending
    int i;
    for(i=n-1; i>=0; i--){
        if(a[i]<a[i-1]){
            continue;
        }
        else{
            --i;
            break;
        }
    }
    cout<<"\ni= "<<i;

    int ax[n-i];
    for(int j=n-1; j>=i; j--){
        ax[n-1-j]=a[j];
    }

    bubbleSort(ax, n-i);

    cout<<"\nax:";
    for(int j=0;j<n-i;j++)
    cout<<" "<<ax[j];

    int k;
    for(k=0; k<n-i; k++){
        if(ax[k]==a[i]){
            ++k;
            break;
        }
        
    }
    cout<<"\nk= "<<k;

    a[i]=ax[k];
    for(int j=0; a[j]<=9&&a[j]>=0; j++){
        if(j!=k){
            a[i+1+j]=ax[j];
        }
        else{
            i--;
            continue;
        }                
    }
    cout<<"\na[]:";
    for(int s=0;s<n;s++)
    cout<<" "<<a[s];
    
    long int number=0;
    int j=1;
    for(int i=n-1; i>=0; i++){
        number+= a[i]*j;
        j*=10;
    }
    
    return number;

}

int main(){

    int n;
    cout<<"\nNo. of digits in the number: ";
    cin>>n;

    int a[n];
    cout<<"\nEnter the digits one after one: ";
    for(int i=0; i<n; i++)
    cin>>a[i];

    cout<<endl;
    cout<<"The number is: "<<nxtHighestNo(a,n);   
    
    return 0;
}


