#include <iostream>
#include <deque>

using namespace std;
int main(){

    deque<int> d;
    d.push_back(1);
    d.push_front(2);

    cout << "print 1st index element-->" << d.at(1)<<endl;

    // d.pop_front();
    // cout<<endl;
    // for(int i : d){
    //     cout<< i <<" ";
    // }


    cout << "first element-->" << d.front()<<endl;
    cout << "last element-->" << d.back ()<<endl;



    cout<<"size before clear "
    << d.size()<<endl;  


d.clear();

 cout<<"size after clear "
<< d.size()<<endl; 
} 

//erase(....), property