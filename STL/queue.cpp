#include<iostream>
#include<queue>
using namespace std;

int main(){
queue<string> q;

q.push("Adarsh");
q.push("Singh");
q.push("Raghuvanshi");

cout<< "First element-->" <<q.front() << endl;
q.pop();
cout<< "First element-->" <<q.front() << endl;

cout<< "size after pop-->"<< q.size() << endl;


}