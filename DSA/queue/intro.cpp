#include <iostream>
#include <queue>
using namespace std;

int main(){
  queue <int> q;

  q.push(11);
  q.push(21);
  q.push(31);
  q.push(41);
  q.push(51);
  cout<<"size of queue is : " << q.size()<<endl;
  q.pop();
  cout<<"size of queue is : " << q.size()<<endl;
  cout<<"front of queue is :" << q.front();



  return 0;
}