#include <iostream>
#include <list>
using namespace std;

int main(){
    list<int> l;
    l.push_back(1);
    l.push_front(2);
    l.push_front(3);
    l.push_front(4);

    for (int i:l){
        cout<< i <<" ";
    }

    cout << endl;
    // for removing first element
     l.erase(l.begin());
    cout<<"after erase"<< endl;
    for(int i:l){
        cout<<i<<" ";
    }

    //for removing last element
    l.erase(--l.end());
    cout<<"after erase"<< endl;
    for(int i:l){
        cout<<i<<" ";
    }

    



}