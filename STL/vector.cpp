#include <iostream>
#include <vector>
using namespace std;

int main(){

  vector<int> v;
  v.push_back(4);
  v.push_back(5);
  v.push_back(6);
  v.push_back(7);
  cout << "capacity of v-->"<< v.capacity()<<endl;
  v.push_back(8);
  cout << "capacity of v-->"<< v.capacity()<<endl;
  cout << "size of v-->"<< v.size()<<endl;
  cout<<"size before clear "
<< v.size()<<endl;  


v.clear();
 cout<<"size after clear "
<< v.size()<<endl; 
}