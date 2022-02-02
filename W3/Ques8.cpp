#include<iostream>
using namespace std;

void heapify(int arr[], int n, int i)
{
    int largest = i; // Initialize largest as root
    int l = 2 * i + 1; // left = 2*i + 1
    int r = 2 * i + 2; // right = 2*i + 2
 
    // If left child is larger than root
    if (l < n && arr[l] > arr[largest])
        largest = l;
 
    // If right child is larger than largest so far
    if (r < n && arr[r] > arr[largest])
        largest = r;
 
    // If largest is not root
    if (largest != i) {
        swap(arr[i], arr[largest]);
 
        // Recursively heapify the affected sub-tree
        heapify(arr, n, largest);
    }
}

void heapSort(int arr[], int n)
{
    // Build heap (rearrange array)
    for (int i = n / 2 - 1; i >= 0; i--)
        heapify(arr, n, i);
 
    // One by one extract an element from heap
    for (int i = n - 1; i > 0; i--) {
        // Move current root to end
        swap(arr[0], arr[i]);
 
        // call max heapify on the reduced heap
        heapify(arr, i, 0);
    }
}

void findPair(int a[], int n, int sum){

    heapSort(a,n);

    int x,y,count=0;
    x=0;
    y=n-1;

    while(x!=y){
        if(a[x]+a[y]==sum){
            count=1;
            break;
        }
        
        else{
            if(a[x]+a[y]>sum)
            y--;
            else
            x++;
        }
    }

    if(count==1){
        cout<<"\nThe pair is "<<a[x]<<" and "<<a[y];
    }
    else{
        cout<<"\nThe pair could not be found.";
    }
}


int main(){

    int n;
    cin>>n;
    int a[n];
    
    for(int i=0;i<n;i++)
    cin>>a[i];

    int sum;
    cout<<"\nEnter the sum: ";  
    cin>>sum;

    findPair(a,n,sum);  
    
    
    return 0;
}