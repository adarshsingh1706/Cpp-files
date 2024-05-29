#include<iostream>
#include<set>
using namespace std;
int main(){
set<int> s;

s.insert(5);
s.insert(1);
s.insert(4);
s.insert(6);
s.insert(45);
s.insert(19);

for(auto i:s){
    cout<<i<<endl;
}

cout<< endl;
cout<<"5 is present or not-->"<<s.count(5)<< endl; 


}