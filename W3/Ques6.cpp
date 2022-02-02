#include<iostream>
using namespace std;

void genNxtSmlPalindrome(int a[], int n){

    long int countt=0;                           //all 9's
    for(int i=0;i<n;i++){
        if(a[i]!=9)
        countt=1;
    }

    if(countt==0){
        countt=1;
        for(int i=0;i<n;i++)
        countt*=10;
        countt+=1;
        cout<<"\nNext smallest palindrome is: "<<countt;
        return;
    }

    int count=0;

    for(int i=0;i<n/2;i++){
        if(a[i]!=a[n-i-1])
        count=1;
    }

    if(count==0){                                      //palindrome
        if(n%2==0){
            a[n/2]++;
            a[n/2-1]++;
        } 
        else{
            a[n/2]++;
        }
        
    }
    else{                                              //not a palindrome

        if(n%2==0){                   //even
            int count=0;
            for(int i=n/2-1; i>=0; i--){
                if(a[i]<a[n-1-i])
                count=1;
            }

            if(count==1){

                a[n/2-1]++;

                for(int i=n/2-1; i>=0; i--){
                    a[n-1-i]=a[i];
                }
            }
            else{

                for(int i=n/2-1; i>=0; i--){
                    a[n-1-i]=a[i];
                }

            }

        }
        else{                        //odd
            int count=0;

            for(int i=n/2-1; i>=0; i--){
                if(a[i]<a[n-1-i])
                count=1;
            }

            if(count==1){

                a[n/2]++;

                for(int i=n/2-1; i>=0; i--){
                    a[n-1-i]=a[i];
                }
            }
            else{
                for(int i=n/2-1; i>=0; i--){
                    a[n-1-i]=a[i];
                }
            }
            
        }
    }

    //printing the next smallest palindrome
    cout<<"\nNext smallest palindrome is: ";
    for(int i=0;i<n;i++)
    cout<<a[i];

}

int main(){

    int n;
    cin>>n;
    int a[n];

    for(int i=0;i<n;i++)
    cin>>a[i];

    genNxtSmlPalindrome(a,n);
       
    return 0;
}

