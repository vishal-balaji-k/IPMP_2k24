#include <iostream>
#include <vector>
#include <utility>
#include <map>
#include <queue>
#include <algorithm>
#include <stack>
#include <set>
using namespace std;

void vector2d(){
    vector<int> a;
    vector<int> b;
    a.push_back(5);
    a.push_back(17);
    a.push_back(3);
    a.push_back(7);
    a.push_back(25);
    a.push_back(6);
    a.push_back(1);
    a.push_back(13);

    //so the vector would now contain  front<5 17 3 7 25 6 1 13>back
    cout<<"a[0]:  "<<a[0]<<"\n";
    cout<<"a[3]:  "<<a[3]<<"\n";
    cout<<"Size:  "<<a.size()<<"\n";
    cout<<"Capacity:  "<<a.capacity()<<"\n";
    cout<<"Max_size:  "<<a.max_size()<<"\n";
    cout<<"*a.begin():  "<<*a.begin()<<"\n";
    cout<<"*(++a.begin()):  "<<*(++a.begin())<<"\n";
    cout<<"*a.end():  "<<*a.end()<<"\n"; //this would output some garbage value as end() points to the next value of last element in the vector
    cout<<"*--a.end():  "<<*--a.end()<<"\n";
    cout<<"b.empty()?:  "<<b.empty()<<"\n";
    a.pop_back();
    cout<<"*--a.end():  "<<*--a.end()<<"\n";
    a.insert(a.begin()+3,44);
    cout<<"*(a.begin()+3):  "<<*(a.begin()+3)<<"\n";
}

void mapSTL(){
    map<int, int> marks;

    marks.insert(pair<int,int>(1,66));
    marks.insert(pair<int,int>(2,73));
    marks.insert(pair<int,int>(3,42));
    marks.insert(pair<int,int>(4,96));
    marks.insert(pair<int,int>(5,34));
    marks.insert(pair<int,int>(6,100));

    map<int, int>::iterator itr;
    cout<<"Marks of everyone:"<<endl;
    cout<<"Roll No.   Marks"<<endl;
    for(itr=marks.begin(); itr!=marks.end(); itr++){
        cout<<itr->first<<"          "<<itr->second<<endl;
    }


    marks.erase(5);
    cout<<"Marks of students who passed:"<<endl;
    for(itr=marks.begin(); itr!=marks.end(); itr++){
        cout<<itr->first<<"          "<<itr->second<<endl;
    }

    itr=marks.find(6);
    cout<<"Highest mark:"<<endl;
    cout<<itr->first<<"          "<<itr->second<<endl;

    cout<<"No. of students who took the test:"<<endl;
    cout<<marks.size();



}

void displayQ(queue<int> q1){
    while(!q1.empty()){
        cout<<q1.front()<<"\t";
        q1.pop();
    }
    cout<<"\n";
}
void queueSTL(){
    queue<int> q;
    q.push(1);
    q.push(2);
    q.push(3);
    q.push(4);
    q.push(5);

    displayQ(q);

    q.pop();

    displayQ(q);

    q.emplace(11);

    displayQ(q);

}

void sorting(){
    int a[]={3,4,7,1,6,13,27,6,7,9,0,1,5,85};

    int asize=sizeof(a)/sizeof(a[0]);

    for(int i=0;i<asize;i++)
    cout<<a[i]<<" ";
    cout<<"\n";

    sort(a, a+asize);

    for(int i=0;i<asize;i++)
    cout<<a[i]<<" ";
    cout<<"\n";

}

void displayStk(stack<int> stk){
    while (!stk.empty()) {
        cout << ' ' << stk.top();
        stk.pop();
    }
    cout<<endl;
}
void stackSTL(){
    stack<int> stk;
    stk.push(21);
    stk.push(22);
    stk.push(24);
    stk.push(25);
    displayStk(stk);
    stk.pop();
    stk.pop();
    displayStk(stk);
    cout<<"Top element:"<<stk.top();
}
 
bool pred(int i, int j)
{
    if (i > j) {
        return 1;
    } else {
        return 0;
    }
}
void searchSTL(){
    vector<int> v1 = { 1, 2, 3, 4, 5, 6, 7 };
    vector<int> v2 = { 3, 4, 5 };
  
    vector<int>::iterator itr;
  
    itr = std::search(v1.begin(), v1.end(), v2.begin(), v2.end());
  
    if (itr != v1.end()) {
        cout << "vector2 is present at index " << (itr - v1.begin())<<endl;
    } 
    else {
        cout << "vector2 is not present in vector1"<<endl;
    } 


    int i, j;
    vector<int>::iterator i1;
  
    // Using std::search and storing the result in
    // iterator i1 based on predicate pred
    i1 = search(v1.begin(), v1.end(), v2.begin(), v2.end(), pred);

    if (i1 != v1.end()) {
        cout << "vector1 elements are greater than vector2 starting from position " << (i1 - v1.begin())<<endl;
    } else {
        cout << "vector1 elements are not greater than vector2 "<< "elements consecutively."<<endl;
    }
}
    
void setSTL(){
    set<int> a={3,6,8,15,2,55,9};

    set<int>::iterator itr;
    for(itr=a.begin(); itr!=a.end(); itr++)
    cout<<*itr<<"\t";
    cout<<endl;

    set<int,greater<int>> b={3,6,8,15,2,55,9};
    for(itr=b.begin(); itr!=b.end(); itr++)
    cout<<*itr<<"\t";
    cout<<endl;

    b.erase(b.begin(),b.find(8));
    for(itr=b.begin(); itr!=b.end(); itr++)
    cout<<*itr<<"\t";
    cout<<endl;

    set<int> c;
    c.insert(3);
    c.insert(66);
    c.insert(1);
    c.insert(9);
    c.insert(2);

    for(itr=c.begin(); itr!=c.end(); itr++)
    cout<<*itr<<"\t";
    cout<<endl;



}


int main(){

    //vector2d();
    //mapSTL();
    //queueSTL();
    //sorting();
    //stackSTL();
    //searchSTL();
    //setSTL();

    
    return 0;
}