#include<iostream>
#include<vector>
using namespace std;


int main(){

    int m,n;
    cin>>m>>n;

    int a[m][n];
    vector<int> row;
    vector<int> column;
    cout<<"Enter the elements:"<<endl;

    for(int i=0; i<m; i++){
        row.push_back(i);
        for(int j=0; j<n; j++){
            cin>>a[i][j];
        }
        cout<<endl;
    }

    for(int i=0; i<n; i++)
    column.push_back(i);

    int times;

    if(m<=n)
    times= 2*m-1;
    else
    times=2*n;

    int y,keyY=0,keyX=0,x=0;


    
    while(times>0){

        if(times%2!=0){                                        //row traversing
            if(keyX==0){                 //ascending traversals
                for(auto it=column.begin(); it!=column.end(); it++)
                cout<<a[x][*it]<<" ";
                keyX=1;
                
                row.erase(row.begin());
                y=*(column.end()-1);
            }
            else{                         //descending traversals
                for(auto it=column.end()-1; it!=column.begin()-1; it--)
                cout<<a[x][*it]<<" ";
                keyX=0;
                
                row.pop_back();
                y=*column.begin();
            }
            
        }
        else{
            if(keyY==0){                 //downward transversals
                for(auto it=row.begin();it!=row.end();it++)
                cout<<a[*it][y]<<" ";
                keyY=1;

                column.pop_back();
                x=*(row.end()-1);
            }
            else{                        //upward transversals
                for(auto it=row.end()-1;it!=row.begin()-1;it--)
                cout<<a[*it][y]<<" ";
                keyY=0;

                column.erase(column.begin());
                x=*row.begin();
            }


        }
       
        --times;
    }

    
    
    return 0;
}