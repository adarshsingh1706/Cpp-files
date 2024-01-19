#include <iostream>
#include <stack>
using namespace std;

int main(){
    stack<string> s;

    s.push("love");
    s.push("babar");
    s.push("kumar");

    cout << "TOP ELEMENT-->" << s.top() << endl;  //kumar

    s.pop();

    cout << "TOP ELEMENT-->" << s.top() << endl;


    cout << "empty or not-->" << s.empty();
    
    //similarly various operations can be performed
}
