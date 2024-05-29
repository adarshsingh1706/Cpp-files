#include <iostream>
#include <array>

using namespace std;
int main(){
    int basic[3] = {1,2,3};

    array<int,6> a = {1,2,3,4,5,6};

    for(int i=0;i<a.size();i++){
        cout<< a[i] << endl;
    }

    cout << "element at 2nd index -->" << a.at(2) <<endl;

    cout << "empty or not-->" <<a.empty() << endl;

    cout << "first element-->" << a.front()<<endl;
    cout << "last element-->" << a.back ()<<endl;
}

