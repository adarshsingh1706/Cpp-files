#include<iostream>
#include<map>
using namespace std;
int main(){
    map<int,string> m;
    m[1] = "babar";
    m[2] = "love";
    m[3] = "kumar";

    for(auto i :m){
        cout<<i.second<<endl;
    }
}