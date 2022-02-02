#include<iostream>
#include<vector>
#include<math.h>
using namespace std;

float howMuchWater(int i, int j, vector <float> a){

    i--;
    float x=i*(i+1)/2;

    return a[x+j];
}

void splitWater(vector <float> &a){
    float litres= a[0];

    int b= (sqrt(1+(8*litres))-1)/2;

    float x=(b*(b+1))/2;

    for(int i=1;i<=x;i++)
    a.push_back(1.0);

    float remain=litres-x;

    float c=(float)remain/(b+1);

    for(int i=0;i<b+1;i++){
        a.push_back(c);
    }
    
    
}


int main(){

    float litres,i,j;
    cin>>litres;

    vector <float> a;

    a.push_back(litres);
    splitWater(a);

    cout<<endl;

    cout<<"\nEnter the i j of the glass's water to be known:";
    cin>>i>>j;

    cout<<"\nIt has "<<howMuchWater(i,j,a)<<" litres of water.";

    return 0;
}